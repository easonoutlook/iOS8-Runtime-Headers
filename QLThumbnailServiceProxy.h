/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class NSObject<QLThumbnailsInterface>, NSXPCConnection;

@interface QLThumbnailServiceProxy : NSObject  {
    NSXPCConnection *_connection;
    NSObject<QLThumbnailsInterface> *_proxy;
}

+ (id)sharedInstance;

- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)askThumbnailAdditionIndex:(id)arg1;
- (void)dealloc;
- (id)init;

@end
