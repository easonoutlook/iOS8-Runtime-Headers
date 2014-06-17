/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSMutableArray, <CKSMSCompose>;

@interface CKSMSComposeQueuingRemoteViewControllerProxy : NSObject  {
    NSMutableArray *_queuedInvocations;
    <CKSMSCompose> *_serviceViewControllerProxy;
}

@property(retain) NSMutableArray * queuedInvocations;
@property(retain) <CKSMSCompose> * serviceViewControllerProxy;


- (id)queuedInvocations;
- (void)setQueuedInvocations:(id)arg1;
- (void)setServiceViewControllerProxy:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)serviceViewControllerProxy;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)dealloc;
- (id)init;

@end