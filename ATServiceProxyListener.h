/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
 */

@class NSXPCListener, ATService;

@interface ATServiceProxyListener : NSObject <NSXPCListenerDelegate> {
    NSXPCListener *_listener;
    ATService *_service;
}

@property ATService * service;


- (void)setService:(id)arg1;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (id)service;
- (id)initWithService:(id)arg1;

@end
