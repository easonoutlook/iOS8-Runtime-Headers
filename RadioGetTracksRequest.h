/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@class SSURLConnectionRequest, RadioPlayEventCollection, NSData, NSDictionary, RadioPlaybackContext, RadioStation;

@interface RadioGetTracksRequest : RadioRequest  {
    unsigned long long _globalVersion;
    BOOL _includeCleanTracksOnly;
    unsigned int _numberOfTracks;
    SSURLConnectionRequest *_request;
    RadioStation *_station;
    BOOL _shouldIncludeAsset;
    NSDictionary *_additionalRequestParameters;
    NSData *_heartbeatTokenData;
    RadioPlayEventCollection *_playEventCollection;
    RadioPlaybackContext *_playbackContext;
    int _reasonType;
}

@property(copy) NSDictionary * additionalRequestParameters;
@property unsigned int numberOfTracks;
@property(copy) NSData * heartbeatTokenData;
@property BOOL includeCleanTracksOnly;
@property(copy) RadioPlayEventCollection * playEventCollection;
@property(copy) RadioPlaybackContext * playbackContext;
@property int reasonType;
@property BOOL shouldIncludeAsset;


- (void)setAdditionalRequestParameters:(id)arg1;
- (void)setHeartbeatTokenData:(id)arg1;
- (unsigned int)numberOfTracks;
- (void)setShouldIncludeAsset:(BOOL)arg1;
- (void)setReasonType:(int)arg1;
- (int)reasonType;
- (id)playbackContext;
- (id)initWithStation:(id)arg1 globalVersion:(unsigned long long)arg2;
- (void)setPlayEventCollection:(id)arg1;
- (void)setPlaybackContext:(id)arg1;
- (void)setNumberOfTracks:(unsigned int)arg1;
- (BOOL)shouldIncludeAsset;
- (id)playEventCollection;
- (id)heartbeatTokenData;
- (id)additionalRequestParameters;
- (BOOL)includeCleanTracksOnly;
- (void)startWithCompletionHandler:(id)arg1;
- (void).cxx_destruct;
- (void)cancel;
- (id)init;
- (void)setIncludeCleanTracksOnly:(BOOL)arg1;

@end
