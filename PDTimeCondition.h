/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class PDAnimationTarget;

@interface PDTimeCondition : NSObject  {
    BOOL mHasDelay;
    int mDelay;
    int mTriggerEvent;
    PDAnimationTarget *mTarget;
}


- (void)setTriggerEvent:(int)arg1;
- (int)triggerEvent;
- (BOOL)hasDelay;
- (int)delay;
- (id)target;
- (void)setTarget:(id)arg1;
- (void)setDelay:(int)arg1;
- (void)dealloc;
- (id)init;

@end
