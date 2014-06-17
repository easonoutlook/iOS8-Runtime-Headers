/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSPObject, NSArray;

@interface TSPPasteboardObject : TSPObject  {
    BOOL _isCrossAppPaste;
    BOOL _isCrossDocumentPaste;
    BOOL _isTextPrimary;
    BOOL _isSmartCopyPaste;
    NSArray *_drawables;
    NSArray *_styles;
    TSPObject *_stylesheet;
    TSPObject *_theme;
    TSPObject *_wpStorage;
    TSPObject *_guideStorage;
    TSPObject *_appNativeObject;
}

@property(copy) NSArray * drawables;
@property(copy) NSArray * styles;
@property(retain) TSPObject * stylesheet;
@property(retain) TSPObject * theme;
@property(retain) TSPObject * wpStorage;
@property(retain) TSPObject * guideStorage;
@property(retain) TSPObject * appNativeObject;
@property(readonly) BOOL isCrossAppPaste;
@property(readonly) BOOL isCrossDocumentPaste;
@property BOOL isTextPrimary;
@property BOOL isSmartCopyPaste;


- (void)setStylesheet:(id)arg1;
- (id)stylesheet;
- (id)styles;
- (void)setStyles:(id)arg1;
- (void)setTheme:(id)arg1;
- (id)drawables;
- (id)theme;
- (void).cxx_destruct;
- (id)initWithContext:(id)arg1;
- (void)setIsSmartCopyPaste:(BOOL)arg1;
- (BOOL)isSmartCopyPaste;
- (void)setIsTextPrimary:(BOOL)arg1;
- (BOOL)isTextPrimary;
- (void)setAppNativeObject:(id)arg1;
- (id)appNativeObject;
- (void)setGuideStorage:(id)arg1;
- (id)guideStorage;
- (void)setWpStorage:(id)arg1;
- (id)wpStorage;
- (void)setDrawables:(id)arg1;
- (BOOL)isCrossDocumentPaste;
- (BOOL)isCrossAppPaste;
- (long long)tsp_identifier;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;

@end
