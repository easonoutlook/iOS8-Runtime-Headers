/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Conference.framework/Conference
 */

@class IMServiceImpl, FTRegConnectionHandler;

@interface CNFInternalAccountListViewController : PSListController  {
    IMServiceImpl *_service;
    FTRegConnectionHandler *_connectionHandler;
}

@property(retain) IMServiceImpl * service;


- (id)specifiers;
- (void)setService:(id)arg1;
- (id)accountNameForSpecifier:(id)arg1;
- (void)_handleDaemonDisconnected:(id)arg1;
- (void)_stopListeningForNotifications;
- (void)_handleAccountNotification:(id)arg1;
- (void)_handleDaemonConnected:(id)arg1;
- (void)accountTappedWithSpecifier:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (id)initWithServiceType:(int)arg1;
- (void)dealloc;
- (id)service;
- (void)_startListeningForNotifications;

@end
