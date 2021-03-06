/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDCollection, EDReference;

@interface EDPivotArea : NSObject  {
    boolmGrandCol;
    boolmGrandRow;
    boolmOutline;
    int mType;
    EDCollection *mReferences;
    EDReference *mOffset;
}

+ (id)pivotArea;

- (void)setOutline:(bool)arg1;
- (bool)outline;
- (void)setGrandCol:(bool)arg1;
- (bool)grandCol;
- (void)setGrandRow:(bool)arg1;
- (bool)grandRow;
- (id)references;
- (id)offset;
- (void)setOffset:(id)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (void)dealloc;
- (id)init;

@end
