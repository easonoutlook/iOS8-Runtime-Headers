/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSPObjectContext, NSCharacterSet;

@interface TPHeaderFragmentImportHelper : NSObject  {
    id *_fragments;
    TSPObjectContext *_storageContext;
    TSPObjectContext *_objectsContext;
    NSCharacterSet *_whitespaceCharacterSet;
    NSCharacterSet *_nonWhitespaceCharacterSet;
}


- (void)dealloc;
- (void)p_splitStorageInTwo:(int)arg1 withRanges:(struct _NSRange { unsigned int x1; unsigned int x2; }[2])arg2 firstTarget:(int)arg3 secondTarget:(int)arg4;
- (void)p_splitStorageInThree:(int)arg1 withRanges:(struct _NSRange { unsigned int x1; unsigned int x2; }[2])arg2;
- (unsigned int)countOfWhitespaceRunsInString:(id)arg1 ranges:(struct _NSRange { unsigned int x1; unsigned int x2; }[2])arg2;
- (BOOL)p_storageIsEffectivelyEmpty:(id)arg1;
- (void)processFragmentsForSpaceFormatting;
- (id)initWithFragments:(id*)arg1 storageContext:(id)arg2 objectsContext:(id)arg3;

@end
