/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@class NSArray, NSObject<OS_dispatch_queue>, NSDate, NSDictionary, NSMutableDictionary;

@interface RadioGetTracksResponse : NSObject  {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_tracksByStationKey;
    NSDate *_expirationDate;
    NSDictionary *_responseDictionary;
}

@property(copy,readonly) NSDictionary * dialogDictionary;
@property(retain) NSDate * expirationDate;
@property(readonly) unsigned long long globalVersion;
@property(readonly) BOOL shouldIncrementSkipCount;
@property(readonly) NSDate * skipDate;
@property(readonly) int tracklistActionType;
@property(copy,readonly) NSDictionary * responseDictionary;
@property(copy,readonly) NSArray * unusedKBSyncStrings;


- (id)dialogDictionary;
- (unsigned long long)globalVersion;
- (int)tracklistActionType;
- (id)tracksForStation:(id)arg1;
- (id)skipDate;
- (BOOL)shouldIncrementSkipCount;
- (id)unusedKBSyncStrings;
- (id)_tracksForStationKey:(id)arg1;
- (id)tracksForStationHash:(id)arg1;
- (id)tracksForStationID:(long long)arg1;
- (void)setExpirationDate:(id)arg1;
- (id)expirationDate;
- (id)responseDictionary;
- (void).cxx_destruct;
- (id)init;
- (id)initWithResponseDictionary:(id)arg1;

@end