/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@class NSURL, NSString, NSArray;

@interface ADAdImpressionPublicAttributes : NSObject <NSSecureCoding> {
    BOOL _actionLeavesApplication;
    BOOL _unbranded;
    BOOL _actionViewControllerHidesStatusBar;
    int _action;
    NSString *_accessibilityLabel;
    unsigned int _actionViewControllerPresentationOrientationMask;
    int _modalPresentationStyle;
    NSArray *_videoAssets;
    NSString *_uniqueIdentifier;
    NSURL *_audioURL;
    NSURL *_staticImageURL;
    NSURL *_logoImageURL;
    NSString *_headlineForLCD;
    NSString *_descriptionForLCD;
    double _skipThreshold;
    double _minimumIntervalBetweenPresentations;
}

@property BOOL actionLeavesApplication;
@property int action;
@property BOOL unbranded;
@property(copy) NSString * accessibilityLabel;
@property double skipThreshold;
@property double minimumIntervalBetweenPresentations;
@property unsigned int actionViewControllerPresentationOrientationMask;
@property BOOL actionViewControllerHidesStatusBar;
@property int modalPresentationStyle;
@property(retain) NSArray * videoAssets;
@property(copy) NSString * uniqueIdentifier;
@property(retain) NSURL * audioURL;
@property(retain) NSURL * staticImageURL;
@property(retain) NSURL * logoImageURL;
@property(copy) NSString * headlineForLCD;
@property(copy) NSString * descriptionForLCD;

+ (BOOL)supportsSecureCoding;

- (id)audioURL;
- (id)headlineForLCD;
- (id)descriptionForLCD;
- (id)staticImageURL;
- (id)videoAssets;
- (void)setDescriptionForLCD:(id)arg1;
- (void)setHeadlineForLCD:(id)arg1;
- (void)setLogoImageURL:(id)arg1;
- (void)setStaticImageURL:(id)arg1;
- (void)setAudioURL:(id)arg1;
- (void)setVideoAssets:(id)arg1;
- (void)setActionViewControllerHidesStatusBar:(BOOL)arg1;
- (void)setActionViewControllerPresentationOrientationMask:(unsigned int)arg1;
- (void)setMinimumIntervalBetweenPresentations:(double)arg1;
- (void)setSkipThreshold:(double)arg1;
- (void)setUnbranded:(BOOL)arg1;
- (void)setActionLeavesApplication:(BOOL)arg1;
- (BOOL)actionViewControllerHidesStatusBar;
- (double)minimumIntervalBetweenPresentations;
- (unsigned int)actionViewControllerPresentationOrientationMask;
- (BOOL)unbranded;
- (id)logoImageURL;
- (double)skipThreshold;
- (BOOL)actionLeavesApplication;
- (void)setUniqueIdentifier:(id)arg1;
- (id)_actionDescription;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setModalPresentationStyle:(int)arg1;
- (void)setAction:(int)arg1;
- (id)accessibilityLabel;
- (int)modalPresentationStyle;
- (int)action;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)uniqueIdentifier;
- (id)description;
- (void)dealloc;

@end
