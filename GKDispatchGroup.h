/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class NSError, NSString, GKThreadsafeDictionary, NSObject<OS_dispatch_group>;

@interface GKDispatchGroup : NSObject  {
    NSString *_name;
    NSObject<OS_dispatch_group> *_group;
    GKThreadsafeDictionary *_values;
    NSError *_error;
    id result;
    int _sequence;
    BOOL _loggingEnabled;
    id _result;
}

@property(retain) NSError * error;
@property(retain) id result;
@property(getter=isLoggingEnabled) BOOL loggingEnabled;
@property NSObject<OS_dispatch_group> * group;

+ (id)dispatchGroup;
+ (id)backgroundConcurrentQueue;
+ (id)defaultConcurrentQueue;
+ (id)dispatchGroupWithName:(id)arg1;
+ (id)mainQueue;

- (void)setLoggingEnabled:(BOOL)arg1;
- (BOOL)isLoggingEnabled;
- (id)error;
- (void)setError:(id)arg1;
- (void)setResult:(id)arg1;
- (void)notifyOnMainQueueWithBlock:(id)arg1;
- (void)join:(id)arg1 queue:(id)arg2 block:(id)arg3;
- (void)waitWithTimeout:(double)arg1;
- (void)enter;
- (void)_waitWithDispatchTimeout:(unsigned long long)arg1;
- (void)notifyOnQueue:(id)arg1 block:(id)arg2;
- (void)leave;
- (void)wait;
- (id)initWithName:(id)arg1;
- (id)result;
- (id)group;
- (void)setGroup:(id)arg1;
- (id)allValues;
- (void)perform:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)_values;

@end