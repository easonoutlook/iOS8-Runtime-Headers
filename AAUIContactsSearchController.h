/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@class MFContactsSearchManager, <AAUIContactsSearchDelegate>, NSNumber, MFContactsSearchResultsModel;

@interface AAUIContactsSearchController : NSObject <MFContactsSearchConsumer> {
    MFContactsSearchManager *_searchManager;
    MFContactsSearchResultsModel *_searchResultsModel;
    int _countOfPendingResultBatches;
    BOOL _didFindResults;
    NSNumber *_searchTaskID;
    <AAUIContactsSearchDelegate> *_delegate;
}


- (void)cancelSearch;
- (id)initWithDelegate:(id)arg1;
- (void)beginSearchWithString:(id)arg1;
- (void)_endSearch;
- (void).cxx_destruct;
- (void)endedNetworkActivity;
- (void)beganNetworkActivity;
- (void)finishedTaskWithID:(id)arg1;
- (void)finishedSearchingForType:(unsigned int)arg1;
- (void)consumeSearchResults:(id)arg1 type:(unsigned int)arg2 taskID:(id)arg3;
- (void)_cancelSearchAndNotify:(BOOL)arg1;

@end
