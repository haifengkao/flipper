/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#ifdef FB_SONARKIT_ENABLED

#import <FlipperKit/SKMacros.h>
#import <Foundation/Foundation.h>
#import "UIDFoundation.h"
#import "UIDFrameworkEventMetadata.h"

NS_ASSUME_NONNULL_BEGIN

FB_LINK_REQUIRE_CATEGORY(UIDFrameworkEventMetadata_Foundation)
@interface UIDFrameworkEventMetadata (Foundation)<UIDFoundation>

@end

NS_ASSUME_NONNULL_END

#endif
