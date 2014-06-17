/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface VideoConferenceDefaults : NSObject  {
    int _forceCaptureWidth;
    int _forceCaptureHeight;
    int _forceEncodeWidth;
    int _forceEncodeHeight;
    int _forceFramerate;
    int _forceBitrate;
    int _forceVideoPayload;
    int _forceRecvVideoPayload;
}

@property(readonly) BOOL forceHWI;
@property(readonly) int forceCaptureWidth;
@property(readonly) int forceCaptureHeight;
@property(readonly) int forceEncodeWidth;
@property(readonly) int forceEncodeHeight;
@property(readonly) int forceFramerate;
@property(readonly) int forceBitrate;
@property(readonly) int forceVideoPayload;
@property(readonly) int forceRecvVideoPayload;
@property(readonly) BOOL enableBitstreamCapture;
@property(readonly) BOOL enable2vuyCapture;
@property(readonly) BOOL enableVPBLogging;
@property(readonly) BOOL enableTxSourceYuvDump;
@property(readonly) BOOL enableTxBitstreamDump;
@property(readonly) BOOL enableRecvBitstreamDump;
@property(readonly) BOOL disableVAD;
@property(readonly) int bundleAudio;
@property(readonly) int max2GRate;
@property(readonly) BOOL forceIPv6;

+ (id)VideoConferenceDefaultsSingleton;

- (int)bundleAudio;
- (BOOL)enableTxBitstreamDump;
- (BOOL)enableTxSourceYuvDump;
- (BOOL)enableRecvBitstreamDump;
- (BOOL)enableVPBLogging;
- (BOOL)enable2vuyCapture;
- (BOOL)enableBitstreamCapture;
- (BOOL)disableVAD;
- (int)max2GRate;
- (int)forceEncodeHeight;
- (int)forceEncodeWidth;
- (int)forceFramerate;
- (int)forceCaptureHeight;
- (int)forceCaptureWidth;
- (int)forceBitrate;
- (int)forceRecvVideoPayload;
- (int)forceVideoPayload;
- (BOOL)forceHWI;
- (BOOL)forceIPv6;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)allocWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)retainCount;
- (id)autorelease;
- (id)retain;
- (oneway void)release;
- (id)init;

@end
