/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@class NSArray, NSString, NSData, NSDictionary, NSMutableDictionary;

@interface C3DIONSZipFileArchive : NSObject  {
    NSDictionary *_contents;
    NSData *_data;
    id _provider;
    int _desc;
    NSString *_path;
    NSArray *_names;
    NSDictionary *_properties;
    NSMutableDictionary *_cachedContents;
    void *_reserved;
    struct __zFlags { 
        unsigned int providerSuppliesContents : 1; 
        unsigned int providerSuppliesStreams : 1; 
        unsigned int providerSuppliesProperties : 1; 
        unsigned int noContentsCaching : 1; 
        unsigned int fileOpen : 1; 
        unsigned int reserved : 27; 
    } _zFlags;
    void *_reserved2[5];
}


- (id)archiveData;
- (BOOL)isValid;
- (BOOL)writeToFile:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (void)invalidate;
- (void)dealloc;
- (void)finalize;
- (id)archiveStream;
- (id)propertiesForEntryName:(id)arg1;
- (BOOL)writeContentsForEntryName:(id)arg1 toFile:(id)arg2 options:(unsigned int)arg3 error:(id*)arg4;
- (id)streamForEntryName:(id)arg1;
- (id)entryNames;
- (id)initWithEntryNames:(id)arg1 dataProvider:(id)arg2 options:(unsigned int)arg3;
- (id)initWithData:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (id)initWithEntryNames:(id)arg1 contents:(id)arg2 properties:(id)arg3 options:(unsigned int)arg4;
- (id)contentsForEntryName:(id)arg1;
- (id)initWithPath:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;

@end
