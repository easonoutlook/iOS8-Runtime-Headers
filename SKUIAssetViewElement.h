/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSURL;

@interface SKUIAssetViewElement : SKUIViewElement  {
    double _initialPlaybackTime;
    long long _itemIdentifier;
    double _playbackDuration;
    NSURL *_url;
}

@property double initialPlaybackTime;
@property(readonly) long long itemIdentifier;
@property(readonly) double playbackDuration;
@property(readonly) NSURL * URL;


- (id)applyUpdatesWithElement:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (long long)itemIdentifier;
- (void).cxx_destruct;
- (id)URL;
- (double)playbackDuration;
- (double)initialPlaybackTime;
- (void)setInitialPlaybackTime:(double)arg1;

@end
