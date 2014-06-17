/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class PKPassColorProfile, <WLCardViewDelegate>, PKPassFrontFaceView, PKPassBackFaceView, NSString, PKPass, PKPassFaceView;

@interface PKPassView : UIView <PKPassFaceDelegate> {
    PKPassFrontFaceView *_frontFace;
    PKPassBackFaceView *_backFace;
    PKPassFaceView *_visibleFace;
    PKPassFaceView *_otherFace;
    PKPassColorProfile *_colorProfile;
    <WLCardViewDelegate> *_delegate;
    BOOL _backFaceIsTall;
    BOOL _isFrontmostPassView;
    PKPass *_pass;
    int _contentMode;
    unsigned int _suppressedContent;
}

@property(retain,readonly) PKPass * pass;
@property(readonly) NSString * uniqueID;
@property <WLCardViewDelegate> * delegate;
@property int contentMode;
@property(readonly) BOOL showingFront;
@property unsigned int suppressedContent;
@property BOOL backFaceIsTall;
@property BOOL isFrontmostPassView;
@property(readonly) BOOL frontFaceBodyContentCreated;


- (id)uniqueID;
- (id)pass;
- (id)initWithPass:(id)arg1;
- (void)setSuppressedContent:(unsigned int)arg1;
- (id)initWithPass:(id)arg1 content:(int)arg2;
- (id)snapshotOfFrontFace;
- (id)item;
- (int)contentMode;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)setContentMode:(int)arg1;
- (id)delegate;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (BOOL)isFrontmostPassView;
- (unsigned int)suppressedContent;
- (void)flipPass:(BOOL)arg1 fromLeft:(BOOL)arg2 notify:(BOOL)arg3;
- (void)updateValidityDisplay;
- (void)setIsFrontmostPassView:(BOOL)arg1;
- (BOOL)frontFaceBodyContentCreated;
- (BOOL)showingFront;
- (void)setBackFaceIsTall:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameOfVisibleFace;
- (struct CGSize { float x1; float x2; })sizeOfFrontFace;
- (struct CGSize { float x1; float x2; })sizeOfBackFace;
- (BOOL)passFaceDeleteButtonEnabled;
- (void)createBackFaceIfNecessary;
- (BOOL)_visibleFaceShouldClipForCurrentViewMode:(float*)arg1;
- (unsigned int)_regionsForCurrentModes;
- (int)_frontFaceBackgroundModeForContentMode;
- (void)_flipPass:(BOOL)arg1 fromLeft:(BOOL)arg2 notify:(BOOL)arg3;
- (void)_applyContentMode;
- (void)_updateBackFaceSuppressedContent;
- (BOOL)backFaceIsTall;
- (void)_updateFrontFaceSuppressedContent;
- (void)setContentMode:(int)arg1 withDuration:(double)arg2;
- (void)passFaceDeleteButtonPressed:(id)arg1;
- (void)registerForEnterBackgroundNotification;
- (void)unregisterForEnterBackgroundNotification;
- (void)passFaceShareButtonPressed:(id)arg1;
- (void)passFaceFlipButtonPressed:(id)arg1;
- (void)prepareForFlip;
- (void)presentDiff:(id)arg1 completion:(id)arg2;
- (void)setDimmer:(float)arg1 animated:(BOOL)arg2;
- (void)dealloc;
- (void)setDelegate:(id)arg1;

@end