/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UITapGestureRecognizer, UITableView, UILabel, NSString;

@interface UITableViewIndexOverlayIndicatorView : UIView  {
    UILabel *_label;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UITableView *_table;
}

@property(copy) NSString * currentText;


- (void)setCurrentText:(id)arg1;
- (id)currentText;
- (void)_willChangeToIdiom:(int)arg1 onScreen:(id)arg2;
- (void)_invalidateTable;
- (id)initWithTable:(id)arg1;
- (void)_tapGestureChanged:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;

@end
