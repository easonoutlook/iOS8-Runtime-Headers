/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TNChartFormulaArgument : NSObject  {
    int mType;
    void *mData;
}

@property(readonly) int type;
@property(readonly) BOOL isCellReference;
@property(readonly) BOOL isRangeReference;
@property(readonly) BOOL isStaticValue;
@property(readonly) BOOL isReference;
@property(readonly) struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct __CFUUID {} *x2; } cellReference;
@property(readonly) struct { struct { struct { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_1_1_1; struct { unsigned short x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; } x_1_1_2; } x1; struct __CFUUID {} *x2; } rangeReference;
@property(readonly) struct TSCEValue { unsigned int x1[68]; int x2; }* staticValue;


- (BOOL)isCellReference;
- (int)type;
- (id)description;
- (void)dealloc;
- (id)initWithStaticValue:(const struct TSCEValue { unsigned int x1[68]; int x2; }*)arg1;
- (BOOL)isReference;
- (struct TSCEValue { unsigned int x1[68]; int x2; }*)staticValue;
- (BOOL)isStaticValue;
- (BOOL)isRangeReference;
- (struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct __CFUUID {} *x2; })cellReference;
- (id)initWithCellReference:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct __CFUUID {} *x2; })arg1;
- (id)initWithRangeReference:(struct { struct { struct { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_1_1_1; struct { unsigned short x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; } x_1_1_2; } x1; struct __CFUUID {} *x2; })arg1;
- (struct { struct { struct { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_1_1_1; struct { unsigned short x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; } x_1_1_2; } x1; struct __CFUUID {} *x2; })rangeReference;

@end
