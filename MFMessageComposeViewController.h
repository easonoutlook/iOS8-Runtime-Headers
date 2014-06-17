/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class <MFMessageComposeViewControllerDelegate>, NSString, NSArray, NSMutableArray;

@interface MFMessageComposeViewController : UINavigationController  {
    <MFMessageComposeViewControllerDelegate> *_messageComposeDelegate;
    NSArray *_recipients;
    NSString *_body;
    NSString *_subject;
    NSMutableArray *_mutableAttachmentURLs;
    unsigned int _currentAttachedVideoCount;
    unsigned int _currentAttachedAudioCount;
    unsigned int _currentAttachedImageCount;
    NSArray *_attachments;
}

@property <MFMessageComposeViewControllerDelegate> * messageComposeDelegate;
@property(copy) NSArray * recipients;
@property(copy) NSString * body;
@property(copy) NSString * subject;
@property(copy,readonly) NSArray * attachments;
@property unsigned int currentAttachedVideoCount;
@property unsigned int currentAttachedAudioCount;
@property unsigned int currentAttachedImageCount;
@property(copy) NSMutableArray * mutableAttachmentURLs;

+ (double)maxTrimDurationForVideo;
+ (double)maxTrimDurationForAudio;
+ (BOOL)isSupportedAttachmentUTI:(id)arg1;
+ (BOOL)canSendPhotos:(int)arg1 videos:(int)arg2 audioClips:(int)arg3;
+ (BOOL)isiMessageEnabled;
+ (BOOL)isMMSEnabled;
+ (BOOL)canSendText;
+ (void)initialize;
+ (void)_startListeningForAvailabilityNotifications;
+ (BOOL)canSendAttachments;
+ (BOOL)canSendSubject;
+ (void)_setupAccountMonitor;
+ (void)_serviceAvailabilityChanged:(id)arg1;
+ (void)_updateServiceAvailability;
+ (BOOL)_canSendText;

- (id)attachmentURLs;
- (void)smsComposeControllerSendStarted:(id)arg1;
- (void)smsComposeControllerCancelled:(id)arg1;
- (id)attachments;
- (BOOL)addAttachmentData:(id)arg1 typeIdentifier:(id)arg2 filename:(id)arg3;
- (BOOL)addAttachmentURL:(id)arg1 withAlternateFilename:(id)arg2;
- (void)setBody:(id)arg1;
- (void)setMessageComposeDelegate:(id)arg1;
- (id)subject;
- (void)setSubject:(id)arg1;
- (id)body;
- (BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (void)viewWillAppear:(BOOL)arg1;
- (void)setModalPresentationStyle:(int)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)setRecipients:(id)arg1;
- (id)recipients;
- (unsigned int)currentAttachedImageCount;
- (unsigned int)currentAttachedAudioCount;
- (unsigned int)currentAttachedVideoCount;
- (void)setMutableAttachmentURLs:(id)arg1;
- (id)messageComposeDelegate;
- (void)_setCanEditRecipients:(BOOL)arg1;
- (BOOL)addAttachmentData:(id)arg1 withAlternateFilename:(id)arg2;
- (BOOL)canAddAttachmentURL:(id)arg1;
- (id)_buildAttachmentInfoForAttachmentURL:(id)arg1 andAlternameFilename:(id)arg2;
- (void)_updateAttachmentCountForAttachmentURL:(id)arg1;
- (id)_contentTypeForMIMEType:(id)arg1;
- (id)mutableAttachmentURLs;
- (BOOL)_isImageMIMEType:(id)arg1;
- (BOOL)_isAudioMIMEType:(id)arg1;
- (BOOL)_isVideoMIMEType:(id)arg1;
- (id)_MIMETypeForURL:(id)arg1;
- (void)setCurrentAttachedImageCount:(unsigned int)arg1;
- (void)setCurrentAttachedAudioCount:(unsigned int)arg1;
- (void)setCurrentAttachedVideoCount:(unsigned int)arg1;
- (void)disableUserAttachments;
- (void)dealloc;

@end
