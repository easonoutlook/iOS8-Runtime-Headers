/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@class NSMutableArray;

@interface SBFSubject : SBFObservable <SBFObserver> {
    NSMutableArray *_observers;
}


- (id)subscribe:(id)arg1;
- (void)observerDidFailWithError:(id)arg1;
- (void)observerDidComplete;
- (void)observerDidReceiveResult:(id)arg1;
- (id)_observers;
- (void)dealloc;
- (id)init;

@end
