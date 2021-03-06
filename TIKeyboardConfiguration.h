/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@class NSString, TIKeyboardInputManagerState, TIKeyboardIntermediateText;

@interface TIKeyboardConfiguration : NSObject <NSSecureCoding> {
    BOOL _assertDefaultKeyPlane;
    TIKeyboardInputManagerState *_inputManagerState;
    TIKeyboardIntermediateText *_intermediateText;
    NSString *_layoutTag;
    NSString *_accentKeyString;
}

@property(copy) TIKeyboardInputManagerState * inputManagerState;
@property(retain) TIKeyboardIntermediateText * intermediateText;
@property(copy) NSString * layoutTag;
@property(copy) NSString * accentKeyString;
@property BOOL assertDefaultKeyPlane;

+ (BOOL)supportsSecureCoding;

- (void)setAssertDefaultKeyPlane:(BOOL)arg1;
- (void)setAccentKeyString:(id)arg1;
- (void)setIntermediateText:(id)arg1;
- (id)accentKeyString;
- (BOOL)assertDefaultKeyPlane;
- (id)intermediateText;
- (void)setInputManagerState:(id)arg1;
- (id)inputManagerState;
- (void)setLayoutTag:(id)arg1;
- (id)layoutTag;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end
