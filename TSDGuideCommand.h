/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSDUserDefinedGuide, TSDGuideStorage;

@interface TSDGuideCommand : TSKCommand  {
    TSDGuideStorage *mStorage;
    TSDGuideStorage *mOldStorage;
    TSDUserDefinedGuide *mOldGuide;
    TSDUserDefinedGuide *mNewGuide;
    unsigned int mMode;
}


- (BOOL)process;
- (void)redo;
- (void)undo;
- (void)commit;
- (void)dealloc;
- (id)initWithGuideStorage:(id)arg1 oldStorage:(id)arg2 mode:(unsigned int)arg3 oldGuide:(id)arg4 newGuide:(id)arg5;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;

@end
