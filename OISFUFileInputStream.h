/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OISFUFileInputStream : NSObject <SFUInputStream> {
    int mFd;
    BOOL mIsCachingDisabled;
    long long mStartOffset;
    long long mCurrentOffset;
    long long mEndOffset;
}


- (BOOL)canSeek;
- (id)initWithFileDescriptor:(int)arg1 offset:(long long)arg2 length:(long long)arg3;
- (id)initWithPath:(id)arg1 offset:(long long)arg2;
- (id)closeLocalStream;
- (void)enableSystemCaching;
- (void)disableSystemCaching;
- (unsigned long)readToBuffer:(char *)arg1 size:(unsigned long)arg2;
- (void)seekToOffset:(long long)arg1;
- (id)initWithPath:(id)arg1 offset:(long long)arg2 length:(long long)arg3;
- (void)close;
- (long long)offset;
- (void)dealloc;

@end
