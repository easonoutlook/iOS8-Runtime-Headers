/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class PDAnimation, OADTableStyle, OADShape, OADBackground, NSString, PDTransition, NSArray;

@interface PDSlideBase : NSObject  {
    NSString *mName;
    NSArray *mDrawables;
    OADBackground *mBackground;
    PDAnimation *mAnimation;
    PDTransition *mTransition;
    OADTableStyle *mDefaultTableStyle;
    unsigned int mIsHidden : 1;
    unsigned int mIsDoneWithContent : 1;
    BOOL mCachedSlideNumberShape;
    OADShape *mSlideNumberShape;
    BOOL mCachedSlideNumberPlaceholder;
    OADShape *mSlideNumberPlaceholder;
}

@property(readonly) OADShape * slideNumberShape;
@property(readonly) OADShape * slideNumberPlaceholder;
@property(readonly) BOOL hasMappableSlideNumberShape;

+ (int)inheritedPlaceholderType:(int)arg1;

- (void)generatePpt9Animations:(id)arg1;
- (BOOL)hasPpt9Animations;
- (BOOL)hasPpt10Animations;
- (BOOL)hasMappableSlideNumberShape;
- (id)slideNumberPlaceholder;
- (id)slideNumberShape;
- (id)placeholderWithType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3;
- (void)setDrawables:(id)arg1 defaultTextListStyle:(id)arg2;
- (void)setPpt9AnimationDataForCacheItem:(id)arg1 order:(int)arg2 state:(id)arg3;
- (id)placeholders;
- (id)placeholderWithType:(int)arg1 placeholderTypeIndex:(int)arg2 useBaseTypeMatch:(BOOL)arg3 overrideIndex:(BOOL)arg4;
- (void)setInheritedTextStyle:(id)arg1 placeholderType:(int)arg2 defaultTextListStyle:(id)arg3;
- (id)masterGraphicForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3;
- (id)parentShapePropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3;
- (id)parentTextBodyPropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3;
- (id)parentTextStyleForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 defaultTextListStyle:(id)arg3 overrideIndex:(BOOL)arg4;
- (id)parentTextStyleForTables;
- (void)addSlideNumberPlaceholder:(id)arg1;
- (void)setDefaultTableStyle:(id)arg1;
- (id)defaultTableStyle;
- (void)doneWithContent;
- (id)drawingTheme;
- (id)drawables;
- (id)parentSlideBase;
- (id)fontScheme;
- (id)defaultTheme;
- (id)colorMap;
- (id)styleMatrix;
- (id)colorScheme;
- (void)setBackground:(id)arg1;
- (id)background;
- (void)setIsHidden:(BOOL)arg1;
- (id)transition;
- (void)setTransition:(id)arg1;
- (id)animation;
- (BOOL)isHidden;
- (id)name;
- (void)setName:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;

@end