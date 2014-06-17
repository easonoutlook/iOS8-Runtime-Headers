/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SportsVoices.framework/SportsVoices
 */

@class NSMutableArray;

@interface SlotSequence : Slot  {
    NSMutableArray *_slots;
}

@property(retain) NSMutableArray * slots;

+ (id)slotSequenceWithArray:(id)arg1;
+ (id)emptySlotSequence;

- (BOOL)empty;
- (id)reversed;
- (BOOL)matches:(id)arg1;
- (void)setSlots:(id)arg1;
- (id)subsequenceFromIndex:(unsigned int)arg1;
- (id)slotSubsequenceFromIndex:(unsigned int)arg1;
- (id)rest;
- (id)portionFollowingOccurrenceOfSequence:(id)arg1 atIndex:(unsigned int)arg2;
- (id)portionPrecedingOccurrenceOfSequence:(id)arg1 atIndex:(unsigned int)arg2;
- (id)occurrenceOfSequence:(id)arg1 atIndex:(unsigned int)arg2;
- (id)indicesOfOccurrencesInTarget:(id)arg1;
- (id)slots;
- (id)overlayedOn:(id)arg1;
- (id)initFromPlist:(id)arg1;
- (id)first;
- (id)initWithArray:(id)arg1;
- (id)description;
- (unsigned int)count;
- (void)dealloc;

@end
