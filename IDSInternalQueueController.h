/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@class NSObject<OS_dispatch_queue>;

@interface IDSInternalQueueController : NSObject  {
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;

- (void)assertQueueIsCurrent;
- (void)performBlock:(id)arg1 waitUntilDone:(BOOL)arg2;
- (void)assertQueueIsNotCurrent;
- (id)queue;
- (void)performBlock:(id)arg1;
- (void)dealloc;
- (id)init;

@end