/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSConditionLock, NSMutableArray;

@interface MFRequestQueue : NSObject  {
    NSConditionLock *_condition;
    NSMutableArray *_requests;
    NSMutableArray *_consumers;
    unsigned int _waitingOutside;
    unsigned int _waitingInside;
}


- (void)addRequest:(id)arg1 consumer:(id)arg2;
- (void)processRequest:(id)arg1 consumer:(id)arg2;
- (void)_processRequests:(id)arg1 consumers:(id)arg2;
- (void)willAddRequests:(id)arg1 consumers:(id)arg2;
- (void)processRequests:(id)arg1 consumers:(id)arg2;
- (void)addRequests:(id)arg1 consumers:(id)arg2;
- (void)dealloc;
- (id)init;

@end
