/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSArray, KNAnimationPluginMenu, TSUColor, KNTransitionAttributes, NSString, KNAnimationInfo, NSSet;

@interface KNTransition : TSPContainedObject <KNInspectableAnimation> {
    KNTransitionAttributes *mAttributes;
}

@property(readonly) NSString * effect;
@property(readonly) BOOL isMagicMove;
@property(copy) KNTransitionAttributes * attributes;
@property(readonly) KNAnimationInfo * animationInfo;
@property(readonly) NSArray * localizedEventTriggerNames;
@property(readonly) KNAnimationPluginMenu * directionMenu;
@property(readonly) unsigned int directionType;
@property(readonly) BOOL supportsDirection;
@property(readonly) BOOL supportsDuration;
@property(readonly) BOOL supportsBounce;
@property(readonly) BOOL hasAutomaticTrigger;
@property(readonly) double duration;
@property(readonly) double delay;
@property(readonly) unsigned int direction;
@property(readonly) TSUColor * color;
@property(readonly) float customTwist;
@property(readonly) int customMosaicSize;
@property(readonly) int customMosaicType;
@property(readonly) BOOL customBounce;
@property(readonly) BOOL customMotionBlur;
@property(readonly) int customTimingCurve;
@property(readonly) BOOL customMagicMoveFadeUnmatchedObjects;
@property(readonly) int customTextDelivery;
@property(readonly) NSSet * inspectableAttributes;
@property(readonly) BOOL canEditAnimations;

+ (BOOL)hasDirectionOptionForEffect:(id)arg1;
+ (unsigned int)directionTypeForEffect:(id)arg1;

- (id)animationInfo;
- (void)setAttributes:(id)arg1;
- (id)attributes;
- (id)effect;
- (id)color;
- (double)delay;
- (unsigned int)direction;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithOwner:(id)arg1;
- (id)description;
- (double)duration;
- (void)dealloc;
- (BOOL)customMagicMoveFadeUnmatchedObjects;
- (int)customTimingCurve;
- (int)customMosaicType;
- (int)customMosaicSize;
- (float)customTwist;
- (id)localizedEventTriggerNames;
- (BOOL)hasAutomaticTrigger;
- (BOOL)customMotionBlur;
- (BOOL)customBounce;
- (BOOL)supportsBounce;
- (id)directionMenu;
- (int)customTextDelivery;
- (BOOL)supportsDuration;
- (BOOL)supportsDirection;
- (unsigned long long)p_keynoteVersionFromUnarchiver:(id)arg1;
- (id)initWithOwner:(id)arg1 attributes:(id)arg2;
- (id)inspectableAttributes;
- (BOOL)canEditAnimations;
- (unsigned int)directionType;
- (id)initWithArchive:(const struct TransitionArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct TransitionAttributesArchive {} *x3; int x4; unsigned int x5[1]; }*)arg1 unarchiver:(id)arg2 owner:(id)arg3;
- (BOOL)isMagicMove;
- (void)saveToArchive:(struct TransitionArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct TransitionAttributesArchive {} *x3; int x4; unsigned int x5[1]; }*)arg1 archiver:(id)arg2;

@end
