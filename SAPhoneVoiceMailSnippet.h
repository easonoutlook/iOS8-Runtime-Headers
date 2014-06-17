/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSNumber, <SAClientBoundCommand>, NSArray;

@interface SAPhoneVoiceMailSnippet : SAUISnippet  {
}

@property(copy) NSNumber * autoPlay;
@property(copy) NSArray * calls;
@property(copy) NSArray * playVoiceMailCommands;
@property(retain) <SAClientBoundCommand> * postPlayCommand;

+ (id)voiceMailSnippetWithDictionary:(id)arg1 context:(id)arg2;
+ (id)voiceMailSnippet;

- (void)setPostPlayCommand:(id)arg1;
- (id)postPlayCommand;
- (void)setPlayVoiceMailCommands:(id)arg1;
- (id)playVoiceMailCommands;
- (void)setAutoPlay:(id)arg1;
- (id)autoPlay;
- (void)setCalls:(id)arg1;
- (id)encodedClassName;
- (id)calls;
- (id)groupIdentifier;

@end
