/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@class NSString;

@interface AXEventKeyInfoRepresentation : NSObject <NSSecureCoding, NSCopying> {
    BOOL _keyDown;
    unsigned short _keyCode;
    NSString *_unmodifiedInput;
    NSString *_modifiedInput;
    NSString *_shiftModifiedInput;
    unsigned int _modifierState;
}

@property unsigned short keyCode;
@property BOOL keyDown;
@property(retain) NSString * unmodifiedInput;
@property(retain) NSString * modifiedInput;
@property(retain) NSString * shiftModifiedInput;
@property unsigned int modifierState;

+ (BOOL)supportsSecureCoding;

- (unsigned short)keyCode;
- (void)translateKeycode;
- (id)_hardwareKeyboardLayout;
- (void)setModifierState:(unsigned int)arg1;
- (void)setShiftModifiedInput:(id)arg1;
- (void)setModifiedInput:(id)arg1;
- (void)setUnmodifiedInput:(id)arg1;
- (void)setKeyDown:(BOOL)arg1;
- (void)setKeyCode:(unsigned short)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)shiftModifiedInput;
- (unsigned int)modifierState;
- (id)unmodifiedInput;
- (id)modifiedInput;
- (BOOL)keyDown;

@end
