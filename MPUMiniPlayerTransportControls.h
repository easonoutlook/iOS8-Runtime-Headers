/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@class MPUProspectivePlaybackInformation, <MPUMiniPlayerTransportControlsDelegate>;

@interface MPUMiniPlayerTransportControls : MPTransportControls  {
    <MPUMiniPlayerTransportControlsDelegate> *_delegate;
    MPUProspectivePlaybackInformation *_prospectivePlaybackInformation;
}

@property <MPUMiniPlayerTransportControlsDelegate> * delegate;
@property(retain) MPUProspectivePlaybackInformation * prospectivePlaybackInformation;

+ (int)buttonType;
+ (Class)buttonClass;
+ (BOOL)buttonImagesUseBackgroundImage;

- (void)setProspectivePlaybackInformation:(id)arg1;
- (id)prospectivePlaybackInformation;
- (void)_prospectivePlaybackInformationDidChangeAnimated:(BOOL)arg1;
- (void)setProspectivePlaybackInformation:(id)arg1 animated:(BOOL)arg2;
- (void).cxx_destruct;
- (id)delegate;
- (void)layoutSubviews;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)setDelegate:(id)arg1;
- (id)newButtonForPart:(unsigned long long)arg1;
- (void)reloadForAdditions:(id)arg1 removals:(id)arg2 animate:(BOOL)arg3;
- (id)buttonImageForPart:(unsigned long long)arg1;
- (id)tintColorForPart:(unsigned long long)arg1;
- (BOOL)usesTintColorForControls;

@end
