/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@class <ICDeviceBrowserDelegate>, NSArray;

@interface ICDeviceBrowser : NSObject  {
    id _privateData;
}

@property <ICDeviceBrowserDelegate> * delegate;
@property(getter=isBrowsing,readonly) BOOL browsing;
@property(readonly) NSArray * devices;


- (id)internalDevices;
- (id)delegate;
- (BOOL)isBrowsing;
- (int)start;
- (void)stop;
- (void)dealloc;
- (void)finalize;
- (void)setDelegate:(id)arg1;
- (id)init;
- (id)devices;

@end