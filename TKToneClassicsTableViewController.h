/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

@class NSIndexPath, NSArray, TKTonePickerViewController, <TKToneClassicsTableViewControllerDelegate>, <TKTonePickerStyleProvider>, UIImage;

@interface TKToneClassicsTableViewController : UITableViewController  {
    <TKToneClassicsTableViewControllerDelegate> *_delegate;
    <TKTonePickerStyleProvider> *_styleProvider;
    NSArray *_toneIdentifiers;
    TKTonePickerViewController *_tonePickerViewController;
    NSIndexPath *_selectedIndexPath;
    UIImage *_checkmarkImage;
}

@property(retain) <TKTonePickerStyleProvider> * styleProvider;
@property <TKToneClassicsTableViewControllerDelegate> * delegate;
@property(retain) NSArray * toneIdentifiers;
@property(retain) TKTonePickerViewController * tonePickerViewController;
@property(retain) NSIndexPath * selectedIndexPath;
@property(retain) UIImage * checkmarkImage;


- (id)checkmarkImage;
- (id)toneIdentifiers;
- (void)setToneIdentifiers:(id)arg1;
- (void)setCheckmarkImage:(id)arg1;
- (void)setTonePickerViewController:(id)arg1;
- (id)initWithDelegate:(id)arg1 tonePickerViewController:(id)arg2;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (id)delegate;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)selectedIndexPath;
- (void)setSelectedIndexPath:(id)arg1;
- (id)tonePickerViewController;
- (void)setStyleProvider:(id)arg1;
- (id)styleProvider;

@end