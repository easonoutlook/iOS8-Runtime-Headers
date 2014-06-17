/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSMutableData, NSColor, NSMutableAttributedString, NSTextTable, NSFont, NSFileWrapper, NSData, NSCalendar, NSMapTable, NSArray, NSMutableParagraphStyle, NSMutableDictionary, NSMutableArray;

@interface NSRTFReader : NSObject  {
    NSMutableAttributedString *_topAttributedString;
    NSMutableAttributedString *_curAttributedString;
    NSMutableArray *_attributesStack;
    NSMutableDictionary *_curAttributes;
    unsigned int _level;
    NSData *_rtfData;
    NSMutableDictionary *_fontTable;
    NSFileWrapper *_document;
    union { 
        unsigned char thin[128]; 
        unsigned short fat[128]; 
    } _textBuffer;
    unsigned int _textBufferIndex;
    int _rtfVersion;
    int _cocoaVersion;
    int _cocoaSubVersion;
    int _readOnly;
    int _usesScreenFonts;
    unsigned long _defaultToUniCharEncoding;
    struct _NSAttributeInfo { 
        unsigned int toUniCharEncoding; 
        unsigned int codePageEncoding; 
        NSFont *font; 
        float fontSize; 
        float kern; 
        NSMutableParagraphStyle *paraStyle; 
        unsigned int bold : 1; 
        unsigned int italic : 1; 
        unsigned int fontIsValid : 1; 
        unsigned int paraStyleIsValid : 1; 
        unsigned int kernIsValid : 1; 
        unsigned int attributesSameAsBefore : 1; 
        unsigned int multiByteEncoding : 1; 
        unsigned int unicodeAlternativeLength : 3; 
        unsigned int tabStopType : 4; 
        unsigned int curAttributesNeedsCopying : 1; 
        unsigned int paraStyleNeedsCopying : 1; 
        unsigned int hasWritingDirectionAttribute : 1; 
        unsigned int  : 15; 
    } _attributeInfo;
    NSMutableData *_attributeInfoStack;
    struct CGSize { 
        float width; 
        float height; 
    } _paperSize;
    float _lMargin;
    float _rMargin;
    float _bMargin;
    float _tMargin;
    NSMutableDictionary *_documentInfoDictionary;
    struct CGSize { 
        float width; 
        float height; 
    } _viewSize;
    int _viewScale;
    int _viewKind;
    NSMapTable *_cachedRTFFontTable;
    float _hyphenationFactor;
    float _defaultTabInterval;
    NSColor *_documentBackgroundColor;
    struct _NSRTFPriv { 
        void *reader; 
        char *rtfInput; 
        unsigned int rtfInputLength; 
        unsigned int rtfInputLocation; 
        unsigned int rtfHeaderEndLocation; 
        int pushedChar; 
        int pushedClass; 
        int pushedMajor; 
        int pushedMinor; 
        int pushedParam; 
        BOOL pushedTextBuf[1024]; 
        int prevChar; 
        int bumpLine; 
        struct RTFFont {} *fontList; 
        struct RTFColor {} *colorList; 
        struct RTFStyle {} *styleList; 
        char *inputName; 
        char *outputName; 
        int (*ccb[5])(); 
        int (*readHook)(); 
        int (*msgProc)(); 
        int (*panicProc)(); 
        BOOL textBuf[1024]; 
        int textLen; 
        int class; 
        int major; 
        int minor; 
        int param; 
        int lineNum; 
        int linePos; 
        int groupState; 
    } _private;
    BOOL _textBufferContentsIsFat;
    BOOL _explicitCharSetEncountered;
    BOOL _isRTLDocument;
    int _readLimit;
    int _thumbnailLimit;
    BOOL _limitReached;
    unsigned char _textFlow;
    NSMutableArray *_layoutOrientationSections;
    unsigned int _verticalOrientationLocation;
    NSArray *_textBlocks;
    NSMutableArray *_nestedTables;
    NSTextTable *_currentTable;
    NSTextTable *_previousTable;
    NSMutableArray *_currentRowArray;
    NSMutableArray *_previousRowArray;
    int _currentRow;
    int _currentColumn;
    int _currentDefinitionColumn;
    BOOL _currentRowIsLast;
    BOOL _setTableCells;
    unsigned int _currentBorderEdge;
    BOOL _currentBorderIsTable;
    NSMutableDictionary *_listDefinitions;
    int _currentListNumber;
    int _currentListLevel;
    NSCalendar *_gregorianCalendar;
    NSMutableDictionary *_fontAttributesTable;
}


