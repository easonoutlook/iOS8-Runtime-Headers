/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface EBFormula : NSObject  {
}

+ (void)setupFormulaDataForSharedFormula:(id)arg1 xlFormulaInfo:(struct XlFormulaInfo { int (**x1)(); int x2; struct OcText {} *x3; char *x4; unsigned int x5; short x6; struct XlShrFmla {} *x7; struct XlArray {} *x8; struct XlTable {} *x9; boolx10; boolx11; boolx12; boolx13; }*)arg2 state:(id)arg3;
+ (unsigned int)writeToken:(id)arg1 tokenIndex:(unsigned int)arg2 tokenStream:(struct XLFormulaStream { int (**x1)(); }*)arg3 extendedStream:(struct XLFormulaStream { int (**x1)(); }*)arg4 state:(id)arg5;
+ (struct XlFormulaInfo { int (**x1)(); int x2; struct OcText {} *x3; char *x4; unsigned int x5; short x6; struct XlShrFmla {} *x7; struct XlArray {} *x8; struct XlTable {} *x9; boolx10; boolx11; boolx12; boolx13; }*)xlFormulaInfoFromEDFormula:(id)arg1 state:(id)arg2;
+ (id)edFormulaFromXlFmlaDefinition:(const void*)arg1 withFormulaLength:(int)arg2 state:(id)arg3;
+ (char *)edFormulaToParsedExpression:(id)arg1 tokenLength:(unsigned short*)arg2 formulaLength:(unsigned short*)arg3 state:(id)arg4;
+ (struct XlFormulaInfo { int (**x1)(); int x2; struct OcText {} *x3; char *x4; unsigned int x5; short x6; struct XlShrFmla {} *x7; struct XlArray {} *x8; struct XlTable {} *x9; boolx10; boolx11; boolx12; boolx13; }*)xlFormulaInfoFromEDSharedFormula:(id)arg1 state:(id)arg2;
+ (id)edFormulaFromXlFmlaDefinition:(const void*)arg1 withTokenLength:(int)arg2 formulaLength:(int)arg3 formulaClass:(Class)arg4 edSheet:(id)arg5 state:(id)arg6;
+ (void)setupTokensInEDFormulaFromXlFormulaProcessor:(struct XlFormulaProcessor { int (**x1)(); struct XlFormulaParser {} *x2; struct XlBaseFormulaTable {} *x3; struct ChVector<CsString *> { struct CsString {} **x_4_1_1; struct CsString {} **x_4_1_2; unsigned int x_4_1_3; unsigned int x_4_1_4; unsigned int x_4_1_5; } x4; struct XlNameTable {} *x5; struct ChVector<OcText> {} *x6; struct XlLinkTable {} *x7; unsigned int x8; unsigned int x9; BOOL x10[64]; unsigned short *x11; char *x12; boolx13; unsigned int x14; unsigned short x15; unsigned short x16; }*)arg1 length:(int)arg2 edFormula:(id)arg3 edSheet:(id)arg4;
+ (void)readFormulaFromXlCell:(struct XlCell { int (**x1)(); unsigned short x2; short x3; short x4; int x5; double x6; struct XlString {} *x7; int x8; struct XlFormulaInfo {} *x9; boolx10; boolx11; boolx12; }*)arg1 edCell:(struct EDCellHeader { unsigned int x1; unsigned int x2; }*)arg2 edRowBlocks:(id)arg3 state:(id)arg4;
+ (id)edFormulaFromXlFmlaDefinition:(const void*)arg1 withFormulaLength:(int)arg2 formulaClass:(Class)arg3 state:(id)arg4;


@end
