/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSRLEArray : NSObject <NSCopying, NSMutableCopying> {
    struct _NSRefCountedRunArray { void *x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; struct _NSRunArrayItem { unsigned int x_8_1_1; id x_8_1_2; } x8[0]; } *theList;
}


- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned int)count;
- (void)dealloc;
- (void)finalize;
- (id)init;
- (void)_makeNewListFrom:(struct _NSRefCountedRunArray { void *x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; struct _NSRunArrayItem { unsigned int x_8_1_1; id x_8_1_2; } x8[0]; }*)arg1;
- (id)initWithRefCountedRunArray:(struct _NSRefCountedRunArray { void *x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; struct _NSRunArrayItem { unsigned int x_8_1_1; id x_8_1_2; } x8[0]; }*)arg1;
- (id)objectAtRunIndex:(unsigned int)arg1 length:(unsigned int*)arg2;
- (id)objectAtIndex:(unsigned int)arg1 effectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2 runIndex:(unsigned int*)arg3;
- (id)objectAtIndex:(unsigned int)arg1 effectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2;

@end
