/*
 *  Copyright (c) 2018-present, Facebook, Inc.
 *
 *  This source code is licensed under the MIT license found in the LICENSE
 *  file in the root directory of this source tree.
 *
 */
#import <FlipperKit/SKMacros.h>

FB_LINK_REQUIRE(UIView_SKInvalidation)
@interface UIView (SKInvalidation)

+ (void)enableInvalidation;

@end