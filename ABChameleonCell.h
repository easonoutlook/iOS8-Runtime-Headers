/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class <ABStyleProvider>;

@interface ABChameleonCell : UITableViewCell  {
    int _abCellStyle;
    <ABStyleProvider> *_styleProvider;
    BOOL _hasConfiguredBackgroundViews;
}

@property int abCellStyle;
@property(retain) <ABStyleProvider> * styleProvider;


- (void)setSectionLocation:(int)arg1 animated:(BOOL)arg2;
- (void)dealloc;
- (void)_updateTextStylesForCellStyle;
- (void)_updateBackgroundViewsForCellStyleAndLocation;
- (int)abCellStyle;
- (void)setAbCellStyle:(int)arg1;
- (void)setStyleProvider:(id)arg1;
- (id)styleProvider;

@end
