/*

    File: UIColor+ColorWithHex.h
 Version: 1.0
    Date: 2014-03-01
  Author: Eric Bailey <eric@ericb.me>
          Electric Wizardry, LLC <http://electric-wizardry.com>

 This is free and unencumbered software released into the public domain.

 Anyone is free to copy, modify, publish, use, compile, sell, or
 distribute this software, either in source code form or as a compiled
 binary, for any purpose, commercial or non-commercial, and by any
 means.

 In jurisdictions that recognize copyright laws, the author or authors
 of this software dedicate any and all copyright interest in the
 software to the public domain. We make this dedication for the benefit
 of the public at large and to the detriment of our heirs and
 successors. We intend this dedication to be an overt act of
 relinquishment in perpetuity of all present and future rights to this
 software under copyright law.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR
 OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 OTHER DEALINGS IN THE SOFTWARE.

 For more information, please refer to <http://unlicense.org/>

 */

@import UIKit.UIColor;

/**
 *  This category facilitates the creation of [UIColor](http://is.gd/UIColor)
 *  objects with hexidecimal color values.
 *
 *  @since v1.0
 */
@interface UIColor (ColorWithHex)

////////////////////////////////////////////////////////////////////////////////
/// @name Creating a UIColor instance with a hexidecimal color
/// value
////////////////////////////////////////////////////////////////////////////////

/**
 *  Returns a [UIColor](http://is.gd/UIColor) instance based on the hexidecimal
 *  color value _hexValue_.
 *
 *  @param hex A six-digit hexidecimal integer.
 *
 *  @return A [UIColor](http://is.gd/UIColor) object.
 *
 *  @since v1.0
 */
+ (UIColor *)colorWithHex:(int)hex;
/**
 *  Returns a [UIColor](http://is.gd/UIColor) instance based on the hexidecimal
 *  color value _hexValue_ with an opacity of _alpha_.
 *
 *  @param hex A six-digit hexidecimal integer.
 *  @param alpha    An alpha value from 0 to 1.
 *
 *  @return A [UIColor](http://is.gd/UIColor) object.
 *
 *  @since v1.0
 */
+ (UIColor *)colorWithHex:(int)hex alpha:(CGFloat)alpha;

@end
