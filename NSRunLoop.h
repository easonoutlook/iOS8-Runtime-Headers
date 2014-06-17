/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSRunLoop : NSObject  {
    id _rl;
    id _dperf;
    id _perft;
    id _info;
    id _ports;
    void *_reserved[6];
}

+ (id)mainRunLoop;
+ (id)currentRunLoop;
+ (id)_new:(id)arg1;
+ (void)set_mapkit_networkIORunLoop:(id)arg1;
+ (id)_mapkit_networkIORunLoop;

- (void)removePort:(id)arg1 forMode:(id)arg2;
- (void)addPort:(id)arg1 forMode:(id)arg2;
- (void)run;
- (id)currentMode;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)addTimer:(id)arg1 forMode:(id)arg2;
- (id)allModes;
- (id)description;
- (void)dealloc;
- (id)init;
- (void)runUntilDate:(id)arg1;
- (BOOL)runBeforeDate:(id)arg1;
- (BOOL)runMode:(id)arg1 untilDate:(id)arg2;
- (void)acceptInputForMode:(id)arg1 beforeDate:(id)arg2;
- (void)_wakeup;
- (id)limitDateForMode:(id)arg1;
- (void)_invalidateTimers;
- (BOOL)containsTimer:(id)arg1 forMode:(id)arg2;
- (id)timersForMode:(id)arg1;
- (void)removeTimer:(id)arg1 forMode:(id)arg2;
- (id)portsForMode:(id)arg1;
- (BOOL)containsPort:(id)arg1 forMode:(id)arg2;
- (BOOL)runMode:(id)arg1 beforeDate:(id)arg2;
- (void)_removePort:(id)arg1 forMode:(id)arg2;
- (void)_addPort:(id)arg1 forMode:(id)arg2;
- (BOOL)_containsPort:(id)arg1 forMode:(id)arg2;
- (void)_portInvalidated:(id)arg1;
- (void)_enumerateInfoPairsWithBlock:(id)arg1;
- (struct __CFRunLoop { }*)getCFRunLoop;
- (void)cancelPerformSelectorsWithTarget:(id)arg1;
- (void)performSelector:(SEL)arg1 target:(id)arg2 argument:(id)arg3 order:(unsigned int)arg4 modes:(id)arg5;
- (void)cancelPerformSelector:(SEL)arg1 target:(id)arg2 argument:(id)arg3;

@end
