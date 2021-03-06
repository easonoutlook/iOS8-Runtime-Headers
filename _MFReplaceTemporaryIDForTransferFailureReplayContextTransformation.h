/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSString;

@interface _MFReplaceTemporaryIDForTransferFailureReplayContextTransformation : NSObject <MFOfflineCacheReplayContextTransformation> {
    NSString *_temporaryID;
    NSString *_newTemporaryID;
}


- (id)initWithTemporaryID:(id)arg1 newTemporaryID:(id)arg2;
- (void)applyToReplayContext:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end
