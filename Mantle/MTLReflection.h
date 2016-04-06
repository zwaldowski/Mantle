//
//  MTLReflection.h
//  Mantle
//
//  Created by Justin Spahr-Summers on 2013-03-12.
//  Copyright (c) 2013 GitHub. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MTLDefines.h"

NS_ASSUME_NONNULL_BEGIN

/// Creates a selector from a key and a constant string.
///
/// key    - The key to insert into the generated selector. This key should be in
///          its natural case.
/// suffix - A string to append to the key as part of the selector.
///
/// Returns a selector, or NULL if the input strings cannot form a valid
/// selector.
MANTLE_PRIVATE MANTLE_PURE
SEL _Nullable MTLSelectorWithKeyPattern(NSString *key, const char *suffix);

/// Creates a selector from a key and a constant prefix and suffix.
///
/// prefix - A string to prepend to the key as part of the selector.
/// key    - The key to insert into the generated selector. This key should be in
///          its natural case, and will have its first letter capitalized when
///          inserted.
/// suffix - A string to append to the key as part of the selector.
///
/// Returns a selector, or NULL if the input strings cannot form a valid
/// selector.
MANTLE_PRIVATE MANTLE_PURE
SEL _Nullable MTLSelectorWithCapitalizedKeyPattern(const char *prefix, NSString *key, const char *suffix);

#ifdef __APPLE__
MANTLE_PRIVATE
BOOL MTLIsDebugging(void);
#else
NS_INLINE
BOOL MTLIsDebugging(void) {
	return NO;
}
#endif

NS_ASSUME_NONNULL_END
