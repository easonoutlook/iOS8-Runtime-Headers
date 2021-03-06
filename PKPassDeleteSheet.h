/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class PKPassView, UIActionSheet, PKPassGroupView, <PKPassDeleteDelegate>;

@interface PKPassDeleteSheet : NSObject <UIActionSheetDelegate> {
    UIActionSheet *_actionSheet;
    <PKPassDeleteDelegate> *_delegate;
    PKPassView *_passView;
    PKPassGroupView *_groupView;
}

@property <PKPassDeleteDelegate> * delegate;
@property(retain,readonly) PKPassView * passView;
@property(retain,readonly) PKPassGroupView * groupView;

+ (void)performPassbookDeleteWithView:(id)arg1 completion:(id)arg2;

- (void)_startAnimation;
- (id)passView;
- (void)finished:(BOOL)arg1;
- (id)groupView;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)showInView:(id)arg1;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)actionSheet:(id)arg1 willDismissWithButtonIndex:(int)arg2;
- (id)delegate;
- (void)_registerForEnterBackgroundNotification;
- (void)_unregisterForEnterBackgroundNotification;
- (id)initWithPassView:(id)arg1 groupView:(id)arg2;
- (void)dealloc;
- (void)setDelegate:(id)arg1;

@end
