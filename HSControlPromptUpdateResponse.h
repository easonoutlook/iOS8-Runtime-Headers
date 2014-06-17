/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@class NSDictionary, HSControlPrompt;

@interface HSControlPromptUpdateResponse : HSResponse  {
    unsigned int _nextPromptID;
    HSControlPrompt *_prompt;
    NSDictionary *_promptDictionary;
}

@property unsigned int nextPromptID;
@property(retain) HSControlPrompt * prompt;
@property(copy) NSDictionary * promptDictionary;


- (id)promptDictionary;
- (unsigned int)nextPromptID;
- (void)setPromptDictionary:(id)arg1;
- (void)setNextPromptID:(unsigned int)arg1;
- (void).cxx_destruct;
- (void)setPrompt:(id)arg1;
- (id)prompt;

@end
