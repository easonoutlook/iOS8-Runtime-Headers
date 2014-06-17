/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@class NSNumber, NSString;

@interface TIMecabraCandidate : TIKeyboardCandidate  {
    BOOL _emojiCandidate;
    BOOL _extensionCandidate;
    BOOL _isForShortcutConversion;
    NSString *_candidate;
    NSString *_input;
    NSNumber *_mecabraCandidatePointerValue;
}

@property(retain) NSNumber * mecabraCandidatePointerValue;

+ (BOOL)supportsSecureCoding;
+ (int)type;

- (BOOL)isEmojiCandidate;
- (id)mecabraCandidatePointerValue;
- (id)initWithSurface:(id)arg1 input:(id)arg2 mecabraCandidatePointerValue:(id)arg3;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 mecabraCandidatePointerValue:(id)arg3 isExtension:(BOOL)arg4 isEmoji:(BOOL)arg5 isShortcut:(BOOL)arg6;
- (void)setMecabraCandidatePointerValue:(id)arg1;
- (void)encodeWithCandidateResultSetCoder:(id)arg1;
- (id)initWithCandidateResultSetCoder:(id)arg1;
- (BOOL)isFullwidthCandidate;
- (BOOL)isExtensionCandidate;
- (BOOL)isForShortcutConversion;
- (id)candidate;
- (id)input;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end
