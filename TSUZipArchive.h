/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSMutableDictionary, <TSUReadChannel>;

@interface TSUZipArchive : NSObject  {
    NSMutableDictionary *_entries;
}

@property(readonly) BOOL isValid;
@property(readonly) unsigned long long archiveLength;
@property(readonly) <TSUReadChannel> * readChannel;


- (void).cxx_destruct;
- (BOOL)isValid;
- (id)debugDescription;
- (id)init;
- (void)addEntry:(id)arg1;
- (void)enumerateEntriesUsingBlock:(id)arg1;
- (id)entryForName:(id)arg1;
- (id)readChannelForEntry:(id)arg1;
- (void)readArchiveWithQueue:(id)arg1 completion:(id)arg2;
- (BOOL)readCentralFileHeaderWithBuffer:(const void**)arg1 dataSize:(unsigned int*)arg2;
- (void)readCentralDirectoryData:(id)arg1 entryCount:(unsigned int)arg2 queue:(id)arg3 completion:(id)arg4;
- (void)readCentralDirectoryWithEntryCount:(unsigned int)arg1 offset:(long long)arg2 size:(long long)arg3 channel:(id)arg4 queue:(id)arg5 completion:(id)arg6;
- (void)readEndOfCentralDirectoryData:(id)arg1 channel:(id)arg2 queue:(id)arg3 completion:(id)arg4;
- (id)readChannel;
- (unsigned long long)archiveLength;

@end
