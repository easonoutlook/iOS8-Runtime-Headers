/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@class NSURL, NSString, UIImage;

@interface GKGameSharingInfo : NSObject  {
    BOOL _complete;
    NSString *_gameName;
    NSString *_developerName;
    NSURL *_viewItemURL;
    NSURL *_shortViewItemURL;
    UIImage *_iconImage;
    NSString *_emailSubject;
    NSString *_emailBody;
}

@property(retain) NSString * gameName;
@property(retain) NSString * developerName;
@property(retain) NSURL * viewItemURL;
@property(retain) NSURL * shortViewItemURL;
@property(retain) UIImage * iconImage;
@property(retain) NSString * emailSubject;
@property(retain) NSString * emailBody;
@property BOOL complete;


- (id)viewItemURL;
- (id)subjectForEmailActivity;
- (id)itemsForActivityType:(id)arg1;
- (id)thumbnailForActivityType:(id)arg1;
- (id)operationThatBlocksUntilLoaded;
- (id)emailSubject;
- (id)developerName;
- (id)gameName;
- (id)emailBody;
- (void)setDeveloperName:(id)arg1;
- (void)setGameName:(id)arg1;
- (void)setEmailBody:(id)arg1;
- (void)setEmailSubject:(id)arg1;
- (id)initWithGame:(id)arg1;
- (void)setShortViewItemURL:(id)arg1;
- (id)shortViewItemURL;
- (void)setViewItemURL:(id)arg1;
- (BOOL)complete;
- (void)setComplete:(BOOL)arg1;
- (id)iconImage;
- (void)setIconImage:(id)arg1;
- (void)dealloc;

@end
