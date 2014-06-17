/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class UILabel;

@interface EKEventDetailTwoValueCell : EKEventDetailCell  {
    int _style;
    UILabel *_titleView;
    UILabel *_valueView;
    UILabel *_value2View;
    int _twoValueCellStyle;
}

@property(readonly) unsigned int visibleItems;


- (void).cxx_destruct;
- (BOOL)update;
- (id)titleView;
- (unsigned int)visibleItems;
- (id)value2View;
- (int)twoValueCellStyle;
- (id)initWithEvent:(id)arg1 editable:(BOOL)arg2 platformStyle:(int)arg3;
- (void)layoutForWidth:(float)arg1 position:(int)arg2;
- (id)valueView;

@end
