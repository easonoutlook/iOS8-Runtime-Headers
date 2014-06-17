/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSObject<OS_dispatch_queue>, NSString, NSMutableSet;

@interface OITSUProgress : NSObject  {
    NSMutableSet *mProgressObservers;
    NSObject<OS_dispatch_queue> *mProgressObserversQueue;
    NSString *mMessage;
}

@property(readonly) double value;
@property(readonly) double maxValue;
@property(getter=isIndeterminate,readonly) BOOL indeterminate;
@property(copy) NSString * message;


- (double)protected_minProgressObserverValueInterval;
- (BOOL)protected_hasProgressObservers;
- (void)protected_progressDidChange;
- (void)removeProgressObserver:(id)arg1;
- (id)addProgressObserverWithValueInterval:(double)arg1 queue:(id)arg2 handler:(id)arg3;
- (BOOL)isIndeterminate;
- (void)setMessage:(id)arg1;
- (id)message;
- (double)value;
- (double)maxValue;
- (void)dealloc;
- (id)init;

@end
