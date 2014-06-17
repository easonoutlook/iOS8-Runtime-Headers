/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSAKSerializerStream : NSObject <NSSerializerStream> {
    void *memory;
    unsigned int current;
    unsigned int max;
    struct __CFDictionary { } *roomForIntLocations;
}


- (void)dealloc;
- (void)finalize;
- (BOOL)writeToPath:(id)arg1 safely:(BOOL)arg2;
- (void)writeDelayedInt:(unsigned int)arg1 for:(int)arg2;
- (unsigned int)writeRoomForInt:(int*)arg1;
- (unsigned int)writeData:(const void*)arg1 length:(unsigned int)arg2;
- (unsigned int)writeAlignedDataSize:(unsigned int)arg1;
- (unsigned int)writeInt:(unsigned int)arg1;
- (void)copySerializationInto:(void*)arg1;

@end
