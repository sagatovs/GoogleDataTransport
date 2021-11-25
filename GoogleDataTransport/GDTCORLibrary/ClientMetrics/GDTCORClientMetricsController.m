/*
 * Copyright 2021 Google LLC
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#import "GoogleDataTransport/GDTCORLibrary/ClientMetrics/GDTCORClientMetricsController.h"

#if __has_include(<FBLPromises/FBLPromises.h>)
#import <FBLPromises/FBLPromises.h>
#else
#import "FBLPromises.h"
#endif

#import "GoogleDataTransport/GDTCORLibrary/Internal/GDTCORRegistrar.h"

#import "GoogleDataTransport/GDTCORLibrary/Private/GDTCORFlatFileStorage.h"

@interface GDTCORClientMetricsController ()
@property(readonly) id<GDTCORStoragePromiseProtocol> storage;
@end

@implementation GDTCORClientMetricsController

+ (void)load {
  // Register a metrics controller instance only for supported backends.
  [[GDTCORRegistrar sharedInstance] registerMetricsController:[self sharedInstance]
                                                    forTarget:kGDTCORTargetFLL];
  [[GDTCORRegistrar sharedInstance] registerMetricsController:[self sharedInstance]
                                                    forTarget:kGDTCORTargetCSH];
}

+ (instancetype)sharedInstance {
  static GDTCORClientMetricsController *metricsController;

  dispatch_once_t onceToken;
  dispatch_once(&onceToken, ^{
    metricsController = [[self alloc] init];
  });
  return metricsController;
}

- (nonnull FBLPromise<NSNull *> *)confirmSendingClientMetrics:
    (nonnull GDTCORClientMetrics *)sentMetrics {
  return [FBLPromise resolvedWith:nil];
}

- (nonnull FBLPromise<GDTCORClientMetrics *> *)getMetrics {
  return [FBLPromise resolvedWith:nil];
}

- (void)logEventsDroppedWithReason:(GDTCOREventDropReason)reason
                         mappingID:(nonnull NSString *)mappingID
                             count:(NSUInteger)count {
}

#pragma - GDTCORStorageDelegate

- (void)storage:(nonnull id<GDTCORStoragePromiseProtocol>)storage
    didDropEvent:(nonnull GDTCOREvent *)event {
}

- (void)storage:(nonnull id<GDTCORStoragePromiseProtocol>)storage
    didRemoveExpiredEvents:(NSUInteger)eventCount {
}

@end
