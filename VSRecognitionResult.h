/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@interface VSRecognitionResult : NSObject  {
}

+ (id)recognitionResultWithModelIdentifier:(id)arg1 classIdentifiers:(id)arg2 values:(id)arg3;
+ (void)initialize;

- (id)recognitionAction;
- (void)setRecognitionAction:(id)arg1;
- (id)createHandler;
- (id)valueOfFirstElementWithClassIdentifier:(id)arg1;
- (id)recognitionResultByReplacingValueForClassIdentifier:(id)arg1 withValue:(id)arg2;
- (BOOL)getElementClassIdentifier:(id*)arg1 value:(id*)arg2 atIndex:(int)arg3;
- (int)elementCount;
- (id)modelIdentifier;
- (unsigned int)retainCount;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)retain;
- (oneway void)release;
- (id)init;

@end
