/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@class NSInputStream, PBMessageStreamReader;

@interface BRCPackageManifestReader : NSEnumerator  {
    NSInputStream *_stream;
    PBMessageStreamReader *_reader;
}

@property Class itemClass;


- (id)initWithInputStream:(id)arg1;
- (id)initWithDeviceID:(int)arg1 fileID:(unsigned long long)arg2;
- (void).cxx_destruct;
- (id)initWithAsset:(id)arg1;
- (void)done;
- (Class)itemClass;
- (void)setItemClass:(Class)arg1;
- (id)nextObject;
- (void)dealloc;

@end
