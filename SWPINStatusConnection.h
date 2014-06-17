/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

@class <SWSyncServiceConnectionDelegate><SWPINStatusConnectionDelegate>, NSString;

@interface SWPINStatusConnection : SWSyncServiceConnection  {
    <SWSyncServiceConnectionDelegate><SWPINStatusConnectionDelegate> *_delegate;
    NSString *_PIN;
}

@property <SWSyncServiceConnectionDelegate><SWPINStatusConnectionDelegate> * delegate;
@property(readonly) NSString * PIN;


- (id)initWithPIN:(id)arg1 host:(id)arg2 delegate:(id)arg3;
- (void)handleResponse:(id)arg1;
- (id)PIN;
- (id)delegate;
- (void)dealloc;
- (void)setDelegate:(id)arg1;

@end
