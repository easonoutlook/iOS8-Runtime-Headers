/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class UIColor, UIImage;

@interface ABTransportButton : UIButton  {
    int _transportType;
    UIColor *_glyphColor;
    UIImage *_image;
}

@property int transportType;
@property(retain) UIColor * glyphColor;
@property(retain) UIImage * image;

+ (id)transportButton;

- (int)transportType;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })backgroundRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (void)tintColorDidChange;
- (id)image;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })alignmentRectInsets;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)setImage:(id)arg1;
- (void)dealloc;
- (void)setTransportType:(int)arg1;
- (id)glyphColor;
- (void)_updateImageWithType:(int)arg1;
- (id)imageNameForType:(int)arg1;
- (void)setGlyphColor:(id)arg1;

@end
