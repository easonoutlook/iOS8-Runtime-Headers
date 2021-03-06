/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableData;

@interface OISFUMemoryOutputStream : NSObject <SFUOutputStream> {
    NSMutableData *mData;
}


- (BOOL)canSeek;
- (void)writeBuffer:(const char *)arg1 size:(unsigned long)arg2;
- (id)closeLocalStream;
- (BOOL)canCreateInputStream;
- (void)seekToOffset:(long long)arg1 whence:(int)arg2;
- (id)inputStream;
- (void)close;
- (long long)offset;
- (id)initWithData:(id)arg1;
- (void)dealloc;

@end
