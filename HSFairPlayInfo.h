/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@class NSString, NSObject<OS_dispatch_queue>;

@interface HSFairPlayInfo : NSObject  {
    NSObject<OS_dispatch_queue> *_sapQueue;
    void *_hwInfo;
    void *_session;
}

@property(readonly) NSString * deviceGUID;


- (id)continueNegotationWithSAPVersion:(unsigned int)arg1 data:(id)arg2 isComplete:(BOOL*)arg3;
- (id)beginNegotiationWithSAPVersion:(unsigned int)arg1;
- (id)_hexStringForData:(id)arg1;
- (void)endSecuritySession;
- (BOOL)_getHardwareInfo:(struct FairPlayHWInfo_ { unsigned int x1; unsigned char x2[20]; }*)arg1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)securityInfoForURL:(id)arg1;
- (id)deviceGUID;

@end
