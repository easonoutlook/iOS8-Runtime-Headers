/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSData;

@interface NSFileHandle : NSObject <NSSecureCoding> {
}

@property(copy,readonly) NSData * availableData;
@property(readonly) unsigned long long offsetInFile;

+ (id)fileHandleForWritingAtPath:(id)arg1;
+ (id)fileHandleForReadingFromURL:(id)arg1 error:(id*)arg2;
+ (void)initialize;
+ (BOOL)supportsSecureCoding;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)fileHandleForUpdatingURL:(id)arg1 mode:(unsigned short)arg2 error:(id*)arg3;
+ (id)fileHandleForWritingToURL:(id)arg1 mode:(unsigned short)arg2 error:(id*)arg3;
+ (id)fileHandleForReadingFromURL:(id)arg1 mode:(unsigned short)arg2 error:(id*)arg3;
+ (id)fileHandleForUpdatingURL:(id)arg1 error:(id*)arg2;
+ (id)fileHandleForWritingToURL:(id)arg1 error:(id*)arg2;
+ (id)fileHandleWithStandardError;
+ (id)fileHandleWithStandardOutput;
+ (id)fileHandleWithStandardInput;
+ (id)fileHandleWithNullDevice;
+ (id)fileHandleForReadingAtPath:(id)arg1;
+ (id)fileHandleForUpdatingAtPath:(id)arg1;

- (void)closeFile;
- (void)seekToFileOffset:(unsigned long long)arg1;
- (int)fileDescriptor;
- (void)truncateFileAtOffset:(unsigned long long)arg1;
- (void)synchronizeFile;
- (unsigned long long)seekToEndOfFile;
- (void)writeData:(id)arg1;
- (id)readDataOfLength:(unsigned int)arg1;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setReadabilityHandler:(id)arg1;
- (id)readabilityHandler;
- (void)setWriteabilityHandler:(id)arg1;
- (id)writeabilityHandler;
- (unsigned long long)offsetInFile;
- (id)readDataToEndOfFile;
- (id)availableData;
- (id)initWithURL:(id)arg1 flags:(int)arg2 createMode:(int)arg3 error:(id*)arg4;
- (id)initWithPath:(id)arg1 flags:(int)arg2 createMode:(int)arg3;
- (id)initWithPath:(id)arg1 flags:(int)arg2 createMode:(int)arg3 error:(id*)arg4;
- (void)ml_unlock;
- (void)ml_lock;
- (BOOL)hk_readValue:(void*)arg1 ofSize:(unsigned long)arg2;
- (BOOL)hk_writeValue:(const void*)arg1 size:(unsigned long)arg2;

@end
