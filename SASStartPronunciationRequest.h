/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class SASPronunciationContext;

@interface SASStartPronunciationRequest : SASStartSpeech  {
}

@property(retain) SASPronunciationContext * context;

+ (id)startPronunciationRequestWithDictionary:(id)arg1 context:(id)arg2;
+ (id)startPronunciationRequest;

- (id)encodedClassName;
- (void)setContext:(id)arg1;
- (id)context;
- (id)groupIdentifier;

@end
