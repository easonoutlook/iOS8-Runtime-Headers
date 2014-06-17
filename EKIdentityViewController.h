/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class <EKIdentityProtocol>, ABPersonViewController, <EKEditItemViewControllerDelegate>;

@interface EKIdentityViewController : UIViewController <ABPersonViewControllerDelegate, EKEditItemViewControllerProtocol> {
    <EKIdentityProtocol> *_identity;
    ABPersonViewController *_personViewController;
}

@property <EKEditItemViewControllerDelegate> * editDelegate;
@property BOOL presentModally;
@property BOOL editItemShouldBeAskedForInjectableViewController;


- (void)setIdentity:(id)arg1;
- (BOOL)personViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (void).cxx_destruct;
- (void)loadView;
- (id)initWithIdentity:(id)arg1;

@end
