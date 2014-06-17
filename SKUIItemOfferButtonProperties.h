/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UIImage, CAFilter, UIColor, NSAttributedString;

@interface SKUIItemOfferButtonProperties : NSObject  {
    BOOL _hasBorderView;
    BOOL _hasTitleLabel;
    BOOL _universal;
    BOOL _progressIndeterminate;
    BOOL _cancelRecognizer;
    UIColor *_borderBackgroundColor;
    UIColor *_borderColor;
    CAFilter *_borderCompositingFilter;
    float _borderWidth;
    float _borderCornerRadius;
    NSAttributedString *_attributedText;
    UIColor *_textColor;
    int _confirmationTitleStyle;
    int _titleStyle;
    UIImage *_image;
    int _progressType;
    float _progress;
    float _alpha;
}

@property BOOL hasBorderView;
@property(retain) UIColor * borderBackgroundColor;
@property(retain) UIColor * borderColor;
@property(retain) CAFilter * borderCompositingFilter;
@property float borderWidth;
@property float borderCornerRadius;
@property BOOL hasTitleLabel;
@property(copy) NSAttributedString * attributedText;
@property(retain) UIColor * textColor;
@property BOOL universal;
@property int confirmationTitleStyle;
@property int titleStyle;
@property(retain) UIImage * image;
@property int progressType;
@property BOOL progressIndeterminate;
@property float progress;
@property BOOL cancelRecognizer;
@property float alpha;


- (void)setCancelRecognizer:(BOOL)arg1;
- (BOOL)cancelRecognizer;
- (void)setProgressIndeterminate:(BOOL)arg1;
- (BOOL)progressIndeterminate;
- (void)setTitleStyle:(int)arg1;
- (int)titleStyle;
- (void)setConfirmationTitleStyle:(int)arg1;
- (int)confirmationTitleStyle;
- (BOOL)universal;
- (void)setHasTitleLabel:(BOOL)arg1;
- (BOOL)hasTitleLabel;
- (void)setBorderCornerRadius:(float)arg1;
- (float)borderCornerRadius;
- (void)setBorderCompositingFilter:(id)arg1;
- (id)borderCompositingFilter;
- (void)setBorderBackgroundColor:(id)arg1;
- (id)borderBackgroundColor;
- (void)setHasBorderView:(BOOL)arg1;
- (BOOL)hasBorderView;
- (int)progressType;
- (void)setUniversal:(BOOL)arg1;
- (void)setProgressType:(int)arg1;
- (void).cxx_destruct;
- (float)progress;
- (id)borderColor;
- (float)borderWidth;
- (void)setBorderColor:(id)arg1;
- (void)setBorderWidth:(float)arg1;
- (id)textColor;
- (id)attributedText;
- (void)setAttributedText:(id)arg1;
- (void)setProgress:(float)arg1;
- (id)image;
- (void)setTextColor:(id)arg1;
- (void)setAlpha:(float)arg1;
- (float)alpha;
- (void)setImage:(id)arg1;

@end