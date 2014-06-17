/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString;

@interface UIMenuItem : NSObject  {
    NSString *_title;
    SEL _action;
    BOOL _dontDismiss;
}

@property(copy) NSString * title;
@property SEL action;
@property BOOL dontDismiss;

+ (id)menuItemWithTitle:(id)arg1 action:(SEL)arg2;

- (BOOL)dontDismiss;
- (void)setDontDismiss:(BOOL)arg1;
- (id)initWithTitle:(id)arg1 action:(SEL)arg2;
- (void)setAction:(SEL)arg1;
- (SEL)action;
- (id)title;
- (void)setTitle:(id)arg1;
- (void)dealloc;

@end
