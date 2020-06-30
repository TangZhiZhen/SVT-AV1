/*
* Copyright (c) 2019, Alliance for Open Media. All rights reserved
*
* This source code is subject to the terms of the BSD 2 Clause License and
* the Alliance for Open Media Patent License 1.0. If the BSD 2 Clause License
* was not distributed with this source code in the LICENSE file, you can
* obtain it at www.aomedia.org/license/software. If the Alliance for Open
* Media Patent License 1.0 was not distributed with this source code in the
* PATENTS file, you can obtain it at www.aomedia.org/license/patent.
*/

/******************************************************************************
 * @file PerformanceCollect.cc
 *
 * @brief Impelmentation of performance tool for timing collection
 *
 * @author Cidana-Edmond
 *
 ******************************************************************************/

#include <thread>
#include "PerformanceCollect.h"
#include "gtest/gtest.h"
#include "../util.h"

uint64_t PerformanceCollect::get_time_tick() {
    using namespace std::chrono;
    steady_clock::time_point tp = steady_clock::now();
    steady_clock::duration dtn = tp.time_since_epoch();
    return dtn.count() / 1000000;
}
