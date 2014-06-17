/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSDMovieInfo;

@interface TSDMovieSetValueCommand : TSKCommand <TSDPropagatableCommand> {
    TSDMovieInfo *mMovie;
    int mProperty;
    id mValue;
    id mImportedAuxiliaryMediaValue;
}

@property(readonly) TSDMovieInfo * movie;
@property(readonly) int property;
@property(readonly) id value;


- (id)movie;
- (int)property;
- (BOOL)process;
- (id)value;
- (void)redo;
- (void)undo;
- (void)commit;
- (void)dealloc;
- (id)initWithMovie:(id)arg1 property:(int)arg2 boxedValue:(id)arg3;
- (void)p_do;
- (void)populateChangePropagationMapAfterCommit:(id)arg1;
- (BOOL)modifiesAnyObjectPassingTest:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;

@end