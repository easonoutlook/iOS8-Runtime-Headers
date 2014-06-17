/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSTTableInfo, NSString;

@interface TNFormBasedSheet : TNSheet  {
    struct __CFUUID { } *mTableID;
    TSTTableInfo *mTableInfo;
    NSString *mImportedTargetName;
}

@property(readonly) TSTTableInfo * tableInfo;
@property struct __CFUUID { }* tableID;


- (float)contentScale;
- (void)dealloc;
- (void)resolveImportedTargetNameInDocumentRoot:(id)arg1;
- (id)initWithContext:(id)arg1 importedTargetName:(id)arg2;
- (void)clearTableInfoCache;
- (BOOL)isForm;
- (id)tableInfo;
- (void)setTableID:(struct __CFUUID { }*)arg1;
- (struct __CFUUID { }*)tableID;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;

@end
