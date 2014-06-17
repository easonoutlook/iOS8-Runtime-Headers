/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSOperationQueue, SKUIDonationConfiguration, NSString, UIViewController, SKUIClientContext;

@interface SKUIDonationViewController : UINavigationController  {
    NSString *_charityID;
    SKUIClientContext *_clientContext;
    SKUIDonationConfiguration *_donationConfiguration;
    NSOperationQueue *_operationQueue;
    UIViewController *_placeholderViewController;
}

@property(readonly) NSString * charityIdentifier;
@property(retain) SKUIClientContext * clientContext;
@property(retain) NSOperationQueue * operationQueue;


- (id)charityIdentifier;
- (void)_loadDonationConfiguration;
- (id)_initSKUIDonationViewController;
- (id)initWithCharityIdentifier:(id)arg1;
- (void)_configurationDidLoadWithResult:(BOOL)arg1 error:(id)arg2;
- (void)_finishAuthenticateWithResponse:(id)arg1 error:(id)arg2;
- (id)clientContext;
- (void)setClientContext:(id)arg1;
- (id)operationQueue;
- (void).cxx_destruct;
- (id)initWithURL:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)setOperationQueue:(id)arg1;
- (void)_cancelButtonAction:(id)arg1;

@end
