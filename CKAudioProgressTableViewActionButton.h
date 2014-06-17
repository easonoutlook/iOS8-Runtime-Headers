/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class CKAudioProgressView, UILabel;

@interface CKAudioProgressTableViewActionButton : _UITableViewCellActionButton <SBBulletinCellButton> {
    CKAudioProgressView *_progressView;
    UILabel *_label;
    double _duration;
    double _currentProgress;
    double _lastProgress;
}

@property(retain) CKAudioProgressView * progressView;
@property double duration;
@property double currentProgress;
@property double lastProgress;
@property(retain) UILabel * label;


- (double)lastProgress;
- (struct CGSize { float x1; float x2; })labelSizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)_playButtonHit:(id)arg1;
- (void)setLastProgress:(double)arg1;
- (void)setCurrentProgress:(double)arg1;
- (void)didStop:(id)arg1;
- (void)didFinish:(id)arg1;
- (void)didPause:(id)arg1;
- (void)_updateTime:(id)arg1;
- (id)progressView;
- (void)setProgressView:(id)arg1;
- (void)setLabel:(id)arg1;
- (id)label;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (void)dealloc;
- (double)currentProgress;

@end
