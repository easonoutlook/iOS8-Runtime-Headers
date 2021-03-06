/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSURL, TSUSafeSaveAssistant, NSUUID;

@interface TSPSupportSaveOperationState : NSObject  {
    BOOL _didWriteSupportBundleSuccessfuly;
    BOOL _shouldLeavePendingEndSave;
    NSUUID *_originalDocumentUUID;
    NSUUID *_originalVersionUUID;
    NSURL *_originalURL;
    unsigned int _updateType;
    TSUSafeSaveAssistant *_safeSaveAssistant;
    NSUUID *_documentUUID;
    NSURL *_URL;
}

@property(readonly) NSUUID * originalDocumentUUID;
@property(readonly) NSUUID * originalVersionUUID;
@property(readonly) NSURL * originalURL;
@property(readonly) BOOL shouldUpdate;
@property(readonly) BOOL preserveDocumentUUID;
@property(readonly) unsigned int updateType;
@property(retain) TSUSafeSaveAssistant * safeSaveAssistant;
@property(copy) NSUUID * documentUUID;
@property(copy) NSURL * URL;
@property BOOL didWriteSupportBundleSuccessfuly;
@property BOOL shouldLeavePendingEndSave;


- (unsigned int)updateType;
- (void).cxx_destruct;
- (void)setURL:(id)arg1;
- (id)originalURL;
- (id)URL;
- (id)init;
- (id)originalVersionUUID;
- (id)originalDocumentUUID;
- (BOOL)didWriteSupportBundleSuccessfuly;
- (void)setDidWriteSupportBundleSuccessfuly:(BOOL)arg1;
- (id)safeSaveAssistant;
- (void)setSafeSaveAssistant:(id)arg1;
- (id)initWithOriginalDocumentUUID:(id)arg1 originalVersionUUID:(id)arg2 originalURL:(id)arg3 updateType:(unsigned int)arg4;
- (BOOL)shouldLeavePendingEndSave;
- (void)setShouldLeavePendingEndSave:(BOOL)arg1;
- (BOOL)shouldUpdate;
- (BOOL)preserveDocumentUUID;
- (id)documentUUID;
- (void)setDocumentUUID:(id)arg1;

@end
