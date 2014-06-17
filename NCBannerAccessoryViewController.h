/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/NotificationsUI.framework/NotificationsUI
 */

@class NSDictionary;

@interface NCBannerAccessoryViewController : UIViewController <NCBannerAccessoryServiceInterface> {
    NSDictionary *_context;
}

@property(copy) NSDictionary * context;

+ (id)_remoteViewControllerInterface;
+ (id)_exportedInterface;

- (void)_setContext:(id)arg1;
- (void)dismiss;
- (void)setContext:(id)arg1;
- (void)becomeSticky;
- (void)_getPreferredContentSizeWithCompletion:(id)arg1;
- (id)context;

@end
