/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKManualUpdater : NSObject  {
    BOOL _needsUpdate;
    id _target;
    SEL _action;
}

@property BOOL needsUpdate;
@property id target;
@property SEL action;


- (BOOL)needsUpdate;
- (void)updateIfNeeded;
- (void)setNeedsUpdate;
- (void)setNeedsUpdate:(BOOL)arg1;
- (void)setAction:(SEL)arg1;
- (id)target;
- (SEL)action;
- (void)setTarget:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (id)description;

@end