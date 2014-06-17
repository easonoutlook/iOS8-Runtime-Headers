/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSString, NSMutableDictionary, <GQZArchiveInputStream>;

@interface GQZArchive : NSObject  {
    NSMutableDictionary *mEntries;
    <GQZArchiveInputStream> *mInput;
    BOOL mIsEncrypted;
    NSString *mFilename;
}


- (id)filename;
- (BOOL)isEncrypted;
- (void)readExtraFieldFromBuffer:(const char *)arg1 size:(unsigned long)arg2 entry:(id)arg3;
- (id)readFilenameFromBuffer:(const char *)arg1 size:(unsigned long)arg2;
- (id)initWithData:(id)arg1 collapseCommonRootDirectory:(BOOL)arg2;
- (id)initWithPath:(id)arg1 collapseCommonRootDirectory:(BOOL)arg2;
- (void)readEntries;
- (id)entryWithName:(id)arg1;
- (void)dealloc;
- (id)entryNames;
- (struct GQZEndOfCentralDirectory { unsigned int x1; long long x2; long long x3; })readZip64EndOfCentralDirectoryFromOffset:(long long)arg1;
- (struct GQZEndOfCentralDirectory { unsigned int x1; long long x2; long long x3; })readZip64EndOfCentralDirectoryWithEocdOffset:(long long)arg1;
- (const char *)searchForEndOfCentralDirectoryOffset:(long long*)arg1;
- (struct GQZEndOfCentralDirectory { unsigned int x1; long long x2; long long x3; })readEndOfCentralDirectory;
- (void)collapseCommonRootDirectory;

@end
