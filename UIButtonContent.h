/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class _UIGraphicsLetterpressStyle, UIImage, NSString, UIColor, NSNumber, NSAttributedString;

@interface UIButtonContent : NSObject <NSCoding, NSCopying> {
    NSString *title;
    NSAttributedString *attributedTitle;
    UIImage *image;
    UIImage *background;
    UIColor *titleColor;
    UIColor *imageColor;
    UIColor *shadowColor;
    NSNumber *drawingStroke;
}

@property(retain) NSString * title;
@property(retain) NSAttributedString * attributedTitle;
@property(retain) UIImage * image;
@property(retain) UIImage * background;
@property(retain) UIColor * titleColor;
@property(retain) UIColor * imageColor;
@property(retain) UIColor * shadowColor;
@property(retain) NSNumber * drawingStroke;
@property(retain) _UIGraphicsLetterpressStyle * letterpressStyle;
@property(readonly) BOOL isEmpty;


- (void)setDrawingStroke:(id)arg1;
- (id)drawingStroke;
- (void)setImageColor:(id)arg1;
- (id)imageColor;
- (void)setTitleColor:(id)arg1;
- (id)titleColor;
- (void)setBackground:(id)arg1;
- (id)background;
- (id)attributedTitle;
- (id)letterpressStyle;
- (void)setLetterpressStyle:(id)arg1;
- (id)shadowColor;
- (void)setShadowColor:(id)arg1;
- (id)image;
- (BOOL)isEmpty;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (void)setAttributedTitle:(id)arg1;
- (void)setImage:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)dealloc;

@end
