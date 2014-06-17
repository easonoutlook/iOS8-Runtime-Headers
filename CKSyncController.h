/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKSyncController : NSObject  {
    int _restoreStateChangedToken;
    int _attachmentRestoredToken;
    BOOL _restoring;
}

@property(getter=isRestoring) BOOL restoring;

+ (id)sharedInstance;

- (void)postAttachmentRestored;
- (void)setRestoring:(BOOL)arg1;
- (void)updateRestoreState;
- (void)attachmentRestored;
- (void)prioritizeAttachmentAtPath:(id)arg1;
- (BOOL)isRestoring;
- (id)init;

@end