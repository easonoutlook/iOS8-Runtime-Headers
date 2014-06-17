/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray;

@interface SASPhrase : AceObject <SAAceSerializable> {
}

@property(copy) NSArray * interpretations;
@property BOOL lowConfidence;
@property BOOL speechRepairApplied;

+ (id)phrase;
+ (id)phraseWithDictionary:(id)arg1 context:(id)arg2;

- (void)setSpeechRepairApplied:(BOOL)arg1;
- (BOOL)speechRepairApplied;
- (void)setLowConfidence:(BOOL)arg1;
- (BOOL)lowConfidence;
- (void)setInterpretations:(id)arg1;
- (id)encodedClassName;
- (id)interpretations;
- (id)groupIdentifier;
- (id)af_speechInterpretations;

@end