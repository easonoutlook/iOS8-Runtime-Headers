/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UIView, PLVideoView, NSString, UILabel, PLTiledLayer, PLPhotoTilePlaceholderView;

@interface PLImageView : UIImageView  {
    NSString *_name;
    UIView *_borderView;
    PLVideoView *_videoView;
    PLPhotoTilePlaceholderView *_placeholderView;
    UIView *_leftAccessoryView;
    UIView *_bottomRightAccessoryView;
    struct CGSize { 
        float width; 
        float height; 
    } _leftAccessoryViewOffset;
    UILabel *_textBadge;
    unsigned int _shadowEnabled : 1;
    unsigned int _suppressShadowDrawing : 1;
    unsigned int _borderViewIsVisible : 1;
    unsigned int _drawsBorder : 1;
    float _aspectRatio;
    double _lastBorderAlphaTime;
    double _lastShadowAlphaTime;
    float _transitionProgress;
    BOOL _edgeAntialiasingEnabled;
    PLTiledLayer *_fullSizeImageTiledLayer;
    int _fullSizeImageOrientation;
    BOOL _showsPlaceholder;
    float _accessoryViewsAlpha;
    float _placeholderScale;
}

@property(copy) NSString * name;
@property(getter=isDimmed) BOOL dimmed;
@property(getter=isBorderAndAccessoriesVisible) BOOL borderAndAccessoriesVisible;
@property float borderAndAccessoriesAlpha;
@property BOOL drawsBorder;
@property(getter=isShadowEnabled) BOOL shadowEnabled;
@property float transitionProgress;
@property(retain) PLVideoView * videoView;
@property(retain) UIView * leftAccessoryView;
@property struct CGSize { float x1; float x2; } leftAccessoryViewOffset;
@property(retain) UIView * bottomRightAccessoryView;
@property float accessoryViewsAlpha;
@property(readonly) BOOL showsPlaceholder;
@property float placeholderScale;
@property(readonly) struct CGSize { float x1; float x2; } placeholderSize;

+ (BOOL)shouldDrawShadows;
+ (id)textBadgeForString:(id)arg1 photoSize:(struct CGSize { float x1; float x2; })arg2;
+ (struct CGSize { float x1; float x2; })badgeOffset;
+ (void)initialize;

- (void)setDrawsBorder:(BOOL)arg1;
- (BOOL)drawsBorder;
- (id)textBadgeString;
- (float)placeholderScale;
- (float)accessoryViewsAlpha;
- (id)bottomRightAccessoryView;
- (struct CGSize { float x1; float x2; })leftAccessoryViewOffset;
- (id)leftAccessoryView;
- (void)setAccessoryViewsAlpha:(float)arg1;
- (void)setBottomRightAccessoryView:(id)arg1;
- (void)setLeftAccessoryViewOffset:(struct CGSize { float x1; float x2; })arg1;
- (void)setLeftAccessoryView:(id)arg1;
- (float)borderAndAccessoriesAlpha;
- (void)parentDidLayout;
- (void)setBottomRightAccessoryView:(id)arg1 animated:(BOOL)arg2;
- (void)setLeftAccessoryView:(id)arg1 animated:(BOOL)arg2;
- (struct CGSize { float x1; float x2; })placeholderSize;
- (void)_updatePlaceholderLayout;
- (void)_updatePlaceholderAlpha;
- (void)_setShadowEnabled:(BOOL)arg1 force:(BOOL)arg2;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })_transformForFullSizeImageTiledLayer;
- (void)_updateShadowPath;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_bottomRightAccessoryViewFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_leftAccessoryViewFrame;
- (void)renderSnapshotInContext:(struct CGContext { }*)arg1;
- (void)setTextBadgeString:(id)arg1;
- (BOOL)isShadowEnabled;
- (void)setShadowEnabled:(BOOL)arg1;
- (void)setShowsPlaceholder:(BOOL)arg1;
- (BOOL)showsPlaceholder;
- (void)setFullSizeImageJPEGData:(id)arg1 size:(struct CGSize { float x1; float x2; })arg2 orientation:(int)arg3;
- (BOOL)isBorderAndAccessoriesVisible;
- (void)updateFullSizeImageVisibleArea;
- (void)setBorderAndAccessoriesAlpha:(float)arg1 forced:(BOOL)arg2;
- (void)setBorderAndAccessoriesAlpha:(float)arg1;
- (void)setPlaceholderScale:(float)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1 allowRounding:(BOOL)arg2;
- (void)setBorderAndAccessoriesVisible:(BOOL)arg1;
- (BOOL)isDimmed;
- (void)setDimmed:(BOOL)arg1;
- (float)transitionProgress;
- (void)setTransitionProgress:(float)arg1;
- (void)setEdgeAntialiasingEnabled:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;
- (void)setImage:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)videoView;
- (id)name;
- (void)setName:(id)arg1;
- (void)dealloc;
- (void)setVideoView:(id)arg1;

@end
