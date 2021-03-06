/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class KNRecording, KNSoundtrack, KNSlideTree, KNTheme, KNUIState, TSSStylesheet;

@interface KNShow : TSPObject  {
    KNUIState *mUIState;
    KNTheme *mTheme;
    KNSlideTree *mSlideTree;
    TSSStylesheet *mStylesheet;
    KNRecording *mRecording;
    struct CGSize { 
        float width; 
        float height; 
    } mSize;
    double mAutoplayTransitionDelay;
    double mAutoplayBuildDelay;
    double mIdleTimerDelay;
    int mMode;
    BOOL mLoopPresentation;
    BOOL mIdleTimerActive;
    BOOL mAutomaticallyPlaysUponOpen;
    BOOL mNeedsToUpdateThumbnails;
    BOOL mWasImportedAsPreUFF;
    KNSoundtrack *mSoundtrack;
}

@property struct CGSize { float x1; float x2; } size;
@property(retain) KNUIState * uiState;
@property(retain) KNTheme * theme;
@property(retain) KNSlideTree * slideTree;
@property(readonly) TSSStylesheet * stylesheet;
@property double autoplayTransitionDelay;
@property double autoplayBuildDelay;
@property double idleTimerDelay;
@property int mode;
@property(retain) KNSoundtrack * soundtrack;
@property(retain) KNRecording * recording;
@property BOOL loopPresentation;
@property BOOL idleTimerActive;
@property BOOL automaticallyPlaysUponOpen;
@property(readonly) BOOL slideNumbersVisible;
@property(readonly) BOOL needsToUpdateThumbnails;
@property(readonly) BOOL wasImportedAsPreUFF;

+ (id)showWithSize:(struct CGSize { float x1; float x2; })arg1 context:(id)arg2;

- (id)stylesheet;
- (void)setTheme:(id)arg1;
- (id)theme;
- (id)recording;
- (int)mode;
- (void)setMode:(int)arg1;
- (struct CGPoint { float x1; float x2; })center;
- (void)setSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })size;
- (void)dealloc;
- (void)setRecording:(id)arg1;
- (BOOL)wasImportedAsPreUFF;
- (BOOL)needsToUpdateThumbnails;
- (void)setUiState:(id)arg1;
- (id)slideNodeAtIndex:(unsigned int)arg1;
- (BOOL)slideNumbersVisible;
- (void)setSoundtrack:(id)arg1;
- (id)soundtrack;
- (void)setAutomaticallyPlaysUponOpen:(BOOL)arg1;
- (BOOL)automaticallyPlaysUponOpen;
- (void)setIdleTimerActive:(BOOL)arg1;
- (BOOL)idleTimerActive;
- (void)setLoopPresentation:(BOOL)arg1;
- (BOOL)loopPresentation;
- (void)setIdleTimerDelay:(double)arg1;
- (double)idleTimerDelay;
- (void)setAutoplayBuildDelay:(double)arg1;
- (double)autoplayBuildDelay;
- (void)setAutoplayTransitionDelay:(double)arg1;
- (double)autoplayTransitionDelay;
- (void)setSlideTree:(id)arg1;
- (unsigned int)indexOfSlideNode:(id)arg1;
- (id)initWithSize:(struct CGSize { float x1; float x2; })arg1 context:(id)arg2;
- (id)uiState;
- (id)slideTree;
- (void)loadFromArchive:(const struct ShowArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Reference {} *x3; struct Reference {} *x4; struct SlideTreeArchive {} *x5; struct Size {} *x6; struct Reference {} *x7; struct Reference {} *x8; double x9; int x10; boolx11; boolx12; boolx13; boolx14; double x15; double x16; struct Reference {} *x17; int x18; unsigned int x19[1]; }*)arg1 unarchiver:(id)arg2;
- (void)saveToArchive:(struct ShowArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Reference {} *x3; struct Reference {} *x4; struct SlideTreeArchive {} *x5; struct Size {} *x6; struct Reference {} *x7; struct Reference {} *x8; double x9; int x10; boolx11; boolx12; boolx13; boolx14; double x15; double x16; struct Reference {} *x17; int x18; unsigned int x19[1]; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)willModify;
- (id)initFromUnarchiver:(id)arg1;

@end
