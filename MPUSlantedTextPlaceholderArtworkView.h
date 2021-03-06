/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@class UIImage, UIColor, NSObject<OS_dispatch_queue>, NSString, NSMutableDictionary;

@interface MPUSlantedTextPlaceholderArtworkView : UIImageView  {
    NSObject<OS_dispatch_queue> *_accessQueue;
    UIColor *_externalBackgroundColor;
    int _externalContentMode;
    UIImage *_externalImage;
    BOOL _hasValidEffectiveImage;
    BOOL _hasValidPlaceholderImage;
    BOOL _hasValidPlaceholderTextAttributes;
    UIColor *_placeholderBackgroundColor;
    NSObject<OS_dispatch_queue> *_placeholderCreationQueue;
    NSMutableDictionary *_placeholderSubtitleTextAttributes;
    NSMutableDictionary *_placeholderTitleTextAttributes;
    unsigned int _placeholderVersion;
    BOOL _drawsArtworkAsynchronously;
    int _placeholderContentMode;
    UIImage *_placeholderImage;
    UIColor *_placeholderStrokeColor;
    float _placeholderStrokeLineWidth;
    int _placeholderStyle;
    NSString *_placeholderSubtitle;
    NSString *_placeholderTitle;
    struct CGSize { 
        float width; 
        float height; 
    } _placeholderSize;
}

@property BOOL drawsArtworkAsynchronously;
@property(retain) UIColor * placeholderBackgroundColor;
@property int placeholderContentMode;
@property(retain) UIImage * placeholderImage;
@property struct CGSize { float x1; float x2; } placeholderSize;
@property(retain) UIColor * placeholderStrokeColor;
@property float placeholderStrokeLineWidth;
@property int placeholderStyle;
@property(copy) NSString * placeholderSubtitle;
@property(copy) NSString * placeholderTitle;


- (struct CGSize { float x1; float x2; })placeholderSize;
- (void)setDrawsArtworkAsynchronously:(BOOL)arg1;
- (void)setPlaceholderTitle:(id)arg1;
- (void)setPlaceholderSubtitle:(id)arg1;
- (id)placeholderTitle;
- (id)placeholderSubtitle;
- (int)placeholderStyle;
- (float)placeholderStrokeLineWidth;
- (id)placeholderStrokeColor;
- (int)placeholderContentMode;
- (id)placeholderBackgroundColor;
- (BOOL)drawsArtworkAsynchronously;
- (void)setPlaceholderStyle:(int)arg1;
- (void)setPlaceholderSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setPlaceholderContentMode:(int)arg1;
- (void)_drawPlaceholderWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 displayScale:(float)arg2;
- (void)_updatePlaceholderTextAttributes;
- (void)_invalidatePlaceholderTextAttributes;
- (void)setPlaceholderStrokeLineWidth:(float)arg1;
- (void)setPlaceholderStrokeColor:(id)arg1;
- (void)setPlaceholderBackgroundColor:(id)arg1;
- (void)_invalidateForChangedPlaceholderProperties;
- (void)_invalidateEffectiveImage;
- (void)_updateEffectiveImage;
- (id)placeholderImage;
- (void)setPlaceholderImage:(id)arg1;
- (void).cxx_destruct;
- (id)initWithImage:(id)arg1 highlightedImage:(id)arg2;
- (void)setContentMode:(int)arg1;
- (id)initWithImage:(id)arg1;
- (void)layoutSubviews;
- (void)setImage:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_updatePlaceholderImage;
- (id)initWithCoder:(id)arg1;
- (void)setBackgroundColor:(id)arg1;

@end
