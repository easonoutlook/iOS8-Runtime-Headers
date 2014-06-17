/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@class NSMutableArray, BRCItemID;

@interface BRCDataOrDocsScopeGatherer : BRCNotificationGatherer  {
    NSMutableArray *_gatheringContainers;
    unsigned long long _gatheringRankCur;
    unsigned long long _gatheringRankMax;
    BRCItemID *_gatheredChildrenItemID;
}

@property(retain) BRCItemID * gatheredChildrenItemID;


- (void)setGatheredChildrenItemID:(id)arg1;
- (id)gatheredChildrenItemID;
- (id)_gatheringNotDescendantOfContainerWithID:(id)arg1;
- (id)_gatheringDescendantOfContainerWithID:(id)arg1;
- (BOOL)continueGatheringWithBatchSize:(unsigned int)arg1;
- (id)initWithNotificationPipe:(id)arg1 reply:(id)arg2;
- (void).cxx_destruct;

@end
