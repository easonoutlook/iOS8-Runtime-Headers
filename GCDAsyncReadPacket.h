/* Generated by RuntimeBrowser.
   Image: /private/var/mobile/Containers/Bundle/Application/DDE3370B-7D9E-43B6-9A8A-C891DDE1C4A0/OCRuntime.app/OCRuntime
 */

@class NSMutableData, NSData;

@interface GCDAsyncReadPacket : NSObject  {
    NSMutableData *buffer;
    unsigned int startOffset;
    unsigned int bytesDone;
    unsigned int maxLength;
    double timeout;
    unsigned int readLength;
    NSData *term;
    BOOL bufferOwner;
    unsigned int originalBufferLength;
    long tag;
}


- (void)dealloc;
- (int)searchForTermAfterPreBuffering:(long)arg1;
- (unsigned int)readLengthForTermWithPreBuffer:(id)arg1 found:(BOOL*)arg2;
- (unsigned int)readLengthForTermWithHint:(unsigned int)arg1 shouldPreBuffer:(BOOL*)arg2;
- (unsigned int)readLengthForNonTermWithHint:(unsigned int)arg1;
- (unsigned int)optimalReadLengthWithDefault:(unsigned int)arg1 shouldPreBuffer:(BOOL*)arg2;
- (void)ensureCapacityForAdditionalDataOfLength:(unsigned int)arg1;
- (id)initWithData:(id)arg1 startOffset:(unsigned int)arg2 maxLength:(unsigned int)arg3 timeout:(double)arg4 readLength:(unsigned int)arg5 terminator:(id)arg6 tag:(long)arg7;

@end
