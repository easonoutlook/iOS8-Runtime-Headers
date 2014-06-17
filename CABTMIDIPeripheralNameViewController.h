/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
 */

@class NSString, UIViewController<ServiceNameEditedDelegate>;

@interface CABTMIDIPeripheralNameViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    NSString *_serviceName;
    UIViewController<ServiceNameEditedDelegate> *_viewController;
}

@property(retain) NSString * serviceName;
@property(retain) UIViewController<ServiceNameEditedDelegate> * viewController;


- (void)setServiceName:(id)arg1;
- (void)viewDidLoad;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)didReceiveMemoryWarning;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)serviceName;
- (void)textFieldDone:(id)arg1;

@end
