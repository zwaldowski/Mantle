//
//  NSValueTransformer+MTLInversionAdditions.h
//  Mantle
//
//  Created by Justin Spahr-Summers on 2013-05-18.
//  Copyright (c) 2013 GitHub. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSValueTransformer (MTLInversionAdditions)

/// Flips the direction of the receiver's transformation, such that
/// -transformedValue: will become -reverseTransformedValue:, and vice-versa.
///
/// The receiver must allow reverse transformation.
///
/// Returns an inverted transformer.
- (NSValueTransformer *)mtl_invertedTransformer;

@end

NS_ASSUME_NONNULL_END
