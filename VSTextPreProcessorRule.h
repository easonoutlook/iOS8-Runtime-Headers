/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@class NSString;

@interface VSTextPreProcessorRule : NSObject  {
    NSString *_matchPattern;
    NSString *_replacement;
    BOOL _caseSensitive;
    BOOL _eatPunctuation;
}


- (id)matchedString:(id)arg1 forTokenInRange:(struct { int x1; int x2; }*)arg2;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (void)dealloc;

@end
