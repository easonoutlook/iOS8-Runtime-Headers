/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
 */

@class UIActivityIndicatorView, NSMutableArray, AMSBTLEConnectionManager;

@interface CABTMIDICentralViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, BTLEConnectionTable, PeripheralForgottenDelegate, PeripheralConnectionStateDelegate> {
    NSMutableArray *peripheralList;
    AMSBTLEConnectionManager *connectionManager;
    UIActivityIndicatorView *indicator;
}


- (void)cleanup;
- (void)viewWillUnload;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)didReceiveMemoryWarning;
- (id)title;
- (id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)peripheralAtIndex:(unsigned int)arg1;
- (unsigned int)peripheralCount;
- (void)deactivateController:(id)arg1;
- (void)activateController:(id)arg1;
- (void)setUIEnabled:(BOOL)arg1;
- (void)updatePeripheralTable;
- (void)peripheralForgotten:(id)arg1;
- (void)connectionStateChanged:(id)arg1;

@end