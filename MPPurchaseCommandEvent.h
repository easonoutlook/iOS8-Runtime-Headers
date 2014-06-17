/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSNumber, NSString;

@interface MPPurchaseCommandEvent : MPRemoteCommandEvent  {
    int _type;
    NSNumber *_trackID;
    NSString *_stationHash;
    NSNumber *_stationID;
}

@property(readonly) int type;
@property(readonly) NSNumber * trackID;
@property(readonly) NSString * stationHash;
@property(readonly) NSNumber * stationID;


- (id)trackID;
- (void).cxx_destruct;
- (int)type;
- (id)stationID;
- (id)stationHash;
- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;

@end