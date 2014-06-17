/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SportsVoices.framework/SportsVoices
 */

@class SimpleSlotSequence, NSArray;

@interface NewProduction : GenericProduction  {
    NSArray *_indices;
    SimpleSlotSequence *_overlays;
}

@property(retain) NSArray * indices;
@property(retain) SimpleSlotSequence * overlays;

+ (id)productionWithSimpleSlotSequence:(id)arg1;
+ (id)instanceFromPlist:(id)arg1;

- (id)overlays;
- (void)setOverlays:(id)arg1;
- (void)setIndices:(id)arg1;
- (id)indices;
- (id)initWithSimpleSlotSequence:(id)arg1;
- (id)initWithOverlays:(id)arg1 indices:(id)arg2;
- (id)initFromPlist:(id)arg1;
- (id)description;
- (void)dealloc;

@end
