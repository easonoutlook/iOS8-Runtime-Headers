/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class NSDate, NSString, AVItemAccessLogEventInternal;

@interface AVItemAccessLogEvent : NSObject <NSCopying> {
    AVItemAccessLogEventInternal *_playerItemAccessLogEvent;
}

@property(readonly) int numberOfSegmentsDownloaded;
@property(readonly) NSDate * playbackStartDate;
@property(readonly) NSString * URI;
@property(readonly) NSString * serverAddress;
@property(readonly) int numberOfServerAddressChanges;
@property(readonly) NSString * playbackSessionID;
@property(readonly) double playbackStartOffset;
@property(readonly) double segmentsDownloadedDuration;
@property(readonly) double durationWatched;
@property(readonly) int numberOfStalls;
@property(readonly) long long numberOfBytesTransferred;
@property(readonly) double observedBitrate;
@property(readonly) double indicatedBitrate;
@property(readonly) int numberOfDroppedVideoFrames;


- (int)numberOfDroppedVideoFrames;
- (double)indicatedBitrate;
- (double)observedBitrate;
- (long long)numberOfBytesTransferred;
- (int)numberOfStalls;
- (double)durationWatched;
- (double)segmentsDownloadedDuration;
- (double)playbackStartOffset;
- (id)playbackSessionID;
- (int)numberOfServerAddressChanges;
- (id)serverAddress;
- (id)URI;
- (id)playbackStartDate;
- (int)numberOfSegmentsDownloaded;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)dealloc;
- (void)finalize;
- (id)init;

@end
