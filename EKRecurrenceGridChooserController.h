/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKUIDividedGridViewTableViewCell;

@interface EKRecurrenceGridChooserController : EKRecurrenceChooserController <EKUIDividedGridViewControllerDelegate> {
    EKUIDividedGridViewTableViewCell *_tableViewCell;
}


- (void)prepareForDisplay;
- (void).cxx_destruct;
- (BOOL)drawBackgroundForRow:(int)arg1;
- (void)dividedGridViewController:(id)arg1 didSelectCell:(id)arg2 atIndex:(int)arg3;
- (void)dividedGridViewControllerDidLayout:(id)arg1;
- (id)tableViewCell;
- (void)selectCell:(id)arg1 atIndex:(int)arg2;
- (int)gridViewType;
- (id)cellLabels;
- (id)allCells;
- (void)refreshCells;
- (id)cellForRow:(int)arg1;
- (float)heightForRow:(int)arg1;

@end
