/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSString, _NSLayoutConstraintConstant;

@interface NSLayoutConstraint : NSObject <NSISConstraint> {
    id _container;
    id _firstItem;
    id _secondItem;
    float _constant;
    float _loweredConstant;
    id _markerAndPositiveExtraVar;
    id _negativeExtraVar;
    unsigned long long _layoutConstraintFlags;
    float _coefficient;
    float _priority;
}

@property(getter=_encodedConstant,setter=_setEncodedConstant:) _NSLayoutConstraintConstant * encodedConstant;
@property float priority;
@property BOOL shouldBeArchived;
@property id firstItem;
@property int firstAttribute;
@property int relation;
@property id secondItem;
@property int secondAttribute;
@property float multiplier;
@property float constant;
@property(copy) NSString * identifier;
@property(readonly) BOOL hasBeenLowered;
@property id container;
@property(copy) NSString * symbolicConstant;
@property(getter=_loweredConstantNeedsUpdate,setter=_setLoweredConstantNeedsUpdate:) BOOL loweredConstantNeedsUpdate;

+ (id)constraintWithItem:(id)arg1 attribute:(int)arg2 relatedBy:(int)arg3 toItem:(id)arg4 attribute:(int)arg5 multiplier:(float)arg6;
+ (id)constraintWithItem:(id)arg1 attribute:(int)arg2 relatedBy:(int)arg3 toItem:(id)arg4 attribute:(int)arg5 constant:(float)arg6;
+ (id)constraintsWithVisualFormat:(id)arg1 options:(unsigned int)arg2 metrics:(id)arg3 views:(id)arg4;
+ (id)constraintWithItem:(id)arg1 attribute:(int)arg2 relatedBy:(int)arg3 constant:(float)arg4;
+ (id)constraintWithItem:(id)arg1 attribute:(int)arg2 relatedBy:(int)arg3 toItem:(id)arg4 attribute:(int)arg5 multiplier:(float)arg6 constant:(float)arg7;
+ (id)constraintWithItem:(id)arg1 attribute:(int)arg2 relatedBy:(int)arg3 toItem:(id)arg4 attribute:(int)arg5;
+ (id)constraintWithItem:(id)arg1 attribute:(int)arg2 relatedBy:(int)arg3 toItem:(id)arg4 attribute:(int)arg5 multiplier:(float)arg6 symbolicConstant:(id)arg7 theme:(id)arg8;
+ (id)constraintWithItem:(id)arg1 attribute:(int)arg2 relatedBy:(int)arg3 toItem:(id)arg4 attribute:(int)arg5 multiplier:(float)arg6 symbolicConstant:(id)arg7;
+ (id)_gkConstraintsForViews:(id)arg1 contiguouslyLaidOutVertically:(BOOL)arg2 overlap:(float)arg3 withinView:(id)arg4 insets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg5;
+ (id)_gkConstraintsForViews:(id)arg1 alignedByAttribute:(int)arg2;
+ (id)_gkConstraintForView:(id)arg1 withHeightDerivedFromView:(id)arg2 insetBy:(float)arg3;
+ (id)_gkConstraintForView:(id)arg1 withWidthDerivedFromView:(id)arg2 insetBy:(float)arg3;
+ (id)_gkConstraintForView:(id)arg1 baselineAlignedUnderView:(id)arg2 offsetBy:(float)arg3;
+ (id)_gkConstraintForView:(id)arg1 centeredXInView:(id)arg2;
+ (id)_gkConstraintForView:(id)arg1 equalsAttribute:(int)arg2 ofView:(id)arg3;
+ (id)_gkConstraintsForViews:(id)arg1 contiguouslyLaidOutVertically:(BOOL)arg2 overlap:(float)arg3 withinView:(id)arg4 insets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg5 applyOrthogonalConstraints:(BOOL)arg6;
+ (id)_gkConstraintWithItem:(id)arg1 attribute:(int)arg2 relatedBy:(int)arg3 toItem:(id)arg4 attribute:(int)arg5 multiplier:(float)arg6 leading:(float)arg7 fontTextStyle:(id)arg8;
+ (id)_gkConstraintsForView:(id)arg1 centeredXInView:(id)arg2 enforceMargin:(float)arg3;
+ (id)_gkConstraintsForView:(id)arg1 withinView:(id)arg2 insets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg3;
+ (id)_gkConstraintForView:(id)arg1 centeredYInView:(id)arg2;
+ (id)_gkConstraintForView:(id)arg1 withConstantWidth:(float)arg2;
+ (id)_gkConstraintForView:(id)arg1 withConstantHeight:(float)arg2;
+ (id)_gkBaselineConstraintsForViewsFontsLeadings:(id)arg1 superview:(id)arg2 options:(int)arg3;
+ (id)constraintWithItem:(id)arg1 height:(float)arg2;
+ (id)constraintWithItem:(id)arg1 attribute:(int)arg2 relatedBy:(int)arg3 toItem:(id)arg4 attribute:(int)arg5 multiplier:(float)arg6 constant:(float)arg7 priority:(float)arg8;
+ (id)constraintsBySizingView:(id)arg1 toSize:(struct CGSize { float x1; float x2; })arg2;
+ (id)constraintsByCenteringView:(id)arg1 withView:(id)arg2 alongAxes:(int)arg3 offset:(struct UIOffset { float x1; float x2; })arg4;
+ (id)constraintsByAttachingView:(id)arg1 toView:(id)arg2 alongEdges:(unsigned int)arg3 insets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg4;
+ (id)constraintsByCenteringAndContainingView:(id)arg1 inView:(id)arg2 insets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg3;
+ (id)constraintsByAttachingView:(id)arg1 toView:(id)arg2 inCorner:(unsigned int)arg3 offset:(struct UIOffset { float x1; float x2; })arg4;

