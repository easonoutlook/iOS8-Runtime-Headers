/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CertUI.framework/CertUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString;

@interface CertUIPrompt : NSObject  {
    struct __SecTrust { } *_trust;
    NSString *_host;
    NSString *_service;
    NSString *_connectionDisplayName;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _responseBlock;

}

@property(retain) NSString * host;
@property(retain) NSString * service;
@property(copy) NSString * connectionDisplayName;

+ (id)promptQueue;
+ (id)stringForResponse:(int)arg1;

- (void)setConnectionDisplayName:(id)arg1;
- (int)showAndWaitForResponse;
- (void)setTrust:(struct __SecTrust { }*)arg1;
- (void)setService:(id)arg1;
- (void)showPromptWithResponseBlock:(id)arg1;
- (void)_informConsumerOfResponse:(int)arg1;
- (struct __SecTrust { }*)trust;
- (int)_sendRemoteMessage;
- (int)_responseFromReplyDict:(id)arg1;
- (id)_messagingCenter;
- (id)_newUserInfoForDisplayName:(id)arg1 hostname:(id)arg2 trust:(struct __SecTrust { }*)arg3;
- (id)_digestFromTrust:(struct __SecTrust { }*)arg1;
- (BOOL)_isRootCertificateFromTrust:(struct __SecTrust { }*)arg1;
- (id)_expirationFromTrust:(struct __SecTrust { }*)arg1;
- (id)_purposeFromTrustProperties:(id)arg1;
- (id)_subtitleFromTrust:(struct __SecTrust { }*)arg1;
- (id)_issuerFromTrust:(struct __SecTrust { }*)arg1;
- (id)_titleFromTrust:(struct __SecTrust { }*)arg1;
- (id)_propertyNamed:(id)arg1 ofType:(id)arg2 inProperties:(id)arg3;
- (id)connectionDisplayName;
- (id)_copyPropertiesFromTrust:(struct __SecTrust { }*)arg1;
- (id)_sendablePropertyFromProperty:(id)arg1;
- (id)_sendablePropertiesFromProperties:(id)arg1;
- (id)_sendablePropertiesFromTrust:(struct __SecTrust { }*)arg1;
- (void).cxx_destruct;
- (id)host;
- (void)setHost:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)service;

@end