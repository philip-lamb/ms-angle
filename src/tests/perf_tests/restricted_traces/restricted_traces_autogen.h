// GENERATED FILE - DO NOT EDIT.
// Generated by gen_restricted_traces.py using data from restricted_traces.json
//
// Copyright 2020 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// restricted_traces_autogen: Types and enumerations for trace tests.

#ifndef ANGLE_RESTRICTED_TRACES_H_
#define ANGLE_RESTRICTED_TRACES_H_

#include <cstdint>
#include <vector>

// See util/util_export.h for details on import/export labels.
#if !defined(ANGLE_TRACE_EXPORT)
#    if defined(_WIN32)
#        if defined(ANGLE_TRACE_IMPLEMENTATION)
#            define ANGLE_TRACE_EXPORT __declspec(dllexport)
#        else
#            define ANGLE_TRACE_EXPORT __declspec(dllimport)
#        endif
#    elif defined(__GNUC__)
#        define ANGLE_TRACE_EXPORT __attribute__((visibility("default")))
#    else
#        define ANGLE_TRACE_EXPORT
#    endif
#endif  // !defined(ANGLE_TRACE_EXPORT)

namespace angle
{
enum class RestrictedTraceID
{
    angry_birds_2_1500,
    candy_crush_500,
    egypt_1500,
    manhattan_10,
    subway_surfer_500,
    temple_run_300,
    trex_200,
    InvalidEnum,
    EnumCount = InvalidEnum
};

using ReplayFunc           = void (*)(uint32_t);
using ResetFunc            = void (*)();
using SetupFunc            = void (*)();
using DecompressFunc       = uint8_t *(*)(const std::vector<uint8_t> &);
using SetBinaryDataDirFunc = void (*)(const char *);

static constexpr size_t kTraceInfoMaxNameLen = 32;

struct TraceInfo
{
    uint32_t startFrame;
    uint32_t endFrame;
    uint32_t drawSurfaceWidth;
    uint32_t drawSurfaceHeight;
    char name[kTraceInfoMaxNameLen];
};

using DecompressCallback = uint8_t *(*)(const std::vector<uint8_t> &);

ANGLE_TRACE_EXPORT const TraceInfo &GetTraceInfo(RestrictedTraceID traceID);
ANGLE_TRACE_EXPORT void ReplayFrame(RestrictedTraceID traceID, uint32_t frameIndex);
ANGLE_TRACE_EXPORT void ResetReplay(RestrictedTraceID traceID);
ANGLE_TRACE_EXPORT void SetupReplay(RestrictedTraceID traceID);
ANGLE_TRACE_EXPORT void SetBinaryDataDir(RestrictedTraceID traceID, const char *dataDir);
ANGLE_TRACE_EXPORT void SetBinaryDataDecompressCallback(RestrictedTraceID traceID,
                                                        DecompressCallback callback);
}  // namespace angle

#endif  // ANGLE_RESTRICTED_TRACES_H_
