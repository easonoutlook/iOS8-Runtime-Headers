/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@class UIImage;

@interface _GKImageSpeechBalloonBackgroundView : UIImageView  {
    unsigned char _tipDirection;
    UIImage *_templateImage;
}

@property unsigned char tipDirection;
@property(retain) UIImage * templateImage;


- (void)updateTransform;
- (id)templateImage;
- (void)setTemplateImage:(id)arg1;
- (unsigned char)tipDirection;
- (void)setTipDirection:(unsigned char)arg1;
- (void)updateImage;
- (void)tintColorDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;

@end