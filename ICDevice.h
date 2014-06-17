/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@class DeviceManager, <ICDeviceDelegate>, NSString;

@interface ICDevice : NSObject  {
    void *_deviceProperties;
}

@property <ICDeviceDelegate> * delegate;
@property(copy) NSString * name;
@property(copy) NSString * productKind;
@property(readonly) struct CGImage { }* icon;
@property(copy) NSString * transportType;
@property(copy) NSString * UUIDString;
@property BOOL hasOpenSession;
@property int usbLocationID;
@property int usbProductID;
@property int usbVendorID;
@property DeviceManager * deviceManager;
@property BOOL autoOpenSession;
@property BOOL openSessionPending;
@property BOOL closeSessionPending;


- (id)transportType;
- (void)requestOpenSession;
- (id)productKind;
- (int)usbVendorID;
- (void)handleImageCaptureEventNotification:(id)arg1;
- (void)handleCommandCompletionNotification:(id)arg1;
- (void)requestCloseSession;
- (void)setCloseSessionPending:(BOOL)arg1;
- (BOOL)closeSessionPending;
- (void)setOpenSessionPending:(BOOL)arg1;
- (BOOL)openSessionPending;
- (void)setAutoOpenSession:(BOOL)arg1;
- (BOOL)autoOpenSession;
- (void)setHasOpenSession:(BOOL)arg1;
- (BOOL)hasOpenSession;
- (void)setUsbVendorID:(int)arg1;
- (void)setUsbProductID:(int)arg1;
- (int)usbProductID;
- (void)setUsbLocationID:(int)arg1;
- (int)usbLocationID;
- (void)setDeviceManager:(id)arg1;
- (id)deviceManager;
- (void)setUUIDString:(id)arg1;
- (void)setProductKind:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (id)UUIDString;
- (id)delegate;
- (id)name;
- (void)setName:(id)arg1;
- (id)description;
- (void)dealloc;
- (void)finalize;
- (void)setDelegate:(id)arg1;
- (id)init;
- (void)setTransportType:(id)arg1;
- (struct CGImage { }*)icon;
- (BOOL)isCameraDevice;

@end
