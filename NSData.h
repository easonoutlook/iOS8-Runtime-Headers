/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString, NSData;

@interface NSData : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, CKRecordValue, PQLBindable, PQLResultSetInitializer, NUCJSONObject, TSPSplitableData> {
}

@property(readonly) BOOL brc_signatureIsPackage;
@property(readonly) BOOL brc_signatureIsValid;
@property(readonly) BOOL brc_signatureIsPendingPlaceHolder;
@property(readonly) NSString * brc_hexadecimalString;
@property(readonly) NSData * brc_signature;
@property(readonly) NSData * SHA1Data;
@property(readonly) NSString * SHA1HexString;
@property(readonly) unsigned int length;
@property(readonly) const void* bytes;

+ (id)dataWithData:(id)arg1;
+ (id)dataWithContentsOfURL:(id)arg1;
+ (id)dataWithBytesNoCopy:(void*)arg1 length:(unsigned int)arg2 freeWhenDone:(BOOL)arg3;
+ (id)dataWithContentsOfFile:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;
+ (id)dataWithBytesNoCopy:(void*)arg1 length:(unsigned int)arg2;
+ (id)dataWithContentsOfFile:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)dataWithBytes:(const void*)arg1 length:(unsigned int)arg2;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)dataWithContentsOfURL:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;
+ (id)data;
+ (id)dataWithContentsOfMappedFile:(id)arg1;
+ (id)__imDataWithRandomBytes:(unsigned int)arg1;
+ (id)__imDataWithHexString:(id)arg1;
+ (id)MCDataWithCFData:(struct __CFData { }*)arg1;
+ (id)MCDataWithHexString:(id)arg1;
+ (id)mappedDataWithContentsOfTemporaryFile:(id)arg1 error:(id*)arg2;
+ (id)CKDataWithHexString:(id)arg1;
+ (id)CKDataWithHexString:(id)arg1 stringIsUppercase:(BOOL)arg2;
+ (id)dataWithHexString:(id)arg1 stringIsUppercase:(BOOL)arg2;
+ (id)dataWithHexString:(id)arg1;
+ (id)pl_dataWithMappedContentsOfFileHandle:(id)arg1;
+ (id)pl_dataWithMappedContentsOfFileDescriptor:(int)arg1;
+ (id)dataWithSockAddr:(const struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg1;
+ (void)_gkLoadRemoteImageDataForURL:(id)arg1 queue:(id)arg2 handler:(id)arg3;
+ (id)makeArchive:(const void*)arg1 length:(unsigned long)arg2 level:(float)arg3;
+ (id)brc_pendingPlaceholderForPackage:(BOOL)arg1;
+ (id)dataForRadioRequestParameters:(id)arg1 protocolVersion:(int)arg2 isAsynchronousBackgroundRequest:(BOOL)arg3 error:(id*)arg4;
+ (id)dataForRadioRequestParameters:(id)arg1 isAsynchronousBackgroundRequest:(BOOL)arg2 error:(id*)arg3;
+ (id)nsDataWithOcBinaryData:(const struct OcBinaryData { int (**x1)(); unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; char *x6; boolx7; struct SsrwOOStream {} *x8; }*)arg1;
+ (id)makeWithJSONObject:(id)arg1;
+ (id)SBKStringByMD5HashingString:(id)arg1;
+ (id)SBKStringFromDigestData:(id)arg1;
+ (id)dataWithContentsOfURL:(id)arg1 decryptionKey:(id)arg2;
+ (id)dataFromDispatchData:(id)arg1;

- (BOOL)_isSafeResumeDataForBackgroundDownload:(int)arg1;
- (id)initWithBytesNoCopy:(void*)arg1 length:(unsigned int)arg2 deallocator:(id)arg3;
- (BOOL)isEqualToData:(id)arg1;
- (id)initWithBytesNoCopy:(void*)arg1 length:(unsigned int)arg2;
- (id)subdataWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)initWithContentsOfURL:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2 error:(id*)arg3;
- (id)base64EncodedStringWithOptions:(unsigned int)arg1;
- (void)getBytes:(void*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)initWithContentsOfURL:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithContentsOfFile:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (id)initWithBytesNoCopy:(void*)arg1 length:(unsigned int)arg2 freeWhenDone:(BOOL)arg3;
- (id)initWithBytes:(const void*)arg1 length:(unsigned int)arg2;
- (id)initWithData:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (Class)classForCoder;
- (void)getBytes:(void*)arg1 length:(unsigned int)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2;
- (BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2;
- (BOOL)writeToFile:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (BOOL)writeToURL:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (const void*)bytes;
- (unsigned int)length;
- (id)description;
- (id)base64Encoding;
- (id)initWithBase64Encoding:(id)arg1;
- (id)base64EncodedDataWithOptions:(unsigned int)arg1;
- (id)initWithBase64EncodedData:(id)arg1 options:(unsigned int)arg2;
- (id)initWithBase64EncodedString:(id)arg1 options:(unsigned int)arg2;
- (id)initWithContentsOfFile:(id)arg1 error:(id*)arg2;
- (id)initWithContentsOfMappedFile:(id)arg1 error:(id*)arg2;
- (void)getBytes:(void*)arg1;
- (BOOL)_allowsDirectEncoding;
- (id)_asciiDescription;
- (id)_base64EncodingAsString:(BOOL)arg1 withOptions:(unsigned int)arg2;
- (id)_initWithBase64EncodedObject:(id)arg1 options:(unsigned int)arg2;
- (BOOL)_decodeBase64EncodedCharacterBuffer:(const char *)arg1 length:(unsigned int)arg2 options:(unsigned int)arg3 buffer:(char *)arg4 bufferLength:(unsigned int)arg5 state:(struct { BOOL x1; BOOL x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; }*)arg6;
- (BOOL)_isCompact;
- (void)enumerateByteRangesUsingBlock:(id)arg1;
- (BOOL)_canReplaceWithDispatchDataForXPCCoder;
- (id)initWithBytes:(void*)arg1 length:(unsigned int)arg2 copy:(BOOL)arg3 freeWhenDone:(BOOL)arg4 bytesAreVM:(BOOL)arg5;
- (BOOL)_isDispatchData;
- (id)initWithBytes:(void*)arg1 length:(unsigned int)arg2 copy:(BOOL)arg3 deallocator:(id)arg4;
- (unsigned long)_cfTypeID;
- (struct _NSRange { unsigned int x1; unsigned int x2; })rangeOfData:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (id)initWithContentsOfMappedFile:(id)arg1;
- (id)replacementObjectForCoder:(id)arg1;
- (BOOL)isNSData__;
- (id)_replaceCString:(const char *)arg1 withCString:(const char *)arg2;
- (id)_web_parseRFC822HeaderFields;
- (id)_web_guessedMIMETypeForExtension:(id)arg1;
- (id)_web_guessedMIMEType;
- (id)_web_guessedMIMETypeForXML;
- (id)replacementObjectForPortCoder:(id)arg1;
- (id)_CUTCopyGzippedData;
- (id)_CUTOptionallyDecompressData;
- (id)_CUTStringFromBaseData;
- (id)_CUTDecompressData;
- (id)__imHexString;
- (id)__imHexStringOfBytes:(char *)arg1 withLength:(unsigned int)arg2;
- (id)SHA1HexString;
- (id)SHA1Data;
- (id)_geo_newXPCData;
- (id)abDecodeVCardBase64;
- (id)abEncodeVCardBase64DataWithInitialLength:(unsigned int)arg1;
- (BOOL)abIsUTF16EntourageVCard;
- (id)abStringAtRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 inEncoding:(unsigned int)arg2;
- (id)abDecodedUTF7;
- (id)MCSHA1Hash;
- (id)MCInitWithBase64String:(id)arg1;
- (id)MCBase64String;
- (id)MCHexString;
- (id)_webkit_guessedMIMEType;
- (id)_webkit_guessedMIMETypeForXML;
- (int)_web_locationAfterFirstBlankLine;
- (BOOL)_web_startsWithBlankLine;
- (id)_webkit_parseRFC822HeaderFields;
- (BOOL)_web_isCaseInsensitiveEqualToCString:(const char *)arg1;
- (id)base64Decoded;
- (id)base64Encoded;
- (id)hexStringValue;
- (id)sha1Digest;
- (id)md5Digest;
- (void)ml_bindToSQLiteStatement:(struct sqlite3_stmt { }*)arg1 atPosition:(int)arg2;
- (id)ml_stringValueForSQL;
- (id)decompressedGzipDataUsingTemporaryFile;
- (id)decompressedGzipData;
- (void)_ICSStringWithOptions:(unsigned int)arg1 appendingToString:(id)arg2;
- (id)mf_subdataWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (BOOL)mf_immutable;
- (id)mf_encodeBase64;
- (id)mf_decodeBase64;
- (id)mf_encodeBase64WithoutLineBreaks;
- (id)mf_decodeModifiedBase64;
- (id)mf_encodeModifiedBase64;
- (id)mf_encodeBase64HeaderData;
- (id)mf_decodeBase64InRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg1;
- (id)mf_decodeUuencoded;
- (id)mf_decodeQuotedPrintableForText:(BOOL)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })mf_rangeOfData:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (struct _NSRange { unsigned int x1; unsigned int x2; })mf_rangeOfCString:(const char *)arg1 options:(unsigned int)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (struct _NSRange { unsigned int x1; unsigned int x2; })mf_rangeOfRFC822HeaderData;
- (id)mf_copyHexString;
- (id)mf_locationsOfUnixNewlinesNeedingConversion;
- (id)mf_dataByConvertingUnixNewlinesToNetwork;
- (struct _NSRange { unsigned int x1; unsigned int x2; })mf_rangeOfCString:(const char *)arg1 options:(unsigned int)arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })mf_rangeOfCString:(const char *)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })mf_rangeOfByteFromSet:(id)arg1;
- (id)mf_subdataFromIndex:(unsigned int)arg1;
- (id)mf_subdataToIndex:(unsigned int)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })mf_rangeOfByteFromSet:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)mf_MD5Digest;
- (id)CKHexString;
- (id)CKBase64URLSafeString;
- (id)CKLowercaseHexStringWithoutSpaces;
- (id)CKUppercaseHexStringWithoutSpaces;
- (id)hexString;
- (id)uppercaseHexStringWithoutSpaces;
- (id)lowercaseHexStringWithoutSpaces;
- (id)hexString;
- (id)MSHexString;
- (id)MSBase64Encoding;
- (id)MSInitWithBase64Encoding:(id)arg1;
- (id)initWithCPLArchiver:(id)arg1;
- (id)plistArchiveWithCPLArchiver:(id)arg1;
- (id)cplSyncAnchorSimpleDescription;
- (id)cplSyncAnchorDescription;
- (void)pl_adviceDoNotNeed;
- (void)pl_adviceWillNeed;
- (unsigned int)pl_advisoryLength;
- (id)cr_md5DigestHexString;
- (id)_FTStringFromBaseData;
- (id)_FTCopyGzippedData;
- (id)_FTOptionallyDecompressData;
- (id)_FTDecompressData;
- (BOOL)CDXTicketIsRelatedToTicket:(id)arg1;
- (BOOL)CDXTicketWellFormed;
- (id)CDXTicketTrimmed;
- (BOOL)CDXTicketIsStub;
- (unsigned long long)CDXTicketSID;
- (struct CDXTicket { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; struct { unsigned char x_5_1_1[6]; unsigned short x_5_1_2; } x5; unsigned int x6; unsigned char x7[0]; }*)mutableCDXTicket;
- (const struct CDXTicket { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; struct { unsigned char x_5_1_1[6]; unsigned short x_5_1_2; } x5; unsigned int x6; unsigned char x7[0]; }*)CDXTicket;
- (id)CDXTicketExpirationDate;
- (int)CDXTicketPCNT;
- (int)CDXTicketPID;
- (unsigned int)CDXTicketRevision;
- (BOOL)CDXTicketIsHolePunch;
- (BOOL)CDXTicketIsReflected;
- (struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)sockAddr;
- (id)_gkMD5HashData;
- (id)_gkSHA1HashData;
- (id)_gkMD5HashString;
- (id)_gkSHA1HashString;
- (id)initWithBase64EncodedString_gk:(id)arg1;
- (id)_gkBase64EncodedString;
- (id)mf_attachmentWithFilename:(id)arg1 UTIType:(id)arg2 fromManager:(id)arg3 contextID:(id)arg4;
- (id)hexEncoding;
- (id)SHA256Hash;
- (id)fileSafeBase64Encoding;
- (id)SHA1Hash;
- (id)gzipDeflate:(float)arg1;
- (id)gzipInflate;
- (id)afui_dataByCompressingWithGzip;
- (id)brc_signature;
- (BOOL)brc_signatureIsValid;
- (BOOL)brc_signatureIsPackage;
- (BOOL)brc_signatureIsPendingPlaceHolder;
- (id)brc_hexadecimalString;
- (id)brc_SHA256WithSalt:(id)arg1;
- (void)sqliteBind:(struct sqlite3_stmt { }*)arg1 index:(int)arg2;
- (id)initFromPQLResultSet:(id)arg1 error:(id*)arg2;
- (id)propertyListForRadioResponseReturningError:(id*)arg1 unparsedResponseDictionary:(id*)arg2;
- (id)propertyListForRadioResponseReturningError:(id*)arg1;
- (id)jsonValue;
- (id)SBKDataByDeflatingWithGZip;
- (id)SBKDataByInflatingWithGZip;
- (id)SBKDataByDeflatingWithNoZipHeader;
- (id)SBKDataByInflatingWithNoZipHeader;
- (id)_SBKDataByDeflatingWithNoZipHeaderWithCompression:(unsigned int)arg1;
- (id)_SBKDataByInflatingWithNoZipHeader;
- (id)TR_decompressedGzipData;
- (id)TR_compressedGzipData;
- (id)webSafeBase64Data;
- (id)copyDeflatedData;
- (id)dispatchData;
- (BOOL)writeToURL:(id)arg1 encryptionKey:(id)arg2;
- (void)splitDataWithMaxSize:(unsigned long)arg1 subdataHandlerBlock:(id)arg2;

@end
