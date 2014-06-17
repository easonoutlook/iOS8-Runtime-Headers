/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@class NSPointerArray, NSString, NSArray, <MTLDevice>;

@interface MTLToolsLibrary : MTLToolsObject <MTLLibrarySPI> {
    NSPointerArray *_functions;
}

@property(readonly) NSPointerArray * functions;
@property(copy) NSString * label;
@property(readonly) <MTLDevice> * device;
@property(readonly) NSArray * functionNames;


- (id)device;
- (void).cxx_destruct;
- (void)setLabel:(id)arg1;
- (id)label;
- (id)functionNames;
- (id)functions;
- (id)newFunctionWithName:(id)arg1;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;
- (void)acceptVisitor:(id)arg1;

@end
