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

/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.9.8 */

#ifndef PB_GDT_CLIENT_METRICS_CLIENT_METRICS_NANOPB_H_INCLUDED
#define PB_GDT_CLIENT_METRICS_CLIENT_METRICS_NANOPB_H_INCLUDED
#include <nanopb/pb.h>

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif


/* Enum definitions */
typedef enum _gdt_client_metrics_LogEventDropped_Reason {
    gdt_client_metrics_LogEventDropped_Reason_REASON_UNKNOWN = 0,
    gdt_client_metrics_LogEventDropped_Reason_MESSAGE_TOO_OLD = 1,
    gdt_client_metrics_LogEventDropped_Reason_CACHE_FULL = 2,
    gdt_client_metrics_LogEventDropped_Reason_PAYLOAD_TOO_BIG = 3,
    gdt_client_metrics_LogEventDropped_Reason_MAX_RETRIES_REACHED = 4,
    gdt_client_metrics_LogEventDropped_Reason_INVALID_PAYLOD = 5,
    gdt_client_metrics_LogEventDropped_Reason_SERVER_ERROR = 6
} gdt_client_metrics_LogEventDropped_Reason;
#define _gdt_client_metrics_LogEventDropped_Reason_MIN gdt_client_metrics_LogEventDropped_Reason_REASON_UNKNOWN
#define _gdt_client_metrics_LogEventDropped_Reason_MAX gdt_client_metrics_LogEventDropped_Reason_SERVER_ERROR
#define _gdt_client_metrics_LogEventDropped_Reason_ARRAYSIZE ((gdt_client_metrics_LogEventDropped_Reason)(gdt_client_metrics_LogEventDropped_Reason_SERVER_ERROR+1))

/* Struct definitions */
typedef struct _gdt_client_metrics_ClientMetrics {
    struct _gdt_client_metrics_TimeWindow *window;
    pb_size_t log_source_metrics_count;
    struct _gdt_client_metrics_LogSourceMetrics *log_source_metrics;
    struct _gdt_client_metrics_GlobalMetrics *global_metrics;
    pb_bytes_array_t *app_namespace;
/* @@protoc_insertion_point(struct:gdt_client_metrics_ClientMetrics) */
} gdt_client_metrics_ClientMetrics;

typedef struct _gdt_client_metrics_GlobalMetrics {
    struct _gdt_client_metrics_StorageMetrics *storage_metrics;
/* @@protoc_insertion_point(struct:gdt_client_metrics_GlobalMetrics) */
} gdt_client_metrics_GlobalMetrics;

typedef struct _gdt_client_metrics_LogSourceMetrics {
    pb_bytes_array_t *log_source;
    pb_size_t log_event_dropped_count;
    struct _gdt_client_metrics_LogEventDropped *log_event_dropped;
/* @@protoc_insertion_point(struct:gdt_client_metrics_LogSourceMetrics) */
} gdt_client_metrics_LogSourceMetrics;

typedef struct _gdt_client_metrics_LogEventDropped {
    int64_t events_dropped_count;
    gdt_client_metrics_LogEventDropped_Reason reason;
/* @@protoc_insertion_point(struct:gdt_client_metrics_LogEventDropped) */
} gdt_client_metrics_LogEventDropped;

typedef struct _gdt_client_metrics_StorageMetrics {
    int64_t current_cache_size_bytes;
    int64_t max_cache_size_bytes;
/* @@protoc_insertion_point(struct:gdt_client_metrics_StorageMetrics) */
} gdt_client_metrics_StorageMetrics;

typedef struct _gdt_client_metrics_TimeWindow {
    int64_t start_ms;
    int64_t end_ms;
/* @@protoc_insertion_point(struct:gdt_client_metrics_TimeWindow) */
} gdt_client_metrics_TimeWindow;

/* Default values for struct fields */

/* Initializer values for message structs */
#define gdt_client_metrics_ClientMetrics_init_default {NULL, 0, NULL, NULL, NULL}
#define gdt_client_metrics_TimeWindow_init_default {0, 0}
#define gdt_client_metrics_GlobalMetrics_init_default {NULL}
#define gdt_client_metrics_StorageMetrics_init_default {0, 0}
#define gdt_client_metrics_LogSourceMetrics_init_default {NULL, 0, NULL}
#define gdt_client_metrics_LogEventDropped_init_default {0, _gdt_client_metrics_LogEventDropped_Reason_MIN}
#define gdt_client_metrics_ClientMetrics_init_zero {NULL, 0, NULL, NULL, NULL}
#define gdt_client_metrics_TimeWindow_init_zero  {0, 0}
#define gdt_client_metrics_GlobalMetrics_init_zero {NULL}
#define gdt_client_metrics_StorageMetrics_init_zero {0, 0}
#define gdt_client_metrics_LogSourceMetrics_init_zero {NULL, 0, NULL}
#define gdt_client_metrics_LogEventDropped_init_zero {0, _gdt_client_metrics_LogEventDropped_Reason_MIN}

/* Field tags (for use in manual encoding/decoding) */
#define gdt_client_metrics_ClientMetrics_window_tag 1
#define gdt_client_metrics_ClientMetrics_log_source_metrics_tag 2
#define gdt_client_metrics_ClientMetrics_global_metrics_tag 3
#define gdt_client_metrics_ClientMetrics_app_namespace_tag 4
#define gdt_client_metrics_GlobalMetrics_storage_metrics_tag 1
#define gdt_client_metrics_LogSourceMetrics_log_source_tag 1
#define gdt_client_metrics_LogSourceMetrics_log_event_dropped_tag 2
#define gdt_client_metrics_LogEventDropped_events_dropped_count_tag 1
#define gdt_client_metrics_LogEventDropped_reason_tag 3
#define gdt_client_metrics_StorageMetrics_current_cache_size_bytes_tag 1
#define gdt_client_metrics_StorageMetrics_max_cache_size_bytes_tag 2
#define gdt_client_metrics_TimeWindow_start_ms_tag 1
#define gdt_client_metrics_TimeWindow_end_ms_tag 2

/* Struct field encoding specification for nanopb */
extern const pb_field_t gdt_client_metrics_ClientMetrics_fields[5];
extern const pb_field_t gdt_client_metrics_TimeWindow_fields[3];
extern const pb_field_t gdt_client_metrics_GlobalMetrics_fields[2];
extern const pb_field_t gdt_client_metrics_StorageMetrics_fields[3];
extern const pb_field_t gdt_client_metrics_LogSourceMetrics_fields[3];
extern const pb_field_t gdt_client_metrics_LogEventDropped_fields[3];

/* Maximum encoded size of messages (where known) */
/* gdt_client_metrics_ClientMetrics_size depends on runtime parameters */
#define gdt_client_metrics_TimeWindow_size       22
/* gdt_client_metrics_GlobalMetrics_size depends on runtime parameters */
#define gdt_client_metrics_StorageMetrics_size   22
/* gdt_client_metrics_LogSourceMetrics_size depends on runtime parameters */
#define gdt_client_metrics_LogEventDropped_size  13

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define CLIENT_METRICS_MESSAGES \


#endif

/* @@protoc_insertion_point(eof) */

#endif
