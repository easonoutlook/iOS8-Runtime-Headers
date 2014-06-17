/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@interface MBDigest : NSObject  {
}

+ (id)sha1ForString:(id)arg1;
+ (id)sha1ForFileAtPath:(id)arg1 error:(id*)arg2;
+ (id)sha1ForData:(id)arg1;
+ (id)sha1;

- (void)updateWithDate:(id)arg1;
- (void)updateWithInt32:(int)arg1;
- (void)updateWithInt64:(long long)arg1;
- (void)updateWithBytes:(const void*)arg1 length:(unsigned int)arg2;
- (BOOL)updateWithFile:(id)arg1 error:(id*)arg2;
- (id)final;
- (void)finalWithBytes:(void*)arg1 length:(unsigned int)arg2;
- (void)updateWithString:(id)arg1;
- (void)updateWithData:(id)arg1;

@end
