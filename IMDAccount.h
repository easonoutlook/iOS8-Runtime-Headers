/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@class IMDService, NSString, IMDServiceSession, NSDictionary, NSMutableDictionary;

@interface IMDAccount : NSObject <IMSystemMonitorListener> {
    NSMutableDictionary *_accountDefaults;
    NSString *_account;
    IMDService *_service;
    IMDServiceSession *_session;
    NSMutableDictionary *_myStatus;
    NSDictionary *_lastPostedStatus;
    BOOL _isLoading;
    BOOL _isManaged;
}

@property(retain,readonly) NSDictionary * accountDefaults;
@property(retain,readonly) NSString * accountID;
@property(retain,readonly) NSString * loginID;
@property(retain,readonly) IMDService * service;
@property(retain,readonly) IMDServiceSession * session;
@property(readonly) BOOL isActive;
@property(readonly) BOOL isDisabled;
@property BOOL isManaged;
@property(retain,readonly) NSDictionary * status;
@property BOOL isLoading;
@property BOOL wasDisabledAutomatically;
@property(readonly) BOOL shouldPublishNowPlaying;
@property(readonly) int registrationStatus;
@property(readonly) int registrationError;
@property(retain,readonly) NSDictionary * registrationAlertInfo;
@property(retain,readonly) NSDictionary * statusToSave;
@property(retain,readonly) NSDictionary * statusToPost;
@property(retain,readonly) NSDictionary * accountInfoToPost;


- (int)registrationError;
- (int)registrationStatus;
- (id)registrationAlertInfo;
- (id)loginID;
- (void)setRegistrationStatus:(int)arg1 error:(int)arg2 alertInfo:(id)arg3;
- (void)tunesController:(id)arg1 playerInfoChanged:(id)arg2;
- (id)statusToSave;
- (void)releaseSession;
- (void)createSessionIfNecessary;
- (id)accountInfoToPost;
- (void)postAccountCapabilities;
- (void)setIsManaged:(BOOL)arg1;
- (id)initWithAccountID:(id)arg1 defaults:(id)arg2 service:(id)arg3;
- (id)_registrationInfo;
- (void)_updateIdle;
- (void)changeStatus:(id)arg1;
- (BOOL)shouldPublishNowPlaying;
- (void)setWasDisabledAutomatically:(BOOL)arg1;
- (BOOL)wasDisabledAutomatically;
- (id)statusToPost;
- (void)postAccountCapabilitiesToListener:(id)arg1;
- (id)accountDefaults;
- (void)writeAccountDefaults:(id)arg1;
- (BOOL)isManaged;
- (void)setIsLoading:(BOOL)arg1;
- (BOOL)isDisabled;
- (id)accountID;
- (void)systemDidBecomeUnidle;
- (void)systemDidBecomeIdle;
- (id)status;
- (BOOL)isLoading;
- (BOOL)isActive;
- (void)dealloc;
- (id)service;
- (id)session;

@end
