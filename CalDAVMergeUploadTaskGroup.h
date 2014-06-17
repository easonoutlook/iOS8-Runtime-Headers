/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class <CalDAVPrincipal>, CalDAVBulkUploadTaskGroup, <CalDAVCalendar>;

@interface CalDAVMergeUploadTaskGroup : CoreDAVTaskGroup  {
    <CalDAVCalendar> *_calendar;
    <CalDAVPrincipal> *_principal;
    CalDAVBulkUploadTaskGroup *_uploadTaskGroup;
    BOOL _shouldTrySyncTokenForBulkUpload;
}


- (id)dataContentType;
- (void)cancelTaskGroup;
- (void)startTaskGroup;
- (void)_performRegularUpload;
- (void)_performBulkUpload;
- (id)initWithCalendar:(id)arg1 principal:(id)arg2 accountInfoProvider:(id)arg3 taskManager:(id)arg4;
- (void)dealloc;

@end
