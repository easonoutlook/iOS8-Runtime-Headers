/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSMutableArray;

@interface CKModalTranscriptController : CKTranscriptController  {
    BOOL _mimeType;
    BOOL _alreadySetUp;
    NSMutableArray *_partsToInsert;
    NSMutableArray *_typesToInsert;
    int _entryViewInvisible;
    BOOL _cameraSelectionDisabled;
    BOOL _forceMMS;
}

@property BOOL mimeType;
@property BOOL forceMMS;


- (void)setMimeType:(BOOL)arg1;
- (void)registerForNotifications;
- (BOOL)_shouldUseDefaultFirstResponder;
- (void)_conversationListDidFinishLoading:(id)arg1;
- (BOOL)_insertMediaObject:(id)arg1;
- (void)setTextEntryContentsVisible:(BOOL)arg1;
- (void)setPendingAddresses:(id)arg1;
- (void)insertData:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3;
- (void)insertFileURL:(id)arg1 filename:(id)arg2 transcoderUserInfo:(id)arg3;
- (void)setCanEditRecipients:(BOOL)arg1;
- (BOOL)_shouldUseExistingConversations;
- (void)disableCameraAttachments;
- (BOOL)_shouldAllowCameraAttachments;
- (BOOL)shouldDismissAfterSend;
- (void)transitionFromNewMessageToConversation;
- (void)_setConversation:(id)arg1;
- (BOOL)getContainerWidth:(float*)arg1 offset:(float*)arg2;
- (void)setForceMMS:(BOOL)arg1;
- (BOOL)forceMMS;
- (BOOL)mimeType;
- (void)viewWillAppear:(BOOL)arg1;
- (void)dealloc;

@end
