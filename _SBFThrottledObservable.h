/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@class <SBFCancelable>, <SBFObservable>, <SBFScheduler>;

@interface _SBFThrottledObservable : SBFObservable  {
    double _interval;
    <SBFCancelable> *_delayToken;
    <SBFObservable> *_observable;
    <SBFScheduler> *_scheduler;
    id _result;
    BOOL _hasResult;
    unsigned int _resultCounter;
}


- (id)initWithInterval:(double)arg1 observable:(id)arg2 scheduler:(id)arg3;
- (void)_sendCompletionToObsever:(id)arg1;
- (void)_sendResultToObserver:(id)arg1 withIdentifier:(unsigned int)arg2;
- (unsigned int)_setResult:(id)arg1;
- (void)_setDelayToken:(id)arg1;
- (void)_clearResult;
- (id)subscribe:(id)arg1;
- (void)_cancel;
- (void)dealloc;

@end
