/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@class HMActionSet, NSUUID;

@interface HMAction : NSObject  {
    unsigned int _actionType;
    NSUUID *_uuid;
    HMActionSet *_actionSet;
}

@property unsigned int actionType;
@property(retain) NSUUID * uuid;
@property HMActionSet * actionSet;

+ (id)actionWithInfo:(id)arg1 home:(id)arg2;
+ (id)lookupActionWithInfo:(id)arg1 inArray:(id)arg2;

- (unsigned int)actionType;
- (void)setActionType:(unsigned int)arg1;
- (void)setUuid:(id)arg1;
- (id)actionSet;
- (void)configure:(id)arg1 actionSet:(id)arg2;
- (id)uuid;
- (void).cxx_destruct;
- (void)invalidate;
- (void)setActionSet:(id)arg1;
- (BOOL)handleUpdates:(id)arg1;
- (id)serializeForAdd;

@end