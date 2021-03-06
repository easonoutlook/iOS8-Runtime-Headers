/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@class SBKSyncResponseData;

@interface SBKSyncResponse : SBKResponse  {
    SBKSyncResponseData *_syncResponseData;
}

@property(readonly) SBKSyncResponseData * syncResponseData;

+ (id)responseWithResponse:(id)arg1 transaction:(id)arg2;

- (id)syncResponseData;
- (void)deserializeResponseBodyWithTransaction:(id)arg1;
- (void).cxx_destruct;

@end
