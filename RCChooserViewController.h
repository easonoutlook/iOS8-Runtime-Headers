/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/RadarCompose.framework/RadarCompose
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, NSArray;

@interface RCChooserViewController : UITableViewController  {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _updateHandler;

    NSArray *_data;
    NSString *_currentValue;
    int _index;
}

@property(retain) NSArray * data;
@property(retain) NSString * currentValue;
@property int index;


- (id)currentValue;
- (id)initWithData:(id)arg1 andTitle:(id)arg2 currentValue:(id)arg3 updateHandler:(id)arg4;
- (void).cxx_destruct;
- (void)setIndex:(int)arg1;
- (int)index;
- (void)viewDidLoad;
- (void)setData:(id)arg1;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)setCurrentValue:(id)arg1;
- (id)data;

@end
