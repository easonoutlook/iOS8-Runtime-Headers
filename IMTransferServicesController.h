/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMTransferServices.framework/IMTransferServices
 */

@interface IMTransferServicesController : NSObject  {
}

+ (id)sharedInstance;

- (void)_receiveFileTransfer:(id)arg1 path:(id)arg2 requestURLString:(id)arg3 ownerID:(id)arg4 signature:(id)arg5 decryptionKey:(id)arg6 retries:(int)arg7 fileSize:(unsigned long long)arg8 progressBlock:(id)arg9 completionBlock:(id)arg10;
- (void)_sendFilePath:(id)arg1 transferID:(id)arg2 encryptFile:(BOOL)arg3 retries:(int)arg4 progressBlock:(id)arg5 completionBlock:(id)arg6;
- (void)receiveFileTransfer:(id)arg1 path:(id)arg2 requestURLString:(id)arg3 ownerID:(id)arg4 signature:(id)arg5 decryptionKey:(id)arg6 fileSize:(unsigned long long)arg7 progressBlock:(id)arg8 completionBlock:(id)arg9;
- (void)sendFilePath:(id)arg1 transferID:(id)arg2 encryptFile:(BOOL)arg3 progressBlock:(id)arg4 completionBlock:(id)arg5;

@end
