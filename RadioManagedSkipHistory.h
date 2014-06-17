/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@class NSString, NSArray;

@interface RadioManagedSkipHistory : NSManagedObject  {
}

@property(copy) NSString * skipIdentifier;
@property(copy) NSArray * skipTimestamps;
@property(copy) NSString * stationHash;
@property long long stationID;


- (void)setStationID:(long long)arg1;
- (void)setStationHash:(id)arg1;
- (id)skipTimestamps;
- (id)skipIdentifier;
- (void)setSkipTimestamps:(id)arg1;
- (void)setSkipIdentifier:(id)arg1;
- (long long)stationID;
- (id)stationHash;

@end
