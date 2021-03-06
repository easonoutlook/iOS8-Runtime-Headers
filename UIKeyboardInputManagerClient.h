/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSXPCConnection;

@interface UIKeyboardInputManagerClient : NSObject  {
    NSXPCConnection *_connection;
}

@property(retain) NSXPCConnection * connection;

+ (BOOL)instancesRespondToSelector:(SEL)arg1;

- (void)handleError:(id)arg1 forRequest:(id)arg2;
- (void)handleRequest:(id)arg1;
- (void)setConnection:(id)arg1;
- (id)connection;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)conformsToProtocol:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (BOOL)isKindOfClass:(Class)arg1;
- (void)dealloc;
- (id)init;

@end
