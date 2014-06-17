/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@class NSString;

@interface GKEditAction : NSObject  {
    BOOL _destructive;
    NSString *_name;
    SEL _selector;
}

@property(copy) NSString * name;
@property SEL selector;
@property BOOL destructive;

+ (id)deleteActionWithName:(id)arg1;
+ (id)actionWithName:(id)arg1 selector:(SEL)arg2;

- (BOOL)destructive;
- (void)setDestructive:(BOOL)arg1;
- (SEL)selector;
- (void)setSelector:(SEL)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (void)dealloc;

@end