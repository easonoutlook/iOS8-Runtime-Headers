/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface GKThreadsafeDictionary : NSObject  {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_dictionary;
}

@property(retain) NSMutableDictionary * dictionary;


- (void)setDictionary:(id)arg1;
- (id)objectForKey:(id)arg1 objectProducerBlock:(id)arg2;
- (void)readFromDictionary:(id)arg1;
- (void)writeToDictionary:(id)arg1;
- (id)initWithName:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)removeAllObjects;
- (id)allKeys;
- (id)dictionary;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)allObjects;
- (id)description;
- (void)dealloc;

@end
