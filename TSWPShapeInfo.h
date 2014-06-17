/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class TSDInfoGeometry, TSWPStorage, TSWPPadding, TSWPColumns, TSWPShapeStyle, NSObject<TSDContainerInfo>, NSString, TSPObject<TSDOwningAttachment>;

@interface TSWPShapeInfo : TSDShapeInfo <TSDMixing, TSDContainerInfo, TSWPStorageParent, TSDSelectionStatisticsContributor> {
    TSWPStorage *_containedStorage;
}

@property(retain) TSWPStorage * containedStorage;
@property(readonly) BOOL displaysInstructionalText;
@property(readonly) NSString * instructionalText;
@property(readonly) BOOL isTextBox;
@property BOOL shrinkTextToFit;
@property BOOL textIsVertical;
@property int verticalAlignment;
@property(readonly) int columnDirection;
@property int contentWritingDirection;
@property(retain) TSWPPadding * padding;
@property(retain) TSWPColumns * columns;
@property(readonly) TSWPShapeStyle * tswpShapeStyle;
@property BOOL matchesObjectPlaceholderGeometry;
@property(copy) TSDInfoGeometry * geometry;
@property NSObject<TSDContainerInfo> * parentInfo;
@property TSPObject<TSDOwningAttachment> * owningAttachment;
@property(readonly) TSPObject<TSDOwningAttachment> * owningAttachmentNoRecurse;
@property(getter=isFloatingAboveText,readonly) BOOL floatingAboveText;
@property(getter=isAnchoredToText,readonly) BOOL anchoredToText;
@property(getter=isInlineWithText,readonly) BOOL inlineWithText;
@property(getter=isAttachedToBodyText,readonly) BOOL attachedToBodyText;

+ (void)setDefaultInstructionalText:(id)arg1;

- (void)setVerticalAlignment:(int)arg1;
- (Class)layoutClass;
- (void)setColumns:(id)arg1;
- (int)verticalAlignment;
- (BOOL)isTextBox;
- (id)childEnumerator;
- (id)columns;
- (id)padding;
- (void)setPadding:(id)arg1;
- (void)acceptVisitor:(id)arg1;
- (void)dealloc;
- (id)containedTextForDeliveryStyle:(unsigned int)arg1 chunkIndex:(unsigned int)arg2;
- (id)defaultBuildChunkTitle;
- (id)containedText;
- (id)containedTextForRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (BOOL)isBulleted;
- (id)p_chunkTitleByRemovingAdditionalLinesFromTitle:(id)arg1;
- (BOOL)p_hasListLabelOrContentForParagraphIndex:(unsigned int)arg1;
- (void)fixPositionOfImportedAutosizedShape;
- (id)instructionalText;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 wpStorage:(id)arg4;
- (int)columnDirection;
- (void)setShrinkTextToFit:(BOOL)arg1;
- (unsigned int)p_chunkCountForByBullet;
- (unsigned int)p_chunkCountForByBulletGroup;
- (BOOL)p_hasContentForRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (struct CGPoint { float x1; float x2; })autosizePositionOffset;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })autosizedTransformForInfoGeometry:(id)arg1 size:(struct CGSize { float x1; float x2; })arg2;
- (struct CGPoint { float x1; float x2; })autosizePositionOffsetForGeometry:(id)arg1 size:(struct CGSize { float x1; float x2; })arg2;
- (float)pOffsetForParagraphAlignment:(struct CGSize { float x1; float x2; })arg1;
- (float)pOffsetForVerticalAlignment:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)displaysInstructionalText;
- (void)setContainedStorage:(id)arg1;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 pathSource:(id)arg4 wpStorage:(id)arg5;
- (void)setTextIsVertical:(BOOL)arg1;
- (BOOL)shouldHideEmptyBullets;
- (BOOL)shrinkTextToFit;
- (int)contentWritingDirection;
- (BOOL)textIsVertical;
- (BOOL)autoListTermination;
- (BOOL)autoListRecognition;
- (id)propertyMapForNewPreset;
- (id)commandForPasteStyleWithContext:(id)arg1 pasteboardStyles:(id)arg2;
- (id)stylesForCopyStyle;
- (void)processSelectedStoragesWithStatisticsController:(id)arg1;
- (id)styleIdentifierTemplateForNewPreset;
- (BOOL)supportsShrinkTextToFit;
- (BOOL)supportsTextInset;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 pathSource:(id)arg4;
- (struct CGPoint { float x1; float x2; })transformableObjectAnchorPoint;
- (unsigned int)chunkCountForTextureDeliveryStyle:(unsigned int)arg1 byGlyphStyle:(int)arg2 animationFilter:(id)arg3;
- (id)localizedChunkNameForTextureDeliveryStyle:(unsigned int)arg1 animationFilter:(id)arg2 chunkIndex:(unsigned int)arg3;
- (id)mixedObjectWithFraction:(float)arg1 ofObject:(id)arg2;
- (int)mixingTypeWithObject:(id)arg1;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (id)textureDeliveryStylesLocalized:(BOOL)arg1 animationFilter:(id)arg2;
- (id)commandForTransformingByTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1 context:(id)arg2 transformedObjects:(id)arg3 inBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4;
- (id)childInfos;
- (Class)editorClass;
- (id)initWithContext:(id)arg1 geometry:(id)arg2;
- (Class)repClass;
- (Class)styleClass;
- (void)setContentWritingDirection:(int)arg1;
- (id)tswpShapeStyle;
- (id)containedStorage;
- (id)presetKind;
- (void)loadFromArchive:(const struct ShapeInfoArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct ShapeArchive {} *x3; struct Reference {} *x4; int x5; unsigned int x6[1]; }*)arg1 unarchiver:(id)arg2;
- (void)saveToArchive:(struct ShapeInfoArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct ShapeArchive {} *x3; struct Reference {} *x4; int x5; unsigned int x6[1]; }*)arg1 archiver:(id)arg2;
- (id)copyWithContext:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;

@end
