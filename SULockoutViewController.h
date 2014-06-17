/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString, NSBundle, UIImage;

@interface SULockoutViewController : SUViewController  {
    UIImage *_image;
    NSBundle *_localizationBundle;
    NSString *_messageBody;
    NSString *_messageTitle;
}

@property(retain) UIImage * image;
@property(retain) NSString * messageBody;
@property(retain) NSString * messageTitle;
@property(retain) NSBundle * localizationBundle;


- (void)setLocalizationBundle:(id)arg1;
- (id)localizationBundle;
- (id)copyArchivableContext;
- (id)messageTitle;
- (void)setMessageTitle:(id)arg1;
- (void)loadView;
- (id)image;
- (void)setImage:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)setMessageBody:(id)arg1;
- (id)messageBody;

@end
