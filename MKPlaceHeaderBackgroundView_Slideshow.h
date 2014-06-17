/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSArray, NSTimer, MKMapItem, NSMutableArray;

@interface MKPlaceHeaderBackgroundView_Slideshow : MKPlaceHeaderBackgroundView  {
    NSTimer *_timer;
    NSMutableArray *_images;
    int _nextImageIndex;
    unsigned int _iteration;
    NSArray *_slides;
    struct { 
        unsigned int hasMultiplePhotos; 
        unsigned int isFirstImageRequested; 
        unsigned int isFirstImagePreloaded; 
    } _slideShowFlags;
    MKMapItem *_mapItem;
}

@property(retain) MKMapItem * mapItem;

+ (BOOL)canDisplayImagesForMapItem:(id)arg1;

- (void)pause;
- (void).cxx_destruct;
- (void)reset;
- (void)present;
- (void)restart;
- (void)setMapItem:(id)arg1;
- (id)mapItem;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)currentSlide;
- (id)nextSlide;
- (void)startBackgroundAnimation;
- (void)loadBackgroundContent;
- (void)preloadBackgroundContent;
- (void)clearSlideShowImages;
- (void)showNextImage;
- (void)loadBusinessImages:(unsigned int)arg1;
- (void)addSlideShowImage:(id)arg1;
- (void)pauseBackgroundAnimation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 mapItem:(id)arg2;
- (void)prepareForPresentation;

@end