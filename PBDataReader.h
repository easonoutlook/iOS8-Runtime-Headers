/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

@class NSData;

@interface PBDataReader : NSObject  {
    unsigned int _pos;
    BOOL _error;
    const char *_bytes;
    NSData *_data;
    unsigned int _length;
}

@property unsigned int length;
@property unsigned int position;


- (BOOL)hasMoreData;
- (id)readBigEndianShortThenString;
- (void)recall:(const struct { unsigned int x1; unsigned int x2; }*)arg1;
- (BOOL)mark:(struct { unsigned int x1; unsigned int x2; }*)arg1;
- (BOOL)readBOOL;
- (long long)readSfixed64;
- (int)readSfixed32;
- (unsigned long long)readFixed64;
- (unsigned int)readFixed32;
- (long long)readSint64;
- (int)readSint32;
- (unsigned long long)readUint64;
- (unsigned int)readUint32;
- (long long)readInt64;
- (int)readInt32;
- (double)readDouble;
- (long long)readVarInt;
- (BOOL)readInt8;
- (id)readProtoBuffer;
- (unsigned long long)readBigEndianFixed64;
- (BOOL)skipValueWithTag:(unsigned short)arg1 andType:(unsigned char)arg2;
- (void)readTag:(unsigned short*)arg1 andType:(char *)arg2;
- (void)updateData:(id)arg1;
- (unsigned short)readBigEndianFixed16;
- (unsigned int)readBigEndianFixed32;
- (id)readBytes:(unsigned int)arg1;
- (BOOL)seekToOffset:(unsigned int)arg1;
- (id)readString;
- (id)readData;
- (float)readFloat;
- (BOOL)hasError;
- (BOOL)isAtEnd;
- (void)setLength:(unsigned int)arg1;
- (unsigned int)offset;
- (id)initWithData:(id)arg1;
- (id)data;
- (unsigned int)length;
- (unsigned int)position;
- (void)setPosition:(unsigned int)arg1;
- (void)dealloc;

@end
