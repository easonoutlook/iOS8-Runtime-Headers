/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OISFUCryptoUtils : NSObject  {
}

+ (id)generatePassphraseVerifierForKey:(id)arg1 verifierVersion:(unsigned short)arg2;
+ (id)encodePassphraseHint:(id)arg1;
+ (id)sha1HashFromStorage:(id)arg1;
+ (id)sha256HashFromString:(id)arg1;
+ (id)sha256HashFromStorage:(id)arg1;
+ (id)decodePassphraseHint:(id)arg1;
+ (id)newBufferedInputStreamForDecryptingZippedBundle:(id)arg1 key:(id)arg2 zipArchive:(id)arg3 isDeflated:(BOOL)arg4 zipStream:(id*)arg5;
+ (id)newBufferedInputStreamForDecryptingFile:(id)arg1 key:(id)arg2 isDeflated:(BOOL)arg3 zipStream:(id*)arg4;
+ (BOOL)checkKey:(id)arg1 againstPassphraseVerifier:(id)arg2;
+ (id)saltFromVerifier:(id)arg1 saltLength:(unsigned long)arg2;
+ (unsigned int)iterationCountFromPassphraseVerifier:(id)arg1;
+ (id)hashForPassphrase:(id)arg1 withSalt:(id)arg2;
+ (id)generateRandomSalt;
+ (id)saltForSageFiles;
+ (BOOL)isEncryptionVersionAndFormatSupportedInPassphraseVerifier:(id)arg1;
+ (id)sha256HashFromData:(id)arg1;
+ (BOOL)generateRandomDataInBuffer:(char *)arg1 length:(unsigned long)arg2;
+ (id)generateRandomSaltWithLength:(unsigned long)arg1;
+ (unsigned int)ivLengthForKey:(id)arg1;


@end
