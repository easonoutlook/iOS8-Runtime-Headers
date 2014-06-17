/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSString;

@interface TSUZipWriterEntry : NSObject  {
    NSString *_name;
    unsigned int _CRC;
    unsigned long long _size;
    unsigned long long _offset;
}

@property(copy) NSString * name;
@property unsigned long long size;
@property unsigned long long offset;
@property unsigned int CRC;


- (void).cxx_destruct;
- (unsigned long long)offset;
- (void)setOffset:(unsigned long long)arg1;
- (void)setSize:(unsigned long long)arg1;
- (unsigned long long)size;
- (id)name;
- (void)setName:(id)arg1;
- (unsigned int)CRC;
- (void)setCRC:(unsigned int)arg1;

@end