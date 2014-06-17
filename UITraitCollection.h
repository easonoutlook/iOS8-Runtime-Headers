/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSDictionary;

@interface UITraitCollection : NSObject <NSCopying, NSSecureCoding> {
    struct { 
        int userInterfaceIdiom; 
        float displayScale; 
        int touchLevel; 
        int interactionModel; 
        int horizontalSizeClass; 
        int verticalSizeClass; 
    } _builtinTraits;
    NSDictionary *_clientDefinedTraits;
}

@property(readonly) BOOL MPU_hasCompactWidth;
@property(readonly) BOOL MPU_hasRegularWidth;
@property(readonly) int userInterfaceIdiom;
@property(readonly) float displayScale;
@property(readonly) int horizontalSizeClass;
@property(readonly) int verticalSizeClass;

+ (id)_traitCollectionWithValue:(id)arg1 forTraitNamed:(id)arg2;
+ (id)traitCollectionWithTouchLevel:(int)arg1;
+ (id)traitCollectionWithInteractionModel:(int)arg1;
+ (id)_emptyTraitCollection;
+ (id)traitCollectionWithTraitsFromCollections:(id)arg1;
+ (id)traitCollectionWithVerticalSizeClass:(int)arg1;
+ (id)traitCollectionWithHorizontalSizeClass:(int)arg1;
+ (id)traitCollectionWithUserInterfaceIdiom:(int)arg1;
+ (id)traitCollectionWithDisplayScale:(float)arg1;
+ (BOOL)supportsSecureCoding;

- (int)interactionModel;
- (int)touchLevel;
- (id)_initWithBuiltinTraitStorage:(struct { int x1; float x2; int x3; int x4; int x5; int x6; }*)arg1 clientDefinedTraits:(id)arg2;
- (BOOL)_matchesIntersectionWithTraitCollection:(id)arg1;
- (id)_namedImageDescription;
- (id)_valueForTraitNamed:(id)arg1;
- (float)displayScale;
- (BOOL)containsTraitsInCollection:(id)arg1;
- (int)horizontalSizeClass;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)verticalSizeClass;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (int)userInterfaceIdiom;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;
- (BOOL)MPU_hasCompactWidth;
- (BOOL)MPU_hasRegularWidth;

@end