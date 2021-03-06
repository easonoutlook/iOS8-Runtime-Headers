/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class NSXPCListener, NSMutableArray, NSObject<OS_dispatch_queue>;

@interface FigCameraViewfinderServer : NSObject <NSXPCListenerDelegate, FigCameraViewfinderDelegate, FigCameraViewfinderSessionDelegate> {
    NSXPCListener *_serviceListener;
    NSMutableArray *_connections;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

+ (void)start;

- (id)_remoteViewfinderForLocalViewfinder:(id)arg1;
- (void)cameraViewfinderSession:(id)arg1 previewStreamDidCloseWithStatus:(long)arg2;
- (void)cameraViewfinderSessionPreviewStreamDidOpen:(id)arg1;
- (void)cameraViewfinderSession:(id)arg1 didCapturePhotoWithStatus:(long)arg2 thumbnailData:(id)arg3 timestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4;
- (void)cameraViewfinder:(id)arg1 viewfinderSessionDidBegin:(id)arg2;
- (void)cameraViewfinder:(id)arg1 viewfinderSessionDidEnd:(id)arg2;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)dealloc;
- (id)init;

@end
