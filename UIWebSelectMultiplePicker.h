/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <UIWebSelectedItemPrivate>, DOMHTMLSelectElement, NSArray;

@interface UIWebSelectMultiplePicker : UIPickerView <UIWebFormControl, UIPickerViewDataSource, UIPickerViewDelegate> {
    DOMHTMLSelectElement *_selectionNode;
    NSArray *_cachedItems;
    <UIWebSelectedItemPrivate> *_singleSelectionItem;
    unsigned int _singleSelectionIndex;
    float _fontSize;
    float _maximumTextWidth;
    int _textAlignment;
    float _layoutWidth;
}

@property(retain) DOMHTMLSelectElement * _selectionNode;
@property(retain) NSArray * _cachedItems;
@property(retain) <UIWebSelectedItemPrivate> * _singleSelectionItem;


- (id)_singleSelectionItem;
- (id)_cachedItems;
- (id)initWithDOMHTMLSelectElement:(id)arg1 cachedItems:(id)arg2 singleSelectionItem:(id)arg3 singleSelectionIndex:(unsigned int)arg4 multipleSelection:(BOOL)arg5;
- (int)_itemIndexForRowIndex:(int)arg1;
- (id)_selectionNode;
- (void)set_singleSelectionItem:(id)arg1;
- (void)set_cachedItems:(id)arg1;
- (void)set_selectionNode:(id)arg1;
- (void)controlEndEditing;
- (void)controlBeginEditing;
- (id)controlView;
- (id)pickerView:(id)arg1 viewForRow:(int)arg2 forComponent:(int)arg3 reusingView:(id)arg4;
- (void)layoutSubviews;
- (int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2;
- (int)numberOfComponentsInPickerView:(id)arg1;
- (void)pickerView:(id)arg1 row:(int)arg2 column:(int)arg3 checked:(BOOL)arg4;
- (void)dealloc;

@end
