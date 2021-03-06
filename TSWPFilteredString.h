/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSWPDeletionRangeMap, NSString, TSWPRangeArray;

@interface TSWPFilteredString : NSString  {
    unsigned int _length;
    NSString *_sourceString;
    TSWPDeletionRangeMap *_rangeMap;
    TSWPRangeArray *_sourceRanges;
}

@property NSString * sourceString;
@property(retain) TSWPDeletionRangeMap * rangeMap;
@property(retain,readonly) TSWPRangeArray * sourceRanges;


- (void)getCharacters:(unsigned short*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (unsigned short)characterAtIndex:(unsigned int)arg1;
- (unsigned int)length;
- (void)dealloc;
- (void)setRangeMap:(id)arg1;
- (void)setSourceString:(id)arg1;
- (unsigned int)charIndexMappedFromStorage:(unsigned int)arg1;
- (unsigned int)charIndexMappedToStorage:(unsigned int)arg1;
- (id)sourceRanges;
- (id)rangeMap;
- (id)sourceString;
- (struct _NSRange { unsigned int x1; unsigned int x2; })charRangeMappedToStorage:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })charRangeMappedFromStorage:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)initWithString:(id)arg1 subrange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 removeRanges:(id)arg3;

@end
