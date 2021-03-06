/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADColorMap, OADTextListStyle, NSMutableArray, OADTheme;

@interface PDSlideMaster : PDSlideBase  {
    NSMutableArray *mSlideLayouts;
    OADTheme *mTheme;
    OADColorMap *mColorMap;
    OADTextListStyle *mTitleTextStyle;
    OADTextListStyle *mBodyTextStyle;
    OADTextListStyle *mOtherTextStyle;
    BOOL mHeaderPlaceholderIsVisible;
    BOOL mFooterPlaceholderIsVisible;
    BOOL mSlideNumberPlaceholderIsVisible;
    BOOL mDateTimePlaceholderIsVisible;
}

@property(retain) NSMutableArray * slideLayouts;
@property BOOL headerPlaceholderIsVisible;
@property BOOL footerPlaceholderIsVisible;
@property BOOL slideNumberPlaceholderIsVisible;
@property BOOL dateTimePlaceholderIsVisible;


- (BOOL)dateTimePlaceholderIsVisible;
- (BOOL)slideNumberPlaceholderIsVisible;
- (BOOL)footerPlaceholderIsVisible;
- (BOOL)headerPlaceholderIsVisible;
- (id)slideLayouts;
- (id)initWithDefaultsAndTheme:(id)arg1;
- (id)otherTextStyle;
- (BOOL)hasMappableSlideNumberShape;
- (id)placeholderWithType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3;
- (id)masterGraphicForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3;
- (id)parentShapePropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3;
- (id)parentTextBodyPropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3;
- (id)parentTextStyleForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 defaultTextListStyle:(id)arg3 overrideIndex:(BOOL)arg4;
- (id)parentTextStyleForTables;
- (id)bodyTextStyle;
- (id)titleTextStyle;
- (void)addSlideLayout:(id)arg1;
- (unsigned int)slideLayoutCount;
- (void)setSlideLayouts:(id)arg1;
- (void)setOtherTextStyle:(id)arg1;
- (void)setBodyTextStyle:(id)arg1;
- (void)setTitleTextStyle:(id)arg1;
- (id)slideLayoutOfType:(int)arg1;
- (id)addSlideLayout;
- (id)slideLayoutAtIndex:(unsigned int)arg1;
- (void)setSlideNumberPlaceholderIsVisible:(BOOL)arg1;
- (void)setDateTimePlaceholderIsVisible:(BOOL)arg1;
- (void)setFooterPlaceholderIsVisible:(BOOL)arg1;
- (void)setHeaderPlaceholderIsVisible:(BOOL)arg1;
- (void)setTheme:(id)arg1;
- (void)doneWithContent;
- (id)drawingTheme;
- (id)parentSlideBase;
- (id)fontScheme;
- (id)defaultTheme;
- (id)colorMap;
- (id)styleMatrix;
- (id)colorScheme;
- (id)theme;
- (void)dealloc;
- (id)init;

@end
