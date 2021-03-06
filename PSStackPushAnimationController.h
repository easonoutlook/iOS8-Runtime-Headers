/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class UINavigationController, NSMutableArray, NSArray;

@interface PSStackPushAnimationController : NSObject <UIViewControllerAnimatedTransitioning> {
    NSArray *_snapshots;
    NSMutableArray *_animationsToRunAlongsideToVC;
    BOOL _hasStartedAnimation;
    NSArray *_viewControllers;
    UINavigationController *_navigationController;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionBlock;

    int _animationPreset;
    float _springDamping;
    double _startStagger;
    double _completionStagger;
    double _pushDuration;
}

@property(retain) NSArray * viewControllers;
@property UINavigationController * navigationController;
@property(copy) id completionBlock;
@property int animationPreset;
@property double startStagger;
@property double completionStagger;
@property double pushDuration;
@property float springDamping;

+ (void)resetDefaultAnimationParameters;
+ (void)setDefaultAnimationPreset:(int)arg1;
+ (id)_animationParametersForPreset:(int)arg1;
+ (id)_snapshotOfViewController:(id)arg1 withNavigationBar:(id)arg2 prevViewController:(id)arg3;
+ (id)controllerWithViewControllerStack:(id)arg1 navigationController:(id)arg2;

- (void)setSpringDamping:(float)arg1;
- (float)springDamping;
- (void)setPushDuration:(double)arg1;
- (void)setCompletionStagger:(double)arg1;
- (double)completionStagger;
- (void)setStartStagger:(double)arg1;
- (double)startStagger;
- (void)setAnimationPreset:(int)arg1;
- (int)animationPreset;
- (id)_valueForAnimationParameter:(id)arg1;
- (void)_addAnimation:(id)arg1 forViewAtIndex:(unsigned int)arg2 count:(unsigned int)arg3;
- (double)_actualDuration;
- (double)_desiredDuration;
- (BOOL)_shouldSkipFirstPush;
- (void)_loadDefaultValues;
- (void)animateAlongsideToViewController:(id)arg1;
- (void)setNavigationController:(id)arg1;
- (void)setCompletionBlock:(id)arg1;
- (id)completionBlock;
- (void)setViewControllers:(id)arg1;
- (id)viewControllers;
- (id)navigationController;
- (void)animationEnded:(BOOL)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (double)pushDuration;
- (void)dealloc;
- (id)init;

@end
