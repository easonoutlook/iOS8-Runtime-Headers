/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABPropertyGroupItem, <ABPropertyCellDelegate>, UIResponder, UITextField;

@interface ABPropertyNameCell : ABContactCell  {
    UITextField *_textField;
    UIResponder *_firstResponderItem;
    <ABPropertyCellDelegate> *_delegate;
}

@property(retain) ABPropertyGroupItem * propertyItem;
@property(readonly) UITextField * textField;
@property(readonly) UIResponder * firstResponderItem;
@property <ABPropertyCellDelegate> * delegate;


- (id)textField;
- (id)delegate;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)setBackgroundColor:(id)arg1;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)setPropertyItem:(id)arg1;
- (void)textFieldChanged:(id)arg1;
- (id)propertyItem;
- (id)firstResponderItem;
- (id)constantConstraints;
- (void)setCardGroupItem:(id)arg1;

@end