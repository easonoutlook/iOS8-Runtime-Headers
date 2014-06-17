/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIPillsControl, SKUIMenuViewController, NSMutableIndexSet, UIBarButtonItem, SKUIPopupMenuHeaderView, SKUIMenuPageComponent, UIPopoverController;

@interface SKUIMenuPageSection : SKUIStorePageSection <SKUIMenuViewControllerDelegate, SKUIPopupMenuDelegate, SKUISortDataRequestDelegate, UIPopoverControllerDelegate> {
    UIBarButtonItem *_cancelMenuItem;
    SKUIPillsControl *_pillsControl;
    SKUIMenuViewController *_moreListMenuViewController;
    UIPopoverController *_moreListPopoverController;
    SKUIPopupMenuHeaderView *_popupHeaderView;
    int _selectedIndex;
    NSMutableIndexSet *_sortRequestIndexSet;
}

@property(retain) SKUIMenuPageComponent * pageComponent;


- (void)popupMenuHeader:(id)arg1 didSelectMenuItemAtIndex:(int)arg2;
- (void)_showPopoverController;
- (void)_showMenuViewController;
- (void)_cancelMenuAction:(id)arg1;
- (id)_newMenuViewController;
- (void)_loadSortDataIfNecessaryForMenuIndex:(int)arg1 reason:(int)arg2;
- (void)_pillAction:(id)arg1;
- (id)_popupHeaderView;
- (id)_pillsControl;
- (void)_showMoreList;
- (void)_restorePreviousSelection;
- (void)_dismissMenuViewController;
- (void)_setSelectedIndex:(int)arg1;
- (void)sortDataRequest:(id)arg1 didFinishWithLockups:(id)arg2;
- (void)menuViewController:(id)arg1 didSelectItemAtIndex:(int)arg2;
- (id)_contentChildView;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })pinnedSectionContentInset;
- (int)defaultPinStyle;
- (id)backgroundColorForIndexPath:(id)arg1;
- (int)numberOfCells;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize { float x1; float x2; })cellSizeForIndexPath:(id)arg1;
- (void)willAppearInContext:(id)arg1;
- (id)initWithPageComponent:(id)arg1;
- (void).cxx_destruct;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })sectionContentInset;
- (void)dealloc;

@end
