/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@class MPUStackView, UIView, UIImage, MPImageCacheRequest, NSString, RURadioStationsCollectionViewTemplate, NSMutableDictionary;

@interface RURadioStationCollectionViewCell : UICollectionViewCell <MPUStackViewDataSource, MPUTextDrawingCacheInvalidationObserver> {
    UIView *_imageTintView;
    MPUStackView *_stackView;
    NSMutableDictionary *_textImageViews;
    BOOL _adjustsArtworkImageWhenHighlighted;
    BOOL _displaysAsStack;
    BOOL _nowPlaying;
    UIImage *_artworkImage;
    MPImageCacheRequest *_imageRequest;
    RURadioStationsCollectionViewTemplate *_radioStationsCollectionViewTemplate;
}

@property BOOL adjustsArtworkImageWhenHighlighted;
@property(retain) UIImage * artworkImage;
@property BOOL displaysAsStack;
@property(retain) MPImageCacheRequest * imageRequest;
@property(getter=isNowPlaying) BOOL nowPlaying;
@property(retain) RURadioStationsCollectionViewTemplate * radioStationsCollectionViewTemplate;
@property UIView * stackPerspectiveTargetView;
@property(copy) NSString * subtitle;
@property(copy) NSString * title;


- (void)performCompressionAnimationWithCompletionHandler:(id)arg1;
- (void)stackView:(id)arg1 didCreateItem:(id)arg2;
- (void)stackView:(id)arg1 applyAttributesToItem:(id)arg2 atIndex:(int)arg3;
- (int)numberOfItemsInStackView:(id)arg1;
- (BOOL)isNowPlaying;
- (void)setImageRequest:(id)arg1;
- (id)imageRequest;
- (BOOL)displaysAsStack;
- (id)artworkImage;
- (BOOL)adjustsArtworkImageWhenHighlighted;
- (void)updateStackForChangedDistanceFromVanishingPoint;
- (void)updateLayoutAndStackAttributesFromTemplateWithVanishingPointX:(float)arg1;
- (void)performInsertionAnimationWithCompletionHandler:(id)arg1;
- (id)stackPerspectiveTargetView;
- (void)setStackPerspectiveTargetView:(id)arg1;
- (void)setRadioStationsCollectionViewTemplate:(id)arg1;
- (void)setNowPlaying:(BOOL)arg1;
- (void)setDisplaysAsStack:(BOOL)arg1;
- (void)setArtworkImage:(id)arg1;
- (void)setAdjustsArtworkImageWhenHighlighted:(BOOL)arg1;
- (void)textDrawingCacheWasInvalidated:(id)arg1;
- (id)_textForElementNamed:(id)arg1;
- (void)_setText:(id)arg1 forElementNamed:(id)arg2;
- (void)_updateDrawingsForAllTextElementsIncludingTemplateTextElement:(BOOL)arg1;
- (void)_updateDrawingForTextElementNamed:(id)arg1;
- (id)radioStationsCollectionViewTemplate;
- (void)_updateImageTintView;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (void).cxx_destruct;
- (void)setSubtitle:(id)arg1;
- (id)subtitle;
- (void)setSelected:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setCenter:(struct CGPoint { float x1; float x2; })arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;

@end
