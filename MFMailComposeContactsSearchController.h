/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class <MFMailComposeContactsSearchControllerDelegate>, MFContactsSearchManager, NSNumber, MFContactsSearchResultsModel;

@interface MFMailComposeContactsSearchController : NSObject <MFContactsSearchConsumer> {
    MFContactsSearchManager *_manager;
    MFContactsSearchResultsModel *_model;
    NSNumber *_corecipientSearchTaskID;
    BOOL _foundAnySearchResults;
    unsigned int _waitingOnSearchResultsCount;
    <MFMailComposeContactsSearchControllerDelegate> *_delegate;
    NSNumber *_taskID;
}

@property <MFMailComposeContactsSearchControllerDelegate> * delegate;
@property(retain) NSNumber * taskID;


- (void)cancelSearch;
- (id)taskID;
- (id)delegate;
- (void)endedNetworkActivity;
- (void)beganNetworkActivity;
- (void)finishedTaskWithID:(id)arg1;
- (void)finishedSearchingForType:(unsigned int)arg1;
- (void)consumeSearchResults:(id)arg1 type:(unsigned int)arg2 taskID:(id)arg3;
- (void)_finishSearch;
- (void)searchWithString:(id)arg1;
- (void)setTaskID:(id)arg1;
- (void)_cancelSearchAndNotify:(BOOL)arg1;
- (void)findCorecipientsWithRecipients:(id)arg1;
- (void)searchWithString:(id)arg1 enteredRecipients:(id)arg2;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)init;

@end
