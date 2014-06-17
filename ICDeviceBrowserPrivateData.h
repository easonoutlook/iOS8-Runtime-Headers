/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@class NSMutableArray;

@interface ICDeviceBrowserPrivateData : NSObject  {
    id _delegate;
    BOOL _browsing;
    NSMutableArray *_internalDevices;
}

@property id delegate;
@property(getter=isBrowsing) BOOL browsing;
@property(retain) NSMutableArray * internalDevices;


- (id)internalDevices;
- (void)setBrowsing:(BOOL)arg1;
- (void)setInternalDevices:(id)arg1;
- (id)delegate;
- (BOOL)isBrowsing;
- (void)dealloc;
- (void)finalize;
- (void)setDelegate:(id)arg1;

@end