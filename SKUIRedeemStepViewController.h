/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSOperationQueue, SKUIClientContext, SKUIRedeemConfiguration;

@interface SKUIRedeemStepViewController : UIViewController  {
    SKUIClientContext *_clientContext;
    NSOperationQueue *_operationQueue;
    SKUIRedeemConfiguration *_configuration;
}

@property(retain) SKUIClientContext * clientContext;
@property(retain) SKUIRedeemConfiguration * configuration;
@property(retain) NSOperationQueue * operationQueue;
@property(readonly) BOOL shouldShowPassbookLearnMore;


- (BOOL)shouldShowPassbookLearnMore;
- (id)clientContext;
- (void)setClientContext:(id)arg1;
- (id)operationQueue;
- (id)configuration;
- (void).cxx_destruct;
- (void)setConfiguration:(id)arg1;
- (void)setOperationQueue:(id)arg1;

@end
