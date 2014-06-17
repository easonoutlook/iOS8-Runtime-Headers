/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSMutableSet, NSCountedSet, NSMapTable;

@interface DAPowerAssertionManager : NSObject  {
    NSCountedSet *_contexts;
    NSMapTable *_groupIdentifierToContexts;
    NSMapTable *_contextToGroupIdentifier;
    NSMutableSet *_heldAsideGroupIdentifiers;
    NSCountedSet *_heldAsideContexts;
    NSMapTable *_contextToPowerAssertionRef;
}

@property(retain) NSCountedSet * contexts;
@property(retain) NSMapTable * groupIdentifierToContexts;
@property(retain) NSMapTable * contextToGroupIdentifier;
@property(retain) NSMutableSet * heldAsideGroupIdentifiers;
@property(retain) NSCountedSet * heldAsideContexts;
@property(retain) NSMapTable * contextToPowerAssertionRef;

+ (id)sharedPowerAssertionManager;
+ (void)vendDaemons:(Class)arg1;

- (void)dropPowerAssertionsForGroupIdentifier:(id)arg1;
- (void)reattainPowerAssertionsForGroupIdentifier:(id)arg1;
- (id)stateString;
- (unsigned int)powerAssertionRetainCount:(id)arg1;
- (id)contextToPowerAssertionRef;
- (void)_releaseAssertionForContext:(id)arg1;
- (void)_retainAssertionForContext:(id)arg1;
- (id)contextToGroupIdentifier;
- (id)groupIdentifierToContexts;
- (id)heldAsideGroupIdentifiers;
- (id)heldAsideContexts;
- (id)contexts;
- (void)setContextToPowerAssertionRef:(id)arg1;
- (void)setHeldAsideGroupIdentifiers:(id)arg1;
- (void)setHeldAsideContexts:(id)arg1;
- (void)setContextToGroupIdentifier:(id)arg1;
- (void)setGroupIdentifierToContexts:(id)arg1;
- (void)setContexts:(id)arg1;
- (void)releasePowerAssertion:(id)arg1;
- (void)retainPowerAssertion:(id)arg1 withGroupIdentifier:(id)arg2;
- (void).cxx_destruct;
- (id)init;

@end