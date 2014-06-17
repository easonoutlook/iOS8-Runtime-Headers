/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@class _WebSafeAsyncForwarder;

@interface _WebSafeForwarder : NSObject  {
    id target;
    id defaultTarget;
    _WebSafeAsyncForwarder *asyncForwarder;
    long asyncForwarderPred;
}


- (id)initWithTarget:(id)arg1 defaultTarget:(id)arg2;
- (void)clearTarget;
- (id)asyncForwarder;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)dealloc;

@end