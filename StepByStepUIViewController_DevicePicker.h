/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@class NSArray, NSString, UIPopoverController, NSDictionary, RecommendationActionController;

@interface StepByStepUIViewController_DevicePicker : StepByStepUIViewController <TableViewManagerDelegate> {
    NSDictionary *_selectedDevice;
    NSDictionary *_sourceNetwork;
    NSDictionary *_sourceBase;
    NSDictionary *_targetBase;
    UIPopoverController *_popover;
    NSArray *sortedDevices;
    NSString *connectionMedium;
    RecommendationActionController *actionController;
    BOOL _showSingleBaseTopo;
    BOOL showFullList;
}

@property(retain) NSArray * sortedDevices;
@property NSString * connectionMedium;
@property(retain) RecommendationActionController * actionController;


- (id)pickerContent;
- (void)updateSelections;
- (void)setupPickerTable;
- (id)sortedDevices;
- (id)connectionMedium;
- (BOOL)showMoreOptions;
- (void)setConnectionMedium:(id)arg1;
- (void)setSortedDevices:(id)arg1;
- (void)setActionController:(id)arg1;
- (id)actionController;
- (id)valueForItemOfType:(id)arg1 atTypeIndex:(unsigned int)arg2 inCellWithTag:(int)arg3;
- (void)touchInCellAtIndexPath:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
