/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@class NSString, SFCompanionService, <SFCompanionAdvertiserDelegate>, NSData;

@interface SFCompanionAdvertiser : NSObject  {
    BOOL _supportsStreams;
    <SFCompanionAdvertiserDelegate> *_delegate;
    NSString *_serviceType;
}

@property <SFCompanionAdvertiserDelegate> * delegate;
@property BOOL supportsStreams;
@property(copy,readonly) NSString * serviceType;
@property(readonly) SFCompanionService * serviceEndpoint;
@property(readonly) NSData * serviceEndpointData;


- (BOOL)supportsStreams;
- (id)serviceEndpoint;
- (id)serviceType;
- (id)delegate;
- (void)getContinuationStreamsWithEndpointData:(id)arg1 completionHandler:(id)arg2;
- (id)serviceEndpointData;
- (void)setSupportsStreams:(BOOL)arg1;
- (id)initWithServiceType:(id)arg1;
- (void)start;
- (void)stop;
- (void)dealloc;
- (void)setDelegate:(id)arg1;

@end