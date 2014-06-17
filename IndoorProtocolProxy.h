/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
 */

@class NSError, <CLIndoorDelegateProtocol>;

@interface IndoorProtocolProxy : NSObject <CLIndoorDelegateProtocolInternal, CLIndoorDelegateProtocol> {
    <CLIndoorDelegateProtocol> *_delegate;
    NSError *_shutdownReason;
}

@property <CLIndoorDelegateProtocol> * delegate;
@property(readonly) NSError * shutdownReason;


- (id)initWithDelegate:(id)arg1;
- (id)shutdownReason;
- (void)indoorAssetDownloadProgress:(float)arg1;
- (void)indoorGivesUpWithLocation:(id)arg1;
- (void)indoorIsUncertainWithLocation:(id)arg1;
- (void)indoorDidUpdateToLocation:(id)arg1 fromLocation:(id)arg2;
- (void)indoorDidShutdown:(id)arg1;
- (void)indoorDidFailWithError:(id)arg1;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg1;

@end
