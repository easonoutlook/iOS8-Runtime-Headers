/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface SFUGZipFileInputStream : NSObject <SFUInputStream> {
    int _fd;
    void *_file;
    BOOL _isCachingDisabled;
    long long _offset;
}


- (BOOL)canSeek;
- (id)closeLocalStream;
- (void)enableSystemCaching;
- (void)disableSystemCaching;
- (unsigned long)readToBuffer:(char *)arg1 size:(unsigned long)arg2;
- (void)seekToOffset:(long long)arg1;
- (id)initWithPath:(id)arg1;
- (void)close;
- (long long)offset;
- (void)dealloc;

@end
