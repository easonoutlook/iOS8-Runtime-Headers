/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSSet, TSDDrawableInfo<TSDContainerInfo>;

@interface TPCanvasSelection : TSWPSelection <TSDCanvasSelection, NSCopying> {
    NSSet *mInfos;
    NSSet *mExcludedInfos;
    NSSet *mAdditionalInfos;
    TSDDrawableInfo<TSDContainerInfo> *mContainer;
}

@property(readonly) int canvasSelectionKind;
@property(readonly) NSSet * rawInfos;
@property(readonly) NSSet * infos;
@property(readonly) unsigned int infoCount;
@property(readonly) BOOL isEmpty;
@property(readonly) TSDDrawableInfo<TSDContainerInfo> * container;
@property(readonly) NSSet * unlockedInfos;
@property(readonly) unsigned int unlockedInfoCount;

+ (id)canvasSelectionFromCanvasSelection:(id)arg1 withToggledInfo:(id)arg2;
+ (id)canvasSelectionFromSelection:(id)arg1;
+ (id)selectionWithInfos:(id)arg1;
+ (id)emptySelection;
+ (Class)archivedSelectionClass;

- (id)container;
- (BOOL)isEmpty;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (void)p_commonCopyTo:(id)arg1;
- (int)canvasSelectionKind;
- (id)initWithType:(int)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 styleInsertionBehavior:(int)arg3 caretAffinity:(int)arg4 smartFieldRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg5 leadingEdge:(BOOL)arg6 leadingCharIndex:(unsigned int)arg7 infos:(id)arg8 excludedInfos:(id)arg9 additionalInfos:(id)arg10 container:(id)arg11;
- (id)rawInfos;
- (id)copyWithVisualRanges:(const struct TSWPRangeVector { struct _NSRange {} *x1; struct _NSRange {} *x2; struct __compressed_pair<_NSRange *, std::__1::allocator<_NSRange> > { struct _NSRange {} *x_3_1_1; } x3; }*)arg1 startChar:(unsigned int)arg2 endChar:(unsigned int)arg3 rightToLeft:(BOOL)arg4 sameLine:(BOOL)arg5;
- (id)copyWithNewType:(int)arg1;
- (id)copyWithNewVisualTypeRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 head:(unsigned int)arg2 tail:(unsigned int)arg3;
- (id)copyWithNewType:(int)arg1 smartFieldRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)copyWithNewType:(int)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)copyWithNewVisualRanges:(const struct TSWPRangeVector { struct _NSRange {} *x1; struct _NSRange {} *x2; struct __compressed_pair<_NSRange *, std::__1::allocator<_NSRange> > { struct _NSRange {} *x_3_1_1; } x3; }*)arg1;
- (id)copyWithNewRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)initWithInfos:(id)arg1;
- (id)initWithInfos:(id)arg1 andContainer:(id)arg2;
- (unsigned int)unlockedInfoCount;
- (id)unlockedInfos;
- (id)copyExcludingInfo:(id)arg1;
- (id)copyIncludingInfo:(id)arg1;
- (id)infosOfClass:(Class)arg1;
- (BOOL)containsUnlockedKindOfClass:(Class)arg1;
- (BOOL)containsKindOfClass:(Class)arg1;
- (id)infos;
- (unsigned int)infoCount;
- (id)initWithArchive:(const struct CanvasSelectionArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Range {} *x3; int x4; int x5; struct RepeatedPtrField<TSP::Reference> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; struct RepeatedPtrField<TSP::Reference> { void **x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; } x7; struct RepeatedPtrField<TSP::Reference> { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; struct Reference {} *x9; int x10; int x11; unsigned int x12[1]; }*)arg1 unarchiver:(id)arg2;
- (void)saveToArchive:(struct CanvasSelectionArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Range {} *x3; int x4; int x5; struct RepeatedPtrField<TSP::Reference> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; struct RepeatedPtrField<TSP::Reference> { void **x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; } x7; struct RepeatedPtrField<TSP::Reference> { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; struct Reference {} *x9; int x10; int x11; unsigned int x12[1]; }*)arg1 archiver:(id)arg2;

@end