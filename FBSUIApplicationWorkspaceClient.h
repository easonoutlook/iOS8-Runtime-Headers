/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@class <FBSUIApplicationWorkspaceClientDelegate>;

@interface FBSUIApplicationWorkspaceClient : FBSWorkspaceClient  {
}

@property <FBSUIApplicationWorkspaceClientDelegate> * delegate;


- (void)_queue_handleAssertionExpirationImminent:(id)arg1;
- (void)_queue_handleExit:(id)arg1;
- (void)_queue_handleLaunch:(id)arg1;
- (BOOL)_queue_handleMessageWithType:(int)arg1 message:(id)arg2;
- (BOOL)willObserveContextsManually;

@end
