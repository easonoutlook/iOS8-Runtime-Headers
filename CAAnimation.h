/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSArray, NSString, CAMediaTimingFunction, CAStateControllerTransition;

@interface CAAnimation : NSObject <NSMutableCopying, CAPropertyInfo, NSCoding, NSCopying, CAMediaTiming, CAAction> {
    void *_attr;
    unsigned int _flags;
}

@property BOOL usesSceneTimeBase;
@property float fadeInDuration;
@property float fadeOutDuration;
@property(retain) NSArray * animationEvents;
@property int animationID;
@property(copy) id completionBlock;
@property int _mapkit_ID;
@property(copy) id animationDidStartBlock;
@property(copy) id animationDidStopBlock;
@property CAStateControllerTransition * CAStateControllerTransition;
@property(getter=isEnabled) BOOL enabled;
@property(copy) NSString * beginTimeMode;
@property double frameInterval;
@property(retain) CAMediaTimingFunction * timingFunction;
@property(retain) id delegate;
@property(getter=isRemovedOnCompletion) BOOL removedOnCompletion;
@property double beginTime;
@property double duration;
@property float speed;
@property double timeOffset;
@property float repeatCount;
@property double repeatDuration;
@property BOOL autoreverses;
@property(copy) NSString * fillMode;

+ (id)properties;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)animation;
+ (int (*)())CA_getterForProperty:(const struct _CAPropertyInfo { unsigned int x1; SEL x2[2]; unsigned int x3 : 16; unsigned int x4 : 16; char *x5; struct __CFString {} *x6; }*)arg1;
+ (int (*)())CA_setterForProperty:(const struct _CAPropertyInfo { unsigned int x1; SEL x2[2]; unsigned int x3 : 16; unsigned int x4 : 16; char *x5; struct __CFString {} *x6; }*)arg1;
+ (BOOL)CA_encodesPropertyConditionally:(unsigned int)arg1 type:(int)arg2;
+ (void)CAMLParserStartElement:(id)arg1;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (id)defaultValueForKey:(id)arg1;
+ (BOOL)resolveInstanceMethod:(SEL)arg1;
+ (id)pkui_shakeAnimation;
+ (id)TSD_supportedKeyPaths;

- (BOOL)isRemovedOnCompletion;
- (id)fillMode;
- (BOOL)autoreverses;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (double)frameInterval;
- (void)setRemovedOnCompletion:(BOOL)arg1;
- (id)timingFunction;
- (double)beginTime;
- (BOOL)isEnabled;
- (void)setAutoreverses:(BOOL)arg1;
- (void)setRepeatCount:(float)arg1;
- (void)setBeginTimeMode:(id)arg1;
- (void)setTimingFunction:(id)arg1;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (void)setFrameInterval:(double)arg1;
- (float)repeatCount;
- (void)runActionForKey:(id)arg1 object:(id)arg2 arguments:(id)arg3;
- (id)valueForKeyPath:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegate;
- (id)debugDescription;
- (double)repeatDuration;
- (void)setRepeatDuration:(double)arg1;
- (id)beginTimeMode;
- (void)setDefaultDuration:(double)arg1;
- (BOOL)removedOnCompletion;
- (BOOL)shouldArchiveValueForKey:(id)arg1;
- (unsigned int)_propertyFlagsForLayer:(id)arg1;
- (BOOL)_setCARenderAnimation:(struct Animation { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; float x3; struct Ref<CA::Render::Timing> { struct Timing {} *x_4_1_1; } x4; struct Ref<CA::Render::Vector> { struct Vector {} *x_5_1_1; } x5; void *x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; }*)arg1 layer:(id)arg2;
- (struct Object { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; }*)CA_copyRenderValue;
- (id)CAMLTypeForKey:(id)arg1;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)valueForKey:(id)arg1;
- (void)setFillMode:(id)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (void)setTimeOffset:(double)arg1;
- (void)setBeginTime:(double)arg1;
- (void)setSpeed:(float)arg1;
- (float)speed;
- (double)timeOffset;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)setAnimationDidStopBlock:(id)arg1;
- (id)animationDidStopBlock;
- (void)setAnimationDidStartBlock:(id)arg1;
- (id)animationDidStartBlock;
- (int)_mapkit_ID;
- (void)set_mapkit_ID:(int)arg1;
- (id)pkui_completionHandler;
- (void)pkui_setCompletionHandler:(id)arg1;
- (int)animationID;
- (void)setAnimationID:(int)arg1;
- (void)performCompletionBlock:(BOOL)arg1;
- (void)setCompletionBlock:(id)arg1;
- (id)completionBlock;
- (float)fadeInDuration;
- (void)setFadeOutDuration:(float)arg1;
- (void)setFadeInDuration:(float)arg1;
- (float)fadeOutDuration;
- (id)animationEvents;
- (void)setAnimationEvents:(id)arg1;
- (BOOL)commitsOnCompletion;
- (void)setCommitsOnCompletion:(BOOL)arg1;
- (BOOL)usesSceneTimeBase;
- (void)setUsesSceneTimeBase:(BOOL)arg1;
- (id)TSD_animationForKeyPath:(id)arg1 atTime:(double)arg2;
- (BOOL)TSD_containsAnimationForKeyPath:(id)arg1;
- (double)TSD_animationPercentByApplyingTimingFunctionForKeyPath:(id)arg1 atTime:(double)arg2;
- (id)TSD_valueForKeyPath:(id)arg1 atTime:(double)arg2;
- (void)p_getValue:(id*)arg1 animationPercent:(double*)arg2 atTime:(double)arg3 initialValue:(id)arg4;
- (id)TSD_valueAtTime:(double)arg1 initialValue:(id)arg2;
- (id)TSD_valueForKeyPath:(id)arg1 atTime:(double)arg2 animationCache:(id)arg3;

@end