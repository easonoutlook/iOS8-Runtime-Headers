/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@class NSURL;

@interface RCCompositionFragment : NSObject <NSMutableCopying, NSCopying, RCDictionaryPListRepresentationCoding> {
    struct { 
        double beginTime; 
        double endTime; 
    } _timeRangeInContentToUse;
    NSURL *_AVOutputURL;
    double _contentDuration;
    struct { 
        double beginTime; 
        double endTime; 
    } _timeRangeInComposition;
}

@property(retain) NSURL * AVOutputURL;
@property(readonly) NSURL * waveformURL;
@property double contentDuration;
@property struct { double x1; double x2; } timeRangeInContentToUse;
@property struct { double x1; double x2; } timeRangeInComposition;


- (void)setContentDuration:(double)arg1;
- (double)contentDuration;
- (void)setAVOutputURL:(id)arg1;
- (id)fragmentByIntersectingTimeRangeInCompositionWithTimeRange:(struct { double x1; double x2; })arg1;
- (unsigned long long)fileSizeOfAssetsIncludingRelatedResources:(BOOL)arg1;
- (void)moveAssetsToFragment:(id)arg1;
- (void)deleteFromFilesystem;
- (id)dictionaryPListRepresentation;
- (id)initWithDictionaryPListRepresentation:(id)arg1;
- (id)initWithAVOutputURL:(id)arg1 contentDuration:(double)arg2 timeRangeInContentToUse:(struct { double x1; double x2; })arg3 timeRangeInComposition:(struct { double x1; double x2; })arg4;
- (void)setTimeRangeInContentToUse:(struct { double x1; double x2; })arg1;
- (void)setTimeRangeInComposition:(struct { double x1; double x2; })arg1;
- (struct { double x1; double x2; })timeRangeInContentToUse;
- (id)waveformURL;
- (id)AVOutputURL;
- (struct { double x1; double x2; })timeRangeInComposition;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;

@end
