/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMVideoCaptureRequest : CAMCaptureRequest <NSCopying, NSMutableCopying> {
    int _deviceOrientation;
    int _captureDevice;
    int _torchMode;
}

@property(readonly) int deviceOrientation;
@property(readonly) int captureDevice;
@property(readonly) int torchMode;


- (int)captureDevice;
- (int)deviceOrientation;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (int)torchMode;

@end
