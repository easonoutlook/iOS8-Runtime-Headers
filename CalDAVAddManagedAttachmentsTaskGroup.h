/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class NSMutableDictionary, NSString, NSData, NSDictionary, NSURL;

@interface CalDAVAddManagedAttachmentsTaskGroup : CoreDAVTaskGroup  {
    int _state;
    NSURL *_resourceURL;
    NSURL *_postURLWithQuery;
    NSString *_previousETag;
    NSString *_previousScheduleTag;
    NSDictionary *_attachments;
    NSDictionary *_contentTypes;
    NSMutableDictionary *_filenamesToServerLocation;
    BOOL _hadPreconditionFailure;
    NSData *_updatedResourcePayload;
    NSString *_updatedETag;
    NSString *_updatedScheduleTag;
    NSDictionary *_postFailureSizes;
}

@property int state;
@property(retain) NSString * previousETag;
@property(retain) NSString * previousScheduleTag;
@property(retain) NSData * updatedResourcePayload;
@property BOOL hadPreconditionFailure;
@property(retain) NSString * updatedETag;
@property(retain) NSString * updatedScheduleTag;
@property(retain) NSDictionary * postFailureSizes;
@property(retain) NSURL * resourceURL;
@property(retain) NSDictionary * attachments;
@property(retain) NSDictionary * contentTypes;
@property(retain) NSMutableDictionary * filenamesToServerLocation;


- (id)contentTypes;
- (void)_finishWithError:(id)arg1 state:(int)arg2;
- (void)setPreviousETag:(id)arg1;
- (id)previousETag;
- (void)startTaskGroup;
- (id)postFailureSizes;
- (id)updatedResourcePayload;
- (void)setFilenamesToServerLocation:(id)arg1;
- (id)initWithAccountInfoProvider:(id)arg1 resourceURL:(id)arg2 attachments:(id)arg3 contentTypes:(id)arg4 taskManager:(id)arg5;
- (void)_handlePostResponse:(id)arg1;
- (BOOL)hadPreconditionFailure;
- (id)urlWithQuery;
- (void)_fetchUpdatedContent;
- (id)updatedETag;
- (id)updatedScheduleTag;
- (BOOL)_postedLastAttachment;
- (void)setPostFailureSizes:(id)arg1;
- (void)setHadPreconditionFailure:(BOOL)arg1;
- (void)setUpdatedETag:(id)arg1;
- (void)setUpdatedScheduleTag:(id)arg1;
- (void)setUpdatedResourcePayload:(id)arg1;
- (id)filenamesToServerLocation;
- (void)setResourceURL:(id)arg1;
- (void)_sendAttachments;
- (void)setContentTypes:(id)arg1;
- (id)previousScheduleTag;
- (void)setPreviousScheduleTag:(id)arg1;
- (id)attachments;
- (void)setAttachments:(id)arg1;
- (void)setState:(int)arg1;
- (int)state;
- (void)dealloc;
- (id)resourceURL;

@end
