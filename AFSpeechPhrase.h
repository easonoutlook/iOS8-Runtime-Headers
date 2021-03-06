/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@class NSArray;

@interface AFSpeechPhrase : NSObject <NSSecureCoding> {
    BOOL _isLowConfidence;
    NSArray *_interpretations;
}

@property(copy) NSArray * interpretations;
@property BOOL isLowConfidence;

+ (BOOL)supportsSecureCoding;

- (void)setInterpretations:(id)arg1;
- (void)setIsLowConfidence:(BOOL)arg1;
- (BOOL)isLowConfidence;
- (id)bestInterpretation;
- (id)interpretations;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;

@end
