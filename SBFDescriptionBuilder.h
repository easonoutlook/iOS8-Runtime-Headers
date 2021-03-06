/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@class NSObject, NSMutableString;

@interface SBFDescriptionBuilder : NSObject  {
    NSObject *_object;
    NSMutableString *_description;
}

+ (id)descriptionForObject:(id)arg1 withNamesAndObjects:(id)arg2;
+ (id)descriptionBuilderWithObject:(id)arg1;
+ (id)nameObjectSeparator;
+ (id)componentSeparator;

- (id)appendNamesAndObjects:(id)arg1;
- (id)appendName:(id)arg1 selector:(SEL)arg2;
- (id)appendName:(id)arg1 pointerValue:(void*)arg2;
- (id)appendName:(id)arg1 cgFloatValue:(float)arg2;
- (id)appendName:(id)arg1 doubleValue:(double)arg2;
- (id)appendName:(id)arg1 intValue:(int)arg2;
- (id)appendName:(id)arg1 unsignedInteger:(unsigned int)arg2;
- (id)appendName:(id)arg1 integerValue:(int)arg2;
- (id)appendName:(id)arg1 boolValue:(BOOL)arg2;
- (id)appendName:(id)arg1 size:(struct CGSize { float x1; float x2; })arg2;
- (id)appendName:(id)arg1 object:(id)arg2;
- (id)appendNamesAndObjects:(id)arg1 args:(void*)arg2;
- (id)build;
- (id)appendKey:(id)arg1;
- (id)appendObject:(id)arg1 withName:(id)arg2;
- (id)appendKeys:(id)arg1;
- (void)tryAppendKey:(id)arg1;
- (id)initWithObject:(id)arg1;
- (void)dealloc;

@end
