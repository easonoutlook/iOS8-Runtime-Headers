/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@class NSString;

@interface PTPCameraFile : ICCameraFile  {
    void *_ptpCameraFileProperties;
    NSString *_path;
}

@property(readonly) unsigned int type;
@property(readonly) unsigned long storageID;
@property(readonly) unsigned long objHandle;
@property(copy) id info;
@property(retain) NSString * path;


- (id)initWithName:(id)arg1 parentFolder:(id)arg2 device:(id)arg3 type:(unsigned int)arg4 storageID:(unsigned long)arg5 objectHandle:(unsigned long)arg6;
- (unsigned long)storageID;
- (unsigned long)objHandle;
- (long)writeDataToFile:(int)arg1 fromOffset:(long long)arg2 ofLength:(long long*)arg3;
- (id)metadataDict;
- (id)thumbData;
- (void)setInfo:(id)arg1;
- (void)setPath:(id)arg1;
- (id)info;
- (unsigned int)type;
- (id)path;
- (void)dealloc;
- (void)finalize;

@end
