/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class <SFUInputStream>, SFUCryptor;

@interface SFUCryptoInputStream : NSObject <SFUInputStream> {
    <SFUInputStream> *mBaseStream;
    SFUCryptor *mCryptor;
    long long mOffset;
}


- (BOOL)canSeek;
- (id)initForDecryptionWithInputStream:(id)arg1 key:(id)arg2;
- (id)closeLocalStream;
- (void)enableSystemCaching;
- (void)disableSystemCaching;
- (unsigned long)readToBuffer:(char *)arg1 size:(unsigned long)arg2;
- (void)seekToOffset:(long long)arg1;
- (void)close;
- (long long)offset;
- (void)dealloc;

@end
