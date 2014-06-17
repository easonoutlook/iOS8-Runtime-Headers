/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@class NSDictionary, NSMutableDictionary, AssistantUIViewController;

@interface AssistantSubUIViewController : AUUITableViewController  {
    AssistantUIViewController *_parentController;
    NSDictionary *_inParamDict;
    NSMutableDictionary *_outResultsDict;
}

@property AssistantUIViewController * parentController;
@property(retain) NSDictionary * inParamDict;
@property(readonly) NSDictionary * outResultsDict;

+ (id)tableViewWithWidth:(float)arg1 height:(float)arg2;
+ (id)containerViewWithWidth:(float)arg1;
+ (id)topoViewWithWidth:(float)arg1;
+ (id)labelViewInContainer:(id*)arg1 width:(float)arg2 withSpinner:(id*)arg3 above:(BOOL)arg4;
+ (id)labelViewInContainer:(id*)arg1 width:(float)arg2;
+ (id)labelViewInContainer:(id*)arg1 width:(float)arg2 constrain:(BOOL)arg3;

- (id)outResultsDict;
- (void)setInParamDict:(id)arg1;
- (void)setParentController:(id)arg1;
- (id)getProductLocalizedStringWithFormat:(id)arg1;
- (void)setRightNavigationButton:(id)arg1 enable:(BOOL)arg2 hide:(BOOL)arg3;
- (id)inParamDict;
- (id)parentController;
- (void)setLeftNavigationButton:(id)arg1 enable:(BOOL)arg2 hide:(BOOL)arg3;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

@end
