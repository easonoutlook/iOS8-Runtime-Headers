/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDCapabilities : NSObject  {
    int _platform;
    int _deviceType;
    int _device;
    int _renderer;
}

@property(readonly) int platform;
@property(readonly) int deviceType;
@property(readonly) int device;
@property(readonly) int renderer;
@property(readonly) BOOL isRendererH3OrBelow;
@property(readonly) BOOL isRendererH4OrBelow;
@property(readonly) BOOL isRendererH5OrBelow;
@property(readonly) BOOL hasLightningPort;
@property(readonly) struct CGSize { float x1; float x2; } maximumTextureSize;

+ (id)currentCapabilities;

- (int)deviceType;
- (int)renderer;
- (int)device;
- (int)platform;
- (id)init;
- (BOOL)hasLightningPort;
- (BOOL)isRendererH5OrBelow;
- (BOOL)isRendererH3OrBelow;
- (void)p_setupDevice;
- (void)p_setupPlatform;
- (struct CGSize { float x1; float x2; })maximumTextureSize;
- (BOOL)isRendererH4OrBelow;

@end
