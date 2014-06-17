/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CertUI.framework/CertUI
 */

@class NSString;

@interface CertUITrustManager : NSObject  {
    NSString *_access;
}

+ (id)defaultTrustManager;
+ (void)migrateFromVersionOne;
+ (void)migrateFromVersionZero;
+ (void)_migrateVersionZeroFromAccessGroup:(id)arg1 toGroup:(id)arg2;

- (void)addSSLTrust:(struct __SecTrust { }*)arg1 hostname:(id)arg2 service:(id)arg3;
- (int)actionForSSLTrust:(struct __SecTrust { }*)arg1 hostname:(id)arg2 service:(id)arg3;
- (void)allowTrust:(struct __SecTrust { }*)arg1 forHost:(id)arg2 service:(id)arg3;
- (int)actionForTrust:(struct __SecTrust { }*)arg1 forHost:(id)arg2 andService:(id)arg3;
- (BOOL)_hasExceptionsForSMIMETrust:(struct __SecTrust { }*)arg1 sender:(id)arg2;
- (void)removeSMIMETrust:(struct __SecTrust { }*)arg1 sender:(id)arg2;
- (void)addSMIMETrust:(struct __SecTrust { }*)arg1 sender:(id)arg2;
- (id)initWithAccessGroup:(id)arg1;
- (int)actionForSMIMETrust:(struct __SecTrust { }*)arg1 sender:(id)arg2;
- (void)clearSavedTrustSettingsForTrust:(struct __SecTrust { }*)arg1 host:(id)arg2 service:(id)arg3;
- (void)removeAllTrusts;
- (void)removeSSLTrust:(struct __SecTrust { }*)arg1 hostname:(id)arg2 service:(id)arg3;
- (int)_actionForTrust:(struct __SecTrust { }*)arg1 exceptions:(id)arg2;
- (void).cxx_destruct;
- (id)init;

@end
