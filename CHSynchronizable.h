/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@class NSObject<OS_dispatch_queue>;

@interface CHSynchronizable : NSObject <CHSynchronizableProtocol> {
    NSObject<OS_dispatch_queue> *_queue;
}

@property(readonly) NSObject<OS_dispatch_queue> * queue;


- (void)execute:(id)arg1;
- (id)queue;
- (id)executeSyncWithResult:(id)arg1;
- (void)executeSync:(id)arg1;
- (id)initWithName:(id)arg1;
- (void).cxx_destruct;
- (id)initWithQueue:(id)arg1;

@end
