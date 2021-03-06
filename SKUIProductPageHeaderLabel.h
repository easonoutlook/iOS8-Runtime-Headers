/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UIImage, NSString, UIColor, NSArray;

@interface SKUIProductPageHeaderLabel : UIView  {
    NSString *_text;
    UIColor *_textColor;
    NSString *_contentRating;
    UIImage *_contentRatingImage;
    NSArray *_secondaryContentRatingImages;
    UIColor *_ratingColor;
    BOOL _isPad;
}

@property BOOL isPad;
@property(copy) NSString * text;
@property(retain) UIColor * textColor;
@property(retain) NSString * contentRating;
@property(retain) NSArray * secondaryContentRatingImages;
@property(retain) UIColor * ratingColor;


- (BOOL)isPad;
- (id)ratingColor;
- (id)secondaryContentRatingImages;
- (float)secondaryImageWidth;
- (struct __CTFramesetter { }*)_newTextFramesetter;
- (id)_imageForContentRating:(id)arg1;
- (void)setSecondaryContentRatingImages:(id)arg1;
- (void)setRatingColor:(id)arg1;
- (void)setIsPad:(BOOL)arg1;
- (void)setContentRating:(id)arg1;
- (id)contentRating;
- (id)_textAttributes;
- (void).cxx_destruct;
- (id)textColor;
- (void)setText:(id)arg1;
- (id)text;
- (void)setTextColor:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
