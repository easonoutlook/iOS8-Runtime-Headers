/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OISFUCryptoKey, NSMutableArray, <SFUOutputStream>, OISFUZipFreeSpaceEntry, OISFUZipOutputEntry, OISFUMoveableFileOutputStream, NSData;

@interface OISFUZipArchiveOutputStream : NSObject <SFUSimpleOutputStream> {
    OISFUMoveableFileOutputStream *mOutputStream;
    OISFUCryptoKey *mCryptoKey;
    NSData *mPassphraseHint;
    NSData *mEncryptedDocumentUuid;
    NSMutableArray *mEntries;
    OISFUZipOutputEntry *mCurrentEntry;
    OISFUZipOutputEntry *mLastEntryInFile;
    <SFUOutputStream> *mEntryOutputStream;
    char *mBuffer;
    NSMutableArray *mFreeList;
    OISFUZipFreeSpaceEntry *mCurrentFreeSpace;
    unsigned long long mFreeBytes;
}

+ (unsigned long)approximateBytesForEntryHeaderWithName:(id)arg1;

- (void)writeZip64EndOfCentralDirectoryLocatorWithOffset:(long long)arg1;
- (void)writeZip64EndOfCentralDirectoryWithOffset:(long long)arg1;
- (void)coalesceAndTruncateFreeSpace;
- (unsigned long long)freeBytes;
- (id)entriesAtPath:(id)arg1;
- (void)setEncryptedDocumentUuid:(id)arg1;
- (void)removeEntryWithName:(id)arg1;
- (BOOL)canRemoveEntryWithName:(id)arg1;
- (void)setCrc32ForCurrentEntry:(unsigned int)arg1;
- (id)beginUncompressedUnknownSizeEntryWithName:(id)arg1;
- (void)writeEndOfCentralDirectoryWithOffset:(long long)arg1;
- (void)writeCentralFileHeaderUsingEntry:(id)arg1 isFirstEntry:(BOOL)arg2;
- (void)beginUnknownSizeEntryWithName:(id)arg1 isCompressed:(BOOL)arg2;
- (void)beginEntryWithName:(id)arg1 isCompressed:(BOOL)arg2 uncompressedSize:(unsigned long long)arg3;
- (unsigned long)writeLocalFileHeaderForEntry:(id)arg1;
- (void)finishEntry;
- (id)initWithOutputStream:(id)arg1 cryptoKey:(id)arg2 passphraseHint:(id)arg3;
- (id)initWithPath:(id)arg1 cryptoKey:(id)arg2 passphraseHint:(id)arg3;
- (void)writeBuffer:(const char *)arg1 size:(unsigned long)arg2;
- (unsigned int)crc32ForEntry:(id)arg1;
- (void)moveToPath:(id)arg1;
- (id)initWithPath:(id)arg1;
- (void)reset;
- (void)close;
- (void)flush;
- (void)dealloc;
- (id)entryNames;

@end
