/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#ifdef FB_SONARKIT_ENABLED

#import <UIKit/UIKit.h>

#import <FlipperKitLayoutHelpers/SKNodeDescriptor.h>

@class SKDescriptorMapper;

@interface SKViewDescriptor : SKNodeDescriptor<UIView*>

@end

#endif
