/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@class NSMutableDictionary, NSString, WebView, DOMRange, DOMDocument, NSMutableArray, NSDictionary, WebDataSource, NSURL, NSMutableAttributedString, NSData;

@interface NSHTMLReader : NSObject  {
    NSMutableAttributedString *_attrStr;
    NSMutableDictionary *_documentAttrs;
    NSData *_data;
    NSURL *_baseURL;
    NSDictionary *_options;
    WebView *_webView;
    id _webDelegate;
    DOMDocument *_document;
    DOMRange *_domRange;
    NSMutableArray *_domStartAncestors;
    WebDataSource *_dataSource;
    NSString *_standardFontFamily;
    float _textSizeMultiplier;
    float _webViewTextSizeMultiplier;
    float _defaultTabInterval;
    float _defaultFontSize;
    float _minimumFontSize;
    NSMutableArray *_textLists;
    NSMutableArray *_textBlocks;
    NSMutableArray *_textTables;
    NSMutableDictionary *_textTableFooters;
    NSMutableArray *_textTableSpacings;
    NSMutableArray *_textTablePaddings;
    NSMutableArray *_textTableRows;
    NSMutableArray *_textTableRowArrays;
    NSMutableArray *_textTableRowBackgroundColors;
    NSMutableDictionary *_computedStylesForElements;
    NSMutableDictionary *_specifiedStylesForElements;
    NSMutableDictionary *_stringsForNodes;
    NSMutableDictionary *_floatsForNodes;
    NSMutableDictionary *_colorsForNodes;
    NSMutableDictionary *_attributesForElements;
    NSMutableDictionary *_elementIsBlockLevel;
    NSMutableDictionary *_fontCache;
    NSMutableArray *_writingDirectionArray;
    int _domRangeStartIndex;
    int _indexingLimit;
    int _thumbnailLimit;
    int _errorCode;
    int _quoteLevel;
    struct { 
        unsigned int isSoft : 1; 
        unsigned int reachedStart : 1; 
        unsigned int reachedEnd : 1; 
        unsigned int isIndexing : 1; 
        unsigned int isTesting : 1; 
        unsigned int hasTrailingNewline : 1; 
        unsigned int pad : 26; 
    } _flags;
}

+ (id)defaultParagraphStyle;
+ (void)initialize;

- (id)initWithPath:(id)arg1 options:(id)arg2;
- (void)_loadUsingWebKitOnMainThread;
- (void)_loadFromDOMRange;
- (void)_loadUsingWebKit;
- (void)_adjustTrailingNewline;
- (void)_parseNode:(id)arg1;
- (id)_webPreferences;
- (id)_createWebArchiveForData:(id)arg1;
- (Class)_webViewClass;
- (Class)_webArchiveClass;
- (BOOL)_sanitizeWebArchiveArray:(id)arg1;
- (BOOL)_sanitizeWebArchiveDictionary:(id)arg1;
- (void)_processText:(id)arg1;
- (void)_exitElement:(id)arg1 tag:(id)arg2 display:(id)arg3 depth:(int)arg4 startIndex:(unsigned int)arg5;
- (BOOL)_processElement:(id)arg1 tag:(id)arg2 display:(id)arg3 depth:(int)arg4;
- (BOOL)_enterElement:(id)arg1 tag:(id)arg2 display:(id)arg3 depth:(int)arg4 embedded:(BOOL)arg5;
- (void)_addMarkersToList:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)_traverseFooterNode:(id)arg1 depth:(int)arg2;
- (void)_newTabForElement:(id)arg1;
- (void)_addValue:(id)arg1 forElement:(id)arg2;
- (void)_addQuoteForElement:(id)arg1 opening:(BOOL)arg2 level:(int)arg3;
- (void)_newLineForElement:(id)arg1;
- (void)_traverseNode:(id)arg1 depth:(int)arg2 embedded:(BOOL)arg3;
- (BOOL)_addAttachmentForElement:(id)arg1 URL:(id)arg2 needsParagraph:(BOOL)arg3 usePlaceholder:(BOOL)arg4;
- (void)_addTableForElement:(id)arg1;
- (void)_addTableCellForElement:(id)arg1;
- (void)_fillInBlock:(id)arg1 forElement:(id)arg2 backgroundColor:(id)arg3 extraMargin:(float)arg4 extraPadding:(float)arg5 isTable:(BOOL)arg6;
- (void)_newParagraphForElement:(id)arg1 tag:(id)arg2 allowEmpty:(BOOL)arg3 suppressTrailingSpace:(BOOL)arg4 isEntering:(BOOL)arg5;
- (void)_processHeadElement:(id)arg1;
- (void)_processMetaElementWithName:(id)arg1 content:(id)arg2;
- (id)_childrenForNode:(id)arg1;
- (Class)_DOMHTMLTableCellElementClass;
- (Class)_WebMessageDocumentClass;
- (id)_attributesForElement:(id)arg1;
- (id)_computedAttributesForElement:(id)arg1;
- (id)_computedColorForNode:(id)arg1 property:(id)arg2;
- (id)_colorForNode:(id)arg1 property:(id)arg2;
- (BOOL)_elementHasOwnBackgroundColor:(id)arg1;
- (id)_blockLevelElementForNode:(id)arg1;
- (BOOL)_elementIsBlockLevel:(id)arg1;
- (BOOL)_getComputedFloat:(float*)arg1 forNode:(id)arg2 property:(id)arg3;
- (BOOL)_getFloat:(float*)arg1 forNode:(id)arg2 property:(id)arg3;
- (id)_computedStringForNode:(id)arg1 property:(id)arg2;
- (id)_stringForNode:(id)arg1 property:(id)arg2;
- (id)_specifiedStyleForElement:(id)arg1;
- (id)_computedStyleForElement:(id)arg1;
- (id)documentAttributes;
- (void)setMutableAttributedString:(id)arg1;
- (void)_load;
- (id)initWithData:(id)arg1 options:(id)arg2;
- (id)attributedString;
- (id)initWithDOMRange:(id)arg1;
- (void)dealloc;

@end