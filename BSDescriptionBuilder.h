/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@class NSObject, NSMutableString;

@interface BSDescriptionBuilder : NSObject  {
    NSObject *_object;
    NSMutableString *_description;
}

+ (id)descriptionForObject:(id)arg1;
+ (id)builderWithObject:(id)arg1;
+ (id)nameObjectSeparator;
+ (id)componentSeparator;
+ (id)descriptionForObject:(id)arg1 withObjectsAndNames:(id)arg2;

- (id)build;
- (id)appendKey:(id)arg1;
- (id)appendPoint:(struct CGPoint { float x1; float x2; })arg1 withName:(id)arg2;
- (id)appendFloat:(float)arg1 withName:(id)arg2 decimalPrecision:(unsigned int)arg3;
- (id)appendUnsignedInt:(int)arg1 withName:(id)arg2;
- (id)appendInt:(int)arg1 withName:(id)arg2;
- (id)appendFloat:(float)arg1 withName:(id)arg2;
- (id)appendBool:(BOOL)arg1 withName:(id)arg2;
- (id)appendRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withName:(id)arg2;
- (id)appendObject:(id)arg1 withName:(id)arg2 skipIfNil:(BOOL)arg3;
- (id)appendObject:(id)arg1 withName:(id)arg2;
- (id)appendKeys:(id)arg1;
- (id)appendObjectsAndNames:(id)arg1;
- (id)appendSize:(struct CGSize { float x1; float x2; })arg1 withName:(id)arg2;
- (id)appendQueue:(id)arg1 withName:(id)arg2;
- (id)appendSelector:(SEL)arg1 withName:(id)arg2;
- (id)appendPointer:(void*)arg1 withName:(id)arg2;
- (id)appendUnsignedInteger:(unsigned int)arg1 withName:(id)arg2;
- (id)appendInteger:(int)arg1 withName:(id)arg2;
- (void)tryAppendKey:(id)arg1;
- (id)appendCString:(const char *)arg1 withName:(id)arg2;
- (id)appendObjectsAndNames:(id)arg1 args:(void*)arg2;
- (id)initWithObject:(id)arg1;
- (id)appendString:(id)arg1;
- (void)dealloc;

@end
