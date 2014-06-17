/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSString, NSData;

@interface PFZipLocalFileHeader : NSObject  {
    unsigned short _versionNeededToExtract;
    unsigned short _generalPurposeBit;
    unsigned short _compressionMethod;
    unsigned short _lastModTime;
    unsigned short _lastModDate;
    unsigned int _crc32;
    unsigned int _compressedSize;
    unsigned int _uncompressedSize;
    unsigned short _filenameLength;
    unsigned short _extraFieldLength;
    NSString *_filename;
    NSData *_extraFieldData;
}

@property unsigned short versionNeededToExtract;
@property unsigned short generalPurposeBit;
@property unsigned short compressionMethod;
@property unsigned short lastModTime;
@property unsigned short lastModDate;
@property unsigned int crc32;
@property unsigned int compressedSize;
@property unsigned int uncompressedSize;
@property(readonly) unsigned short filenameLength;
@property(readonly) unsigned short extraFieldLength;
@property(retain) NSString * filename;
@property(retain) NSData * extraFieldData;
@property(readonly) unsigned int totalHeaderLength;


- (unsigned int)compressedSize;
- (void)setCompressedSize:(unsigned int)arg1;
- (void)setFilename:(id)arg1;
- (id)filename;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)extraFieldData;
- (unsigned short)extraFieldLength;
- (unsigned short)filenameLength;
- (void)setUncompressedSize:(unsigned int)arg1;
- (void)setCrc32:(unsigned int)arg1;
- (void)setLastModDate:(unsigned short)arg1;
- (unsigned short)lastModDate;
- (void)setLastModTime:(unsigned short)arg1;
- (unsigned short)lastModTime;
- (void)setCompressionMethod:(unsigned short)arg1;
- (void)setGeneralPurposeBit:(unsigned short)arg1;
- (unsigned short)generalPurposeBit;
- (void)setVersionNeededToExtract:(unsigned short)arg1;
- (unsigned short)versionNeededToExtract;
- (void)appendToData:(id)arg1;
- (unsigned int)loadFromData:(id)arg1 offset:(unsigned int)arg2;
- (void)setExtraFieldData:(id)arg1;
- (unsigned short)compressionMethod;
- (unsigned int)totalHeaderLength;
- (unsigned int)uncompressedSize;
- (unsigned int)crc32;
- (unsigned int)loadFromBytes:(const char *)arg1 offset:(unsigned int)arg2;

@end
