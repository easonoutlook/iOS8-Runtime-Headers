/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSMutableArray;

@interface SKUIStoreDialogController : NSObject <UIAlertViewDelegate> {
    NSMutableArray *_alerts;
    NSMutableArray *_dialogs;
}


- (void)presentDialog:(id)arg1;
- (void)_performActionForDialog:(id)arg1 buttonIndex:(int)arg2;
- (void).cxx_destruct;
- (void)alertViewCancel:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (id)init;

@end
