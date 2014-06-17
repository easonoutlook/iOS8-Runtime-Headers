/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
 */

@class TTSSpeechVoice;

@interface TTSSpeechChannel : NSObject  {
    TTSSpeechVoice *_voice;
}

@property(retain) TTSSpeechVoice * voice;

+ (BOOL)supportsSecureCoding;

- (void)setVoice:(id)arg1;
- (id)initWithVoice:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)voice;

@end
