/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@class NSMutableData, NSData;

@interface TIKeyboardCandidateResultSetCoder : NSObject  {
    NSMutableData *_mutableData;
    NSData *_data;
    unsigned int _offset;
}

@property(retain) NSData * data;
@property(retain) NSMutableData * mutableData;
@property unsigned int offset;
@property(readonly) const char * bytes;
@property(readonly) const char * currentPosition;

+ (Class)classFromCandidateType:(int)arg1;
+ (id)candidateTypeToClassNameMap;
+ (id)encodeWithCandidateResultSet:(id)arg1;
+ (id)decodeWithData:(id)arg1;

- (void)setMutableData:(id)arg1;
- (id)decodePointerValueArray;
- (void)encodePointerValueArray:(id)arg1;
- (BOOL)decodeBool;
- (void)encodeBool:(BOOL)arg1;
- (unsigned short)decodeShort;
- (id)decodeStringArray;
- (id)decodeCandidate;
- (void)encodeShort:(unsigned short)arg1;
- (void)encodeUInt32:(unsigned int)arg1;
- (void)encodeStringArray:(id)arg1;
- (unsigned int)decodeUInt32;
- (id)mutableData;
- (id)initWithData:(id)arg1 mutableData:(id)arg2;
- (id)initForDecodingWithData:(id)arg1;
- (id)dataFromCandidateResultSet:(id)arg1;
- (id)initForEncoding;
- (void)encodeString:(id)arg1;
- (void)encodeByte:(unsigned char)arg1;
- (id)decodeString;
- (unsigned char)decodeByte;
- (void)encodeUInt64:(unsigned long long)arg1;
- (unsigned long long)decodeUInt64;
- (const char *)currentPosition;
- (id)candidateResultSet;
- (unsigned int)offset;
- (void)setOffset:(unsigned int)arg1;
- (void)setData:(id)arg1;
- (id)data;
- (const char *)bytes;
- (void)dealloc;

@end
