/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSString, TSUColor;

@interface TSKAnnotationAuthor : TSPObject  {
    NSString *mName;
    TSUColor *mColor;
}

@property(copy) NSString * name;
@property(retain) TSUColor * storageColor;
@property(readonly) TSUColor * textMarkupColor;
@property(readonly) TSUColor * textHighlightColor;
@property(readonly) TSUColor * cellViolatorColor;
@property(readonly) TSUColor * flagStrokeColor;
@property(readonly) TSUColor * flagPressedColor;
@property(readonly) TSUColor * changeAdornmentsColor;
@property(readonly) TSUColor * flagFillColor;
@property(readonly) TSUColor * popoverColor;
@property(readonly) TSUColor * gradientStartColor;
@property(readonly) TSUColor * gradientEndColor;
@property(readonly) NSString * authorColorName;

+ (id)authorColorAppearanceNameForIndex:(unsigned int)arg1;
+ (id)authorColorNameForIndex:(unsigned int)arg1;
+ (id)authorGradientEndColorForIndex:(unsigned int)arg1;
+ (id)authorGradientStartColorForIndex:(unsigned int)arg1;
+ (id)authorPopoverColorForIndex:(unsigned int)arg1;
+ (id)authorFlagFillColorForIndex:(unsigned int)arg1;
+ (id)authorChangeAdornmentsColorForIndex:(unsigned int)arg1;
+ (id)authorFlagPressedColorForIndex:(unsigned int)arg1;
+ (id)authorFlagStrokeColorForIndex:(unsigned int)arg1;
+ (id)authorCellViolatorColorForIndex:(unsigned int)arg1;
+ (id)authorTextHighlightColorForIndex:(unsigned int)arg1;
+ (id)authorTextMarkupColorForIndex:(unsigned int)arg1;
+ (id)authorStorageColorForIndex:(unsigned int)arg1;
+ (unsigned int)presetColorCount;
+ (id)defaultAuthorName;

- (id)gradientEndColor;
- (id)gradientStartColor;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)authorColorName;
- (id)popoverColor;
- (id)changeAdornmentsColor;
- (id)flagPressedColor;
- (id)cellViolatorColor;
- (id)textHighlightColor;
- (id)textMarkupColor;
- (void)setStorageColor:(id)arg1;
- (unsigned int)p_authorColorIndex;
- (id)storageColor;
- (id)flagFillColor;
- (id)flagStrokeColor;
- (id)initWithContext:(id)arg1 name:(id)arg2 color:(id)arg3;
- (void)saveToArchiver:(id)arg1;
- (BOOL)allowsImplicitComponentOwnership;
- (id)componentRootObject;
- (id)initFromUnarchiver:(id)arg1;

@end
