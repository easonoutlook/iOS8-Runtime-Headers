/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSSStylesheet, NSArray, NSDictionary, NSMutableDictionary;

@interface TSSReapUnusedStylesCommand : TSKCommand  {
    TSSStylesheet *mStylesheet;
    NSArray *mStyles;
    NSMutableDictionary *mIdentifiedStyles;
    NSArray *_styles;
}

@property(readonly) TSSStylesheet * stylesheet;
@property(readonly) NSArray * styles;
@property(readonly) NSDictionary * identifiedStyles;


- (id)stylesheet;
- (id)styles;
- (BOOL)process;
- (void)dealloc;
- (id)initWithDocumentRoot:(id)arg1 stylesheet:(id)arg2;
- (id)identifiedStyles;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;

@end
