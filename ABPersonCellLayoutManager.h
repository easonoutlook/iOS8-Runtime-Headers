/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class <ABPersonCellLayoutManagerDelegate>, <ABStyleProvider>;

@interface ABPersonCellLayoutManager : UITableViewCellLayoutManager  {
    <ABPersonCellLayoutManagerDelegate> *_delegate;
    <ABStyleProvider> *_styleProvider;
}

@property <ABPersonCellLayoutManagerDelegate> * delegate;
@property(retain) <ABStyleProvider> * styleProvider;


- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentStartingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })deleteConfirmationRectForCell:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })backgroundStartingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2;
- (void)cell:(id)arg1 didTransitionToState:(unsigned int)arg2;
- (void)cell:(id)arg1 willTransitionToState:(unsigned int)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentEndingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })backgroundEndingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2;
- (id)delegate;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (float)widthForCellContentViewInTableView:(id)arg1 whenEditing:(BOOL)arg2 isShowingDeleteConfirmation:(BOOL)arg3 accessoryViewBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4;
- (id)cellAsMultiCell:(id)arg1;
- (float)accessoryViewInsetForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)deleteConfirmationWidth;
- (void)setStyleProvider:(id)arg1;
- (id)styleProvider;

@end
