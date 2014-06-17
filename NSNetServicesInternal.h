/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@class NSMutableArray, NSObject<OS_tcp_listener>;

@interface NSNetServicesInternal : NSObject  {
    NSMutableArray *_monitors;
    NSObject<OS_tcp_listener> *_listener;
    struct __CFRunLoop { } *_scheduledRunLoop;
    struct __CFString { } *_scheduledMode;
}

@property(retain) NSMutableArray * monitors;


- (void)setListener:(id)arg1;
- (id)listener;
- (void)dealloc;
- (void)finalize;
- (void)setMonitors:(id)arg1;
- (id)monitors;
- (void)setScheduledRunLoop:(struct __CFRunLoop { }*)arg1 andMode:(struct __CFString { }*)arg2;
- (void)copyScheduledRunLoop:(struct __CFRunLoop {}**)arg1 andMode:(const struct __CFString {}**)arg2;

@end
