/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/RadarCompose.framework/RadarCompose
 */

@class UIActivityIndicatorView, UIView, UILabel;

@interface RCActivityOverlay : UIViewController  {
    UILabel *_activityLabel;
    UIActivityIndicatorView *_activityIndicator;
    UIView *_container;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _frame;
    float _centerOffset;
}


- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 centerOffset:(float)arg2;
- (void).cxx_destruct;
- (void)startAnimating;
- (void)stopAnimating;
- (void)loadView;

@end