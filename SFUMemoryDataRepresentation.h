/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSData;

@interface SFUMemoryDataRepresentation : SFUDataRepresentation  {
    NSData *mData;
}


- (long long)dataLength;
- (id)bufferedInputStream;
- (BOOL)hasSameLocationAs:(id)arg1;
- (id)initWithDataRepresentation:(id)arg1;
- (id)initWithDataNoCopy:(id)arg1;
- (unsigned long)readIntoData:(id)arg1;
- (id)bufferedInputStreamWithBufferSize:(unsigned long)arg1;
- (id)inputStream;
- (id)initWithData:(id)arg1;
- (id)data;
- (void)dealloc;
- (BOOL)isReadable;

@end