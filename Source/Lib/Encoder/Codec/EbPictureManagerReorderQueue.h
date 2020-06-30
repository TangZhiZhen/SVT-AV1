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

#ifndef EbPictureManagerReorderQueue_h
#define EbPictureManagerReorderQueue_h

#include "EbDefinitions.h"
#include "EbSystemResourceManager.h"
#include "EbObject.h"

/************************************************
 * Packetization Reorder Queue Entry
 ************************************************/
typedef struct PictureManagerReorderEntry {
    EbDctor          dctor;
    uint64_t         picture_number;
    EbObjectWrapper *parent_pcs_wrapper_ptr;
} PictureManagerReorderEntry;

extern EbErrorType picture_manager_reorder_entry_ctor(PictureManagerReorderEntry *entry_ptr,
                                                      uint32_t                    picture_number);

#endif //EbPictureManagerReorderQueue_h
