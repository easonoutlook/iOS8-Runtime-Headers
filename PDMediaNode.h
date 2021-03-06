/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class PDAnimationTarget;

@interface PDMediaNode : PDTimeNode  {
    PDAnimationTarget *mTarget;
    BOOL mIsMuted;
    BOOL mIsShowWhenStopped;
    long mNumberOfSlides;
    long mVolume;
}


- (void)setNumberOfSlides:(long)arg1;
- (long)numberOfSlides;
- (void)setIsShowWhenStopped:(BOOL)arg1;
- (BOOL)isShowWhenStopped;
- (void)setIsMuted:(BOOL)arg1;
- (void)setVolume:(long)arg1;
- (long)volume;
- (id)target;
- (void)setTarget:(id)arg1;
- (void)dealloc;
- (id)init;
- (BOOL)isMuted;

@end
