/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@class CKModifyRecordsOperation;

@interface BRCSyncUpOperation : BRCOperation <BRCOperationSubclass> {
    CKModifyRecordsOperation *_modifyOperation;
}

@property(retain) CKModifyRecordsOperation * modifyOperation;

+ (id)modifyRecordsOperationForContainer:(id)arg1;

- (id)initWithContainer:(id)arg1 modifyOperation:(id)arg2;
- (id)modifyOperation;
- (BOOL)_serverSaysSyncDownFirstForError:(id)arg1;
- (void)setModifyOperation:(id)arg1;
- (BOOL)shouldRetryForError:(id)arg1;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void).cxx_destruct;
- (void)main;

@end
