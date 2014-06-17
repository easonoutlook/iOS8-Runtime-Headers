/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@class UIColor, NSString, UIFont;

@interface RCTextLayer : CALayer  {
    struct CGSize { 
        float width; 
        float height; 
    } _cachedSize;
    unsigned int _cachedSizeHash;
    NSString *_text;
    UIFont *_font;
    UIColor *_textColor;
    int _preferredAlignment;
    int _textAlignment;
}

@property(copy) NSString * text;
@property(retain) UIFont * font;
@property(retain) UIColor * textColor;
@property int preferredAlignment;
@property int textAlignment;


- (id)_attributes;
- (struct CGSize { float x1; float x2; })_displaySize;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })textRectWithAlignment:(int)arg1 inLayoutBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (int)preferredAlignment;
- (void)setPreferredAlignment:(int)arg1;
- (void).cxx_destruct;
- (int)textAlignment;
- (id)textColor;
- (id)font;
- (void)sizeToFit;
- (void)setText:(id)arg1;
- (id)text;
- (void)setTextAlignment:(int)arg1;
- (void)setFont:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)init;

@end
