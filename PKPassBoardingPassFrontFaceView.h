/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class UIImageView;

@interface PKPassBoardingPassFrontFaceView : PKPassFrontFaceView  {
    UIImageView *_transitImageView;
    UIImageView *_footerImageView;
}


- (void)layoutSubviews;
- (id)tallFaceTemplate;
- (id)shortScrunchedFaceTemplate;
- (id)_transitGlyphForTransitType:(int)arg1;
- (void)createBodyContentViews;
- (id)shortFaceTemplate;
- (void)dealloc;

@end
