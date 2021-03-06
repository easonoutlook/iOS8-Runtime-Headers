/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
 */

@class NSString;

@interface FAFamilyCircleRequest : NSObject  {
    NSString *_usernameOrDSID;
    NSString *_passwordOrToken;
}

@property(copy) NSString * usernameOrDSID;
@property(copy) NSString * passwordOrToken;


- (id)requestOptions;
- (void)setPasswordOrToken:(id)arg1;
- (void)setUsernameOrDSID:(id)arg1;
- (id)passwordOrToken;
- (id)usernameOrDSID;
- (id)serviceConnection;
- (id)serviceRemoteObjectWithErrorHandler:(id)arg1;
- (void).cxx_destruct;
- (id)init;

@end
