/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, NSIndexSet, UIViewController, UIEvent;

@interface UIKeyCommand : NSObject <NSCopying, NSSecureCoding> {
    NSIndexSet *_keyCodes;
    SEL _action;
    int _buttonType;
    UIEvent *_triggeringEvent;
    NSString *_segueIdentifier;
    UIViewController *_controllerForSegue;
    NSString *_input;
    int _modifierFlags;
}

@property(readonly) NSString * input;
@property(readonly) int modifierFlags;

+ (id)keyCommandWithInput:(id)arg1 modifierFlags:(int)arg2 segueIdentifier:(id)arg3;
+ (id)keyCommandWithInput:(id)arg1 modifierFlags:(int)arg2 buttonType:(int)arg3;
+ (id)keyCommandWithKeyCodes:(id)arg1 modifierFlags:(int)arg2 buttonType:(int)arg3;
+ (id)keyCommandWithKeyCodes:(id)arg1 modifierFlags:(int)arg2 action:(SEL)arg3;
+ (BOOL)supportsSecureCoding;
+ (id)keyCommandWithInput:(id)arg1 modifierFlags:(int)arg2 action:(SEL)arg3;

- (id)_triggeringEvent;
- (id)_controllerForSegue;
- (id)initWithInput:(id)arg1 modifierFlags:(int)arg2 buttonType:(int)arg3;
- (id)initWithKeyCodes:(id)arg1 modifierFlags:(int)arg2 buttonType:(int)arg3;
- (id)initWithInput:(id)arg1 modifierFlags:(int)arg2 action:(SEL)arg3;
- (id)initWithInput:(id)arg1 modifierFlags:(int)arg2 segueIdentifier:(id)arg3;
- (id)initWithKeyCodes:(id)arg1 modifierFlags:(int)arg2 action:(SEL)arg3;
- (id)_keyCodes;
- (int)modifierFlags;
- (id)input;
- (void)_setViewControllerForSegue:(id)arg1;
- (id)_segueIdentifier;
- (void)_setTriggeringEvent:(id)arg1;
- (void)_setButtonType:(int)arg1;
- (void)setAction:(SEL)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)triggerSegueIfPossible;
- (int)_buttonType;
- (SEL)action;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end
