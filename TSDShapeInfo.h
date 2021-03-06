/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class TSDPathSource, TSDShapeStyle, TSDFill, TSDLineEnd;

@interface TSDShapeInfo : TSDStyledInfo <TSSThemedObject, TSDMixing, TSDReducableInfo, TSKSearchable> {
    TSDPathSource *mPathSource;
    TSDShapeStyle *mStyle;
    TSDLineEnd *mHeadLineEnd;
    TSDLineEnd *mTailLineEnd;
}

@property(retain) TSDPathSource * pathSource;
@property(readonly) TSDShapeStyle * shapeStyle;
@property(copy) TSDFill * fill;
@property(retain) TSDLineEnd * headLineEnd;
@property(retain) TSDLineEnd * tailLineEnd;
@property(readonly) BOOL supportsTextInset;
@property(readonly) BOOL supportsShrinkTextToFit;


- (Class)layoutClass;
- (int)elementKind;
- (id)shapeStyle;
- (void)setFill:(id)arg1;
- (void)setGeometry:(id)arg1;
- (void)setStyle:(id)arg1;
- (id)style;
- (id)fill;
- (void)dealloc;
- (void)p_correctNearZeroWidthLines;
- (void)p_correctLineSegmentGeometry;
- (id)commandForSettingBoxedValue:(id)arg1 forProperty:(int)arg2;
- (BOOL)supportsShrinkTextToFit;
- (BOOL)supportsTextInset;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3;
- (void)setTailLineEnd:(id)arg1;
- (void)setHeadLineEnd:(id)arg1;
- (id)pathSource;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 pathSource:(id)arg4;
- (void)setPathSource:(id)arg1;
- (id)tailLineEnd;
- (id)headLineEnd;
- (id)commandToFlipWithOrientation:(int)arg1;
- (id)subclassInitFromUnarchiver:(id)arg1;
- (id)mixedObjectWithFraction:(float)arg1 ofObject:(id)arg2;
- (int)mixingTypeWithObject:(id)arg1;
- (id)commandToReplaceImageData:(id)arg1 withReducedImageData:(id)arg2 associatedHint:(id)arg3;
- (struct CGSize { float x1; float x2; })targetSizeForImageData:(id)arg1 associatedHint:(id)arg2;
- (id)imageDatasForReducingFileSizeWithAssociatedHints;
- (void)setValuesForProperties:(id)arg1;
- (id)childCommandForApplyThemeCommand:(id)arg1;
- (Class)editorClass;
- (id)initWithContext:(id)arg1 geometry:(id)arg2;
- (id)animationFilters;
- (Class)repClass;
- (Class)styleClass;
- (id)objectForProperty:(int)arg1;
- (void)loadFromArchive:(const struct ShapeArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct DrawableArchive {} *x3; struct Reference {} *x4; struct PathSourceArchive {} *x5; struct LineEndArchive {} *x6; struct LineEndArchive {} *x7; int x8; unsigned int x9[1]; }*)arg1 unarchiver:(id)arg2;
- (void)saveToArchive:(struct ShapeArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct DrawableArchive {} *x3; struct Reference {} *x4; struct PathSourceArchive {} *x5; struct LineEndArchive {} *x6; struct LineEndArchive {} *x7; int x8; unsigned int x9[1]; }*)arg1 archiver:(id)arg2;
- (id)copyWithContext:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;

@end
