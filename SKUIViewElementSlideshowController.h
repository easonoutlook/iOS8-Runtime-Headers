/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUISlideshowViewController, SKUIViewElementLayoutContext, SKUIIPhoneSlideshowViewController, NSString, NSMutableArray, <SKUIViewElementSlideshowDelegate>;

@interface SKUIViewElementSlideshowController : NSObject <SKUISlideshowViewControllerDataSource, SKUISlideshowViewControllerDelegate> {
    <SKUIViewElementSlideshowDelegate> *_delegate;
    SKUIViewElementLayoutContext *_layoutContext;
    NSMutableArray *_lockups;
    SKUISlideshowViewController *_padViewController;
    SKUIIPhoneSlideshowViewController *_phoneViewController;
    int _selectedIndex;
    NSString *_title;
}

@property <SKUIViewElementSlideshowDelegate> * delegate;
@property(retain) SKUIViewElementLayoutContext * layoutContext;
@property(readonly) int numberOfSlideshowItems;


- (void)setLayoutContext:(id)arg1;
- (id)layoutContext;
- (void)presentFromParentViewController:(id)arg1;
- (int)numberOfSlideshowItems;
- (id)initWithShelf:(id)arg1 selectedLockup:(id)arg2;
- (void)slideshowViewControllerDidFinish:(id)arg1;
- (id)slideshowViewController:(id)arg1 imageURLAtIndex:(int)arg2 size:(struct CGSize { float x1; float x2; }*)arg3;
- (id)slideshowViewController:(id)arg1 imageAtIndex:(int)arg2;
- (int)numberOfItemsInSlideshowViewController:(id)arg1;
- (void).cxx_destruct;
- (id)delegate;
- (void)dealloc;
- (void)setDelegate:(id)arg1;

@end