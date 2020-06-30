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

#include "EbMeSadCalculation.h"

void initialize_buffer_32bits_c(uint32_t* pointer, uint32_t count128, uint32_t count32,
                                uint32_t value) {
    uint32_t counter;
    for (counter = 0; counter < count128 * 4 + count32; ++counter) { pointer[counter] = value; }
}
