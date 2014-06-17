/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class KNRecordingSyncMaintainer, <KNDocumentRootDelegate>, KNSlidePreviewManager, KNShow, KNThumbnailManager;

@interface KNDocumentRoot : TSADocumentRoot <TSKModel, TSCHCommandLifecycleDelegate, TSTResolverContainerNameProvider> {
    KNShow *mShow;
    KNThumbnailManager *mThumbnailManager;
    KNSlidePreviewManager *mSlidePreviewManager;
    KNRecordingSyncMaintainer *mRecordingSyncMaintainer;
    BOOL mIsObservingRecording;
}

@property(retain) KNShow * show;
@property <KNDocumentRootDelegate> * delegate;

+ (Class)commandControllerClass;
+ (void)localizeModelObject:(id)arg1 withTemplateBundle:(id)arg2;

- (id)stylesheet;
- (void)setTheme:(id)arg1;
- (id)theme;
- (id)childEnumerator;
- (unsigned int)applicationType;
- (void)setShow:(id)arg1;
- (id)initWithContext:(id)arg1;
- (id)show;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)updateBuildChunksAndBuildsForChanges:(id)arg1 executingCommandsInSequenceWithBlock:(id)arg2;
- (id)p_buildsNeedingBuildOrChunkUpdateForChanges:(id)arg1;
- (void)preprocessForSaveAsTheme;
- (void)changeShowSizeTo:(struct CGSize { float x1; float x2; })arg1;
- (id)resizeCommandForSlideNode:(id)arg1 fromOldSize:(struct CGSize { float x1; float x2; })arg2 transformedObjects:(id)arg3;
- (id)resolversMatchingPrefix:(id)arg1;
- (id)resolverMatchingName:(id)arg1 contextContainerName:(id)arg2;
- (id)resolverMatchingName:(id)arg1 contextResolver:(id)arg2;
- (id)resolverContainerNamesMatchingPrefix:(id)arg1;
- (id)resolverContainerForName:(id)arg1 caseSensitive:(BOOL)arg2;
- (id)nameForResolverContainer:(id)arg1;
- (id)resolverContainerNameForResolver:(id)arg1;
- (void)setThemeForTemplateImport:(id)arg1;
- (void)withRootSearchTargetAtIndex:(unsigned int)arg1 executeBlock:(id)arg2;
- (unsigned int)rootSearchTargetCountThroughIndex:(unsigned int)arg1;
- (void)setUIState:(id)arg1 forChart:(id)arg2;
- (id)UIStateForChart:(id)arg1;
- (void)didCommitChartCommand:(id)arg1;
- (void)willCommitChartCommand:(id)arg1;
- (void)p_applicationDidBecomeActive:(id)arg1;
- (void)p_applicationWillResignActive:(id)arg1;
- (BOOL)shouldAllowDrawableInGroups:(id)arg1 forImport:(BOOL)arg2;
- (void)prepareForSavingAsTemplate;
- (void)willClose;
- (id)protected_defaultTextPresetOrdering;
- (id)warningLocationDescriptionForAffectedObjects:(id)arg1 sortingInfo:(id*)arg2;
- (id)createViewStateRoot;
- (BOOL)isMultiPageForQuickLook;
- (void)upgradeTextStylesForUnity;
- (void)loadFromArchive:(const struct DocumentArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct DocumentArchive {} *x3; struct Reference {} *x4; struct Reference {} *x5; int x6; unsigned int x7[1]; }*)arg1 unarchiver:(id)arg2;
- (void)documentDidLoad;
- (void)saveToArchive:(struct DocumentArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct DocumentArchive {} *x3; struct Reference {} *x4; struct Reference {} *x5; int x6; unsigned int x7[1]; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;

@end
