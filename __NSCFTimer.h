/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface __NSCFTimer : NSTimer  {
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id)fireDate;
- (double)timeInterval;
- (id)initWithFireDate:(id)arg1 interval:(double)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 repeats:(BOOL)arg6;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (id)userInfo;
- (void)setFireDate:(id)arg1;
- (BOOL)isValid;
- (unsigned int)retainCount;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)invalidate;
- (void)finalize;
- (id)retain;
- (oneway void)release;
- (id)init;
- (void)fire;
- (void)setTolerance:(double)arg1;
- (double)tolerance;
- (unsigned long)_cfTypeID;

@end