- (void)setDefaultTabInterval:(float)arg1;
- (void)setHyphenationFactor:(float)arg1;
- (void)setReadOnly:(int)arg1;
- (void)_popState;
- (void)_pushState;
- (void)processString:(id)arg1;
- (void)_addOverride:(int)arg1 forKey:(int)arg2;
- (id)_listDefinitions;
- (void)_setCurrentListLevel:(int)arg1;
- (int)_currentListLevel;
- (void)_setCurrentListNumber:(int)arg1;
- (int)_currentListNumber;
- (id)_documentInfoDictionary;
- (id)attributesAtEndOfGroup;
- (id)attributedStringToEndOfGroup;
- (id)mutableAttributedString;
- (void)_mergeTableCellsVertically;
- (void)_mergeTableCellsHorizontally;
- (void)_endTableRow;
- (void)_lastTableRow;
- (void)_endTableCell;
- (void)_paragraphInTable;
- (void)_endTableCellDefinition;
- (void)_startTableRowDefinition;
- (void)_setTableNestingLevel:(int)arg1;
- (void)_setCurrentBorderEdge:(unsigned int)arg1 isTable:(BOOL)arg2;
- (BOOL)_currentTableCellIsPlaceholder;
- (BOOL)_currentBorderIsTable;
- (unsigned int)_currentBorderEdge;
- (id)_currentTableCell;
- (void)setCocoaSubVersion:(int)arg1;
- (void)setCocoaVersion:(int)arg1;
- (void)setViewScale:(int)arg1;
- (void)setViewKind:(int)arg1;
- (void)setViewSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setPaperSize:(struct CGSize { float x1; float x2; })arg1;
- (id)_RTFDFileWrapper;
- (void)_addListDefinition:(id)arg1 forKey:(int)arg2;
- (id)mutableAttributes;
- (void)_updateAttributes;
- (float)floatCocoaVersion;
- (void)_clearTableCells;
- (void)_setTableCells;
- (void)_beginTableRow;
- (void)_popTableState;
- (void)_pushTableState;
- (id)_mutableParagraphStyle;
- (void)_ensureTableCells;
- (int)cocoaSubVersion;
- (int)cocoaVersion;
- (void)_setRTFDFileWrapper:(id)arg1;
- (id)_currentTable;
- (float)defaultTabInterval;
- (void)setUsesScreenFonts:(int)arg1;
- (void)setThumbnailLimit:(int)arg1;
- (void)setReadLimit:(int)arg1;
- (id)initWithRTFD:(id)arg1;
- (id)initWithRTF:(id)arg1;
- (id)initWithRTFDFileWrapper:(id)arg1;
- (id)documentAttributes;
- (void)setMutableAttributedString:(id)arg1;
- (unsigned int)textFlow;
- (void)setTextFlow:(unsigned int)arg1;
- (void)setBottomMargin:(float)arg1;
- (void)setLeftMargin:(float)arg1;
- (id)defaultParagraphStyle;
- (struct CGSize { float x1; float x2; })viewSize;
- (struct CGSize { float x1; float x2; })paperSize;
- (id)initWithPath:(id)arg1;
- (int)baseWritingDirection;
- (void)setBaseWritingDirection:(int)arg1;
- (id)attributedString;
- (void)setRightMargin:(float)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)dealloc;
- (void)finalize;
- (void)setTopMargin:(float)arg1;

@end
