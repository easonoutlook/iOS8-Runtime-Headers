/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@class NSString, NSMutableDictionary, NSDictionary;

@interface RadioAddStationRequest : RadioSyncRequest  {
    NSDictionary *_matchDictionary;
    long long _persistentID;
    NSMutableDictionary *_stationDictionary;
    NSString *_stationHashForSkipHistoryCopying;
}


- (void)startWithAddStationCompletionHandler:(id)arg1;
- (id)initWithStationDictionary:(id)arg1;
- (id)initWithLibraryTrackDictionary:(id)arg1 useArtist:(BOOL)arg2;
- (id)initWithQueryTerm:(id)arg1 queryID:(long long)arg2;
- (id)matchDictionary;
- (id)changeList;
- (void)startWithCompletionHandler:(id)arg1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithRadioTrackDictionary:(id)arg1 useArtist:(BOOL)arg2;
- (id)initWithStation:(id)arg1;

@end