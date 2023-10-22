/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Tencent is pleased to support the open source community by making tgfx available.
//
//  Copyright (C) 2023 THL A29 Limited, a Tencent company. All rights reserved.
//
//  Licensed under the BSD 3-Clause License (the "License"); you may not use this file except
//  in compliance with the License. You may obtain a copy of the License at
//
//      https://opensource.org/licenses/BSD-3-Clause
//
//  unless required by applicable law or agreed to in writing, software distributed under the
//  license is distributed on an "as is" basis, without warranties or conditions of any kind,
//  either express or implied. see the license for the specific language governing permissions
//  and limitations under the license.
//
/////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

namespace tgfx {
/**
 * Describes color range of YUV pixels. The color mapping from YUV to RGB varies depending on the
 * source. YUV pixels may be generated by JPEG images, standard video streams, or high-definition
 * video streams. Each has its own mapping from YUV to RGB. JPEG YUV values encode the full range of
 * 0 to 255 for all three components. Video YUV values often range from 16 to 235 for Y and from 16
 * to 240 for U and V (limited). Details of encoding and conversion to RGB are described in YCbCr
 * color space.
 */
enum class YUVColorSpace {
  /**
   * Describes SDTV limited range.
   */
  BT601_LIMITED,
  /**
   * Describes SDTV full range.
   */
  BT601_FULL,
  /**
   * Describes HDTV limited range.
   */
  BT709_LIMITED,
  /**
   * Describes HDTV full range.
   */
  BT709_FULL,
  /**
   * Describes UHDTV limited range.
   */
  BT2020_LIMITED,
  /**
   * Describes UHDTV full range.
   */
  BT2020_FULL,
  /**
   * Describes full range.
   */
  JPEG_FULL
};

bool IsLimitedYUVColorRange(YUVColorSpace colorSpace);
}  // namespace tgfx