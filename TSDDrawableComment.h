/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class <TSKModel>, TSKAnnotationAuthor, NSString, NSDate, TSDCommentStorage, TSDDrawableInfo;

@interface TSDDrawableComment : NSObject <TSDAnnotationHosting> {
    TSDDrawableInfo *mParent;
    TSDCommentStorage *mStorage;
}

@property TSDDrawableInfo * parent;
@property(readonly) int annotationType;
@property(readonly) int annotationDisplayStringType;
@property(retain) TSKAnnotationAuthor * author;
@property(readonly) NSDate * date;
@property <TSKModel> * model;
@property(readonly) NSString * changeTrackingString;
@property(copy) TSDCommentStorage * storage;


- (id)parent;
- (void)setParent:(id)arg1;
- (int)annotationType;
- (id)author;
- (void)setAuthor:(id)arg1;
- (id)storage;
- (id)model;
- (void)setModel:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (int)annotationDisplayStringType;
- (id)commandForDeletingComment;
- (void)commitText:(id)arg1;
- (id)initWithParent:(id)arg1 storage:(id)arg2;
- (Class)editorClass;
- (void)setStorage:(id)arg1;

@end
