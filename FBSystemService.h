/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@class <FBSystemServiceDelegate>, FBSystemServiceServer, NSObject<OS_dispatch_queue>, FBApplicationLibrary;

@interface FBSystemService : NSObject  {
    FBApplicationLibrary *_library;
    <FBSystemServiceDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_queue;
    FBSystemServiceServer *_server;
}

@property <FBSystemServiceDelegate> * delegate;
@property(retain) NSObject<OS_dispatch_queue> * queue;
@property(retain) FBSystemServiceServer * server;

+ (id)sharedInstance;

- (void)handleActions:(id)arg1 source:(id)arg2 withResult:(id)arg3;
- (void)activateURL:(id)arg1 application:(id)arg2 options:(id)arg3 source:(id)arg4 originalSource:(id)arg5 withResult:(id)arg6;
- (void)activateApplication:(id)arg1 options:(id)arg2 source:(id)arg3 originalSource:(id)arg4 withResult:(id)arg5;
- (void)canActivateApplication:(id)arg1 withResult:(id)arg2;
- (void)terminateApplicationGroup:(int)arg1 forReason:(int)arg2 andReport:(BOOL)arg3 withDescription:(id)arg4 source:(id)arg5;
- (void)terminateApplication:(id)arg1 forReason:(int)arg2 andReport:(BOOL)arg3 withDescription:(id)arg4 source:(id)arg5;
- (void)exitAndRelaunch:(BOOL)arg1;
- (void)shutdownAndReboot:(BOOL)arg1;
- (BOOL)_isWhitelistedLaunchSuspendedApp:(id)arg1;
- (void)_activateURL:(id)arg1 application:(id)arg2 options:(id)arg3 source:(id)arg4 originalSource:(id)arg5 withResult:(id)arg6;
- (void)_reallyActivateApplication:(id)arg1 options:(id)arg2 source:(id)arg3 originalSource:(id)arg4 withResult:(id)arg5;
- (BOOL)_requiresOpenApplicationEntitlement:(id)arg1 options:(id)arg2 originalSource:(id)arg3;
- (void)_activateApplication:(id)arg1 options:(id)arg2 source:(id)arg3 originalSource:(id)arg4 withResult:(id)arg5;
- (void)_terminateProcess:(id)arg1 forReason:(int)arg2 andReport:(BOOL)arg3 withDescription:(id)arg4;
- (void)exitAndRelaunch:(BOOL)arg1 withOptions:(unsigned int)arg2;
- (void)_performExitTasksForRelaunch:(BOOL)arg1;
- (void)setServer:(id)arg1;
- (void)setQueue:(id)arg1;
- (id)queue;
- (int)pidForApplication:(id)arg1;
- (id)initWithQueue:(id)arg1;
- (id)server;
- (id)delegate;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)systemApplicationBundleIdentifier;

@end
