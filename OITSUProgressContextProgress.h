/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OITSUProgressContext, NSObject<OS_dispatch_queue>;

@interface OITSUProgressContextProgress : OITSUProgress  {
    OITSUProgressContext *mProgressContext;
    NSObject<OS_dispatch_queue> *mProgressContextObserverQueue;
    BOOL hasAddedProgressContextObserver;
}


- (void)p_progressDidChange:(id)arg1;
- (void)p_updateProgressContextObserver;
- (id)initWithProgressContext:(id)arg1;
- (void)removeProgressObserver:(id)arg1;
- (id)addProgressObserverWithValueInterval:(double)arg1 queue:(id)arg2 handler:(id)arg3;
- (BOOL)isIndeterminate;
- (double)value;
- (double)maxValue;
- (void)dealloc;
- (id)init;

@end
