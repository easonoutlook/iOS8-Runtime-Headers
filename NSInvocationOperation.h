/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSInvocation;

@interface NSInvocationOperation : NSOperation  {
    id _inv;
    id _exception;
    void *_reserved2;
}

@property(retain,readonly) NSInvocation * invocation;
@property(retain,readonly) id result;


- (id)initWithInvocation:(id)arg1;
- (id)invocation;
- (id)result;
- (void)main;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (void)dealloc;
- (id)init;

@end
