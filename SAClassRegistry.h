/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface SAClassRegistry : NSObject  {
    NSMutableDictionary *_classesByAceClassNameByGroupIdentifier;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(getter=_classesByAceClassNameByGroupIdentifier,readonly) NSMutableDictionary * classesByAceClassNameByGroupIdentifier;
@property(getter=_queue,readonly) NSObject<OS_dispatch_queue> * queue;

+ (id)sharedClassRegistry;

- (void)_accessMutableStateWithBlock:(id)arg1;
- (id)_classesByAceClassNameByGroupIdentifier;
- (void)registerClass:(Class)arg1 forAceClassWithName:(id)arg2 inGroupWithIdentifier:(id)arg3;
- (Class)classForAceClassWithName:(id)arg1 inGroupWithIdentifier:(id)arg2;
- (id)_queue;
- (void)dealloc;
- (id)init;

@end