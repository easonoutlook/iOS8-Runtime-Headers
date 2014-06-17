/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class EDWorkbook, <TCCancelDelegate>, TCTracing, EDResources;

@interface EBState : NSObject  {
    struct XlLinkTable { int (**x1)(); struct XlLinkLookupTable { int (**x_2_1_1)(); boolx_2_1_2; struct ChVector<XlXti *> { struct XlXti {} **x_3_2_1; struct XlXti {} **x_3_2_2; unsigned int x_3_2_3; unsigned int x_3_2_4; unsigned int x_3_2_5; } x_2_1_3; } x2; struct ChVector<XlLink *> { struct XlLink {} **x_3_1_1; struct XlLink {} **x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; } x3; } *mXlLinkTable;
    struct XlNameTable { int (**x1)(); struct CsSimpleHeapVector<XlRecord> { struct ChVector<XlRecord *> { struct XlRecord {} **x_1_2_1; struct XlRecord {} **x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; } x_2_1_1; } x2; struct OcText { int (**x_3_1_1)(); int x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; char *x_3_1_6; char *x_3_1_7; boolx_3_1_8; } x3[14]; } *mXlNameTable;
    struct ChVector<OcText> { struct OcText {} *x1; struct OcText {} *x2; unsigned int x3; unsigned int x4; unsigned int x5; } *mSheetNames;
    struct XlFormulaProcessor { int (**x1)(); struct XlFormulaParser {} *x2; struct XlBaseFormulaTable {} *x3; struct ChVector<CsString *> { struct CsString {} **x_4_1_1; struct CsString {} **x_4_1_2; unsigned int x_4_1_3; unsigned int x_4_1_4; unsigned int x_4_1_5; } x4; struct XlNameTable {} *x5; struct ChVector<OcText> {} *x6; struct XlLinkTable {} *x7; unsigned int x8; unsigned int x9; BOOL x10[64]; unsigned short *x11; char *x12; boolx13; unsigned int x14; unsigned short x15; unsigned short x16; } *mXlFormulaProcessor;
    EDWorkbook *mWorkbook;
    EDResources *mResources;
    <TCCancelDelegate> *mCancelDelegate;
    TCTracing *mTracing;
}

@property(readonly) <TCCancelDelegate> * cancelDelegate;


- (void)setResources:(id)arg1;
- (id)resources;
- (struct ChVector<OcText> { struct OcText {} *x1; struct OcText {} *x2; unsigned int x3; unsigned int x4; unsigned int x5; }*)sheetNames;
- (struct XlLinkTable { int (**x1)(); struct XlLinkLookupTable { int (**x_2_1_1)(); boolx_2_1_2; struct ChVector<XlXti *> { struct XlXti {} **x_3_2_1; struct XlXti {} **x_3_2_2; unsigned int x_3_2_3; unsigned int x_3_2_4; unsigned int x_3_2_5; } x_2_1_3; } x2; struct ChVector<XlLink *> { struct XlLink {} **x_3_1_1; struct XlLink {} **x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; } x3; }*)xlLinkTable;
- (struct XlNameTable { int (**x1)(); struct CsSimpleHeapVector<XlRecord> { struct ChVector<XlRecord *> { struct XlRecord {} **x_1_2_1; struct XlRecord {} **x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; } x_2_1_1; } x2; struct OcText { int (**x_3_1_1)(); int x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; char *x_3_1_6; char *x_3_1_7; boolx_3_1_8; } x3[14]; }*)xlNameTable;
- (struct XlFormulaProcessor { int (**x1)(); struct XlFormulaParser {} *x2; struct XlBaseFormulaTable {} *x3; struct ChVector<CsString *> { struct CsString {} **x_4_1_1; struct CsString {} **x_4_1_2; unsigned int x_4_1_3; unsigned int x_4_1_4; unsigned int x_4_1_5; } x4; struct XlNameTable {} *x5; struct ChVector<OcText> {} *x6; struct XlLinkTable {} *x7; unsigned int x8; unsigned int x9; BOOL x10[64]; unsigned short *x11; char *x12; boolx13; unsigned int x14; unsigned short x15; unsigned short x16; }*)xlFormulaProcessor;
- (id)cancelDelegate;
- (id)tracing;
- (id)initWithCancelDelegate:(id)arg1 tracing:(id)arg2;
- (void)setWorkbook:(id)arg1;
- (id)workbook;
- (BOOL)isCancelled;
- (void)dealloc;

@end