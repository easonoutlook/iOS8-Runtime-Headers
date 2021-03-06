/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@class MPUReportingRadioStationMetadata;

@interface MPUReportingStationChangeEvent : MPUReportingEvent  {
    MPUReportingRadioStationMetadata *_oldStationMetadata;
    MPUReportingRadioStationMetadata *_currentStationMetadata;
}

@property(retain) MPUReportingRadioStationMetadata * oldStationMetadata;
@property(retain) MPUReportingRadioStationMetadata * currentStationMetadata;


- (void)setOldStationMetadata:(id)arg1;
- (void)setCurrentStationMetadata:(id)arg1;
- (id)oldStationMetadata;
- (id)currentStationMetadata;
- (void).cxx_destruct;
- (BOOL)isValid;

@end
