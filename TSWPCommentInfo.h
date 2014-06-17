/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class TSKAnnotationAuthor, NSString, NSDate, TSDCommentStorage, <TSKModel>;

@interface TSWPCommentInfo : TSWPShapeInfo <TSDAnnotationHosting> {
    TSDCommentStorage *_commentStorage;
}

@property(readonly) TSDCommentStorage * commentStorage;
@property(readonly) int annotationType;
@property(readonly) int annotationDisplayStringType;
@property(retain) TSKAnnotationAuthor * author;
@property(readonly) NSDate * date;
@property <TSKModel> * model;
@property(readonly) NSString * changeTrackingString;
@property(copy) TSDCommentStorage * storage;

+ (id)commentInfoWithContext:(id)arg1 size:(struct CGSize { float x1; float x2; })arg2 storage:(id)arg3;
+ (void)createCommentInfoStyleInStylesheetIfNeeded:(id)arg1;
+ (id)p_defaultCommentInfoStyleInStylesheet:(id)arg1;
+ (id)p_defaultShadow;
+ (id)p_defaultStroke;
+ (id)p_defaultFill;
+ (id)p_defaultPadding;
+ (id)p_commentParagraphStyleForStylesheet:(id)arg1;
+ (id)commentStyleIdentifier;
+ (id)bezierPathForExportCommentOutline;
+ (void)upgradeCommentInfoStyle:(id)arg1;
+ (void)upgradeCommentInfoStorage:(id)arg1;

- (Class)layoutClass;
- (int)annotationType;
- (id)author;
- (void)setAuthor:(id)arg1;
- (id)storage;
- (id)model;
- (void)setModel:(id)arg1;
- (id)date;
- (id)pathSourceForExportCommentOutline;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 pathSource:(id)arg4 wpStorage:(id)arg5;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 pathSource:(id)arg4 commentStorage:(id)arg5;
- (id)commentStorage;
- (id)creationDateString;
- (int)annotationDisplayStringType;
- (void)commitText:(id)arg1;
- (BOOL)isLockable;
- (BOOL)supportsAttachedComments;
- (BOOL)wantsAnnotationPopover;
- (BOOL)supportsHyperlinks;
- (id)searchForAnnotationsWithHitBlock:(id)arg1;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (Class)editorClass;
- (Class)repClass;
- (void)loadFromArchive:(const struct CommentInfoArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct ShapeInfoArchive {} *x3; struct Reference {} *x4; int x5; unsigned int x6[1]; }*)arg1 unarchiver:(id)arg2;
- (void)saveToArchive:(struct CommentInfoArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct ShapeInfoArchive {} *x3; struct Reference {} *x4; int x5; unsigned int x6[1]; }*)arg1 archiver:(id)arg2;
- (id)copyWithContext:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;

@end
