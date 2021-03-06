/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSMutableArray, NSArray;

@interface TSTTableTile : TSPObject  {
    unsigned char mMaxColumn;
    unsigned short mMaxRow;
    unsigned short mNumCells;
    NSMutableArray *mRowInfos;
    unsigned short mNumRows;
    unsigned char mStorageVersion;
}

@property(readonly) unsigned char maxColumn;
@property(readonly) unsigned short maxRow;
@property(readonly) unsigned short numCells;
@property(readonly) unsigned short numRows;
@property(readonly) NSArray * rowInfos;


- (id)initWithContext:(id)arg1;
- (void)validate;
- (id)description;
- (void)dealloc;
- (void)debugDump;
- (void)i_upgradeTileRowInfosWithDataStore:(id)arg1;
- (void)debugListRows;
- (id)rowInfos;
- (unsigned short)numRows;
- (unsigned short)numCells;
- (unsigned short)maxRow;
- (unsigned char)maxColumn;
- (unsigned long)flushableSize;
- (id)initWithRows:(id)arg1 context:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (id)packageLocator;

@end