- (int)_constraintType;
- (void)setShouldBeArchived:(BOOL)arg1;
- (void)setSymbolicConstant:(id)arg1;
- (id)symbolicConstant;
- (id)_markerAndPositiveExtraVar;
- (BOOL)nsis_valueOfVariableIsUserObservable:(id)arg1;
- (BOOL)nsis_shouldIntegralizeVariable:(id)arg1;
- (id)nsis_descriptionOfVariable:(id)arg1;
- (void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2;
- (BOOL)_loweredConstantNeedsUpdate;
- (BOOL)_loweredConstantIsRounded;
- (BOOL)_addToEngine:(id)arg1 integralizationAdjustment:(float)arg2 mutuallyExclusiveConstraints:(id*)arg3;
- (BOOL)_nsib_isRedundant;
- (void)_setLoweredConstantNeedsUpdate:(BOOL)arg1;
- (float)multiplier;
- (int)relation;
- (void)_setMultiplier:(float)arg1;
- (void)setPriority:(float)arg1;
- (float)priority;
- (id)animations;
- (void)setIdentifier:(id)arg1;
- (id)container;
- (id)_identifier;
- (void)setContainer:(id)arg1;
- (float)constant;
- (void)_containerGeometryDidChange;
- (int)secondAttribute;
- (int)firstAttribute;
- (void)_addToEngine:(id)arg1;
- (void)_removeFromEngine:(id)arg1;
- (id)secondItem;
- (BOOL)shouldBeArchived;
- (void)setAnimations:(id)arg1;
- (id)firstItem;
- (void)setConstant:(float)arg1;
- (id)identifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)_loweredExpression;
- (BOOL)_describesSameRestrictionAsConstraint:(id)arg1;
- (id)_constraintByReplacingView:(id)arg1 withView:(id)arg2;
- (void)_clearWeakContainerReference;
- (void)_setPrimitiveConstraintType:(int)arg1;
- (int)_primitiveConstraintType;
- (void)_setDeferDTraceLogging:(BOOL)arg1;
- (BOOL)_deferDTraceLogging;
- (void)_setNegativeExtraVar:(id)arg1;
- (id)_negativeExtraVar;
- (void)_setMarkerAndPositiveErrorVar:(id)arg1;
- (float)_fudgeIncrement;
- (BOOL)_isFudgeable;
- (BOOL)_isIBPrototypingLayoutConstraint;
- (void)_setSecondAttribute:(int)arg1;
- (void)_setSecondItem:(id)arg1;
- (void)_setRelation:(int)arg1;
- (void)_setFirstAttribute:(int)arg1;
- (void)_setFirstItem:(id)arg1;
- (BOOL)_nsib_isRedundantInEngine:(id)arg1;
- (void)_makeExtraVars;
- (float)priorityForVariable:(id)arg1;
- (id)_constraintByReplacingItem:(id)arg1 withItem:(id)arg2;
- (id)_priorityDescription;
- (id)equationDescription;
- (id)asciiArtDescription;
- (id)descriptionAccessory;
- (id)_descriptionforSymbolicConstant;
- (void)_setSymbolicConstant:(id)arg1 constant:(float)arg2;
- (BOOL)_effectiveConstant:(float*)arg1 error:(id*)arg2;
- (BOOL)_tryToChangeContainerGeometryWithUndoHandler:(id)arg1;
- (void)_setSymbolicConstant:(id)arg1;
- (id)_symbolicConstant;
- (float)_allowedMagnitudeForIntegralizationAdjustmentOfConstraintWithMarkerScaling:(float*)arg1;
- (BOOL)_addLoweredExpression:(id)arg1 toEngine:(id)arg2 integralizationAdjustment:(float)arg3 lastLoweredConstantWasRounded:(BOOL)arg4 mutuallyExclusiveConstraints:(id*)arg5;
- (BOOL)_lowerIntoExpression:(id)arg1 reportingConstantIsRounded:(BOOL*)arg2;
- (void)setHasBeenLowered:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })_engineToContainerScalingCoefficients;
- (float)_allowedMagnitudeForIntegralizationAdjustment;
- (void)_setIdentifier:(id)arg1;
- (id)_constantDescriptionForDTrace;
- (BOOL)hasBeenLowered;
- (float)nsis_allowedMagnitudeForIntegralizationAdjustmentOfConstraintWithMarker:(id)arg1;
- (BOOL)defaultResolvedValue:(float*)arg1 forSymbolicConstant:(id)arg2 error:(id*)arg3;
- (void)_setEncodedConstant:(id)arg1;
- (id)_encodedConstant;
- (void)tk_removeFromContainer;

@end
