/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPRangeArray : NSObject <NSCopying> {
    void *_rangeVectorOpaque;
}

@property(readonly) unsigned int rangeCount;
@property(readonly) BOOL isEmpty;
@property(readonly) unsigned int start;
@property(readonly) unsigned int finish;


- (unsigned int)rangeCount;
- (void)enumerateRangesUsingBlock:(id)arg1;
- (void)addRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })rangeAtIndex:(unsigned int)arg1;
- (unsigned int)finish;
- (BOOL)isEmpty;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)start;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)initWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)removeRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; }*)rangeReferenceAtIndex:(unsigned int)arg1;
- (id)initWithRangeVector:(const void*)arg1;
- (void)enumerateRangesInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 usingBlock:(id)arg2;

@end
