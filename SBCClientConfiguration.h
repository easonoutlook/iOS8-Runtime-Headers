/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreBookkeeperClient.framework/StoreBookkeeperClient
 */

@class SBCPlaybackPositionDomain;

@interface SBCClientConfiguration : NSObject <NSSecureCoding> {
    SBCPlaybackPositionDomain *_playbackPositionDomain;
}

@property(readonly) SBCPlaybackPositionDomain * playbackPositionDomain;

+ (BOOL)supportsSecureCoding;

- (id)initWithPlaybackPositionDomain:(id)arg1;
- (id)playbackPositionDomain;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;

@end
