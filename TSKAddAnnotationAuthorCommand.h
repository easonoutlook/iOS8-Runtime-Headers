/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSKAnnotationAuthor, TSKDocumentRoot;

@interface TSKAddAnnotationAuthorCommand : TSKCommand  {
    TSKAnnotationAuthor *mAnnotationAuthor;
    TSKDocumentRoot *mDocumentRoot;
}


- (BOOL)process;
- (void)redo;
- (void)undo;
- (void)commit;
- (void)dealloc;
- (id)initWithDocumentRoot:(id)arg1 annotationAuthor:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;

@end
