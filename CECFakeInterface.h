/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@class NSMutableDictionary;

@interface CECFakeInterface : CECInterface  {
    NSMutableDictionary *_properties;
}

+ (id)defaultPlaybackDeviceProperties;
+ (id)defaultTVProperties;

- (void)fakeTerminated;
- (void)fakePropertiesChanged:(id)arg1;
- (BOOL)pingTo:(unsigned char)arg1 acknowledged:(BOOL*)arg2 error:(id*)arg3;
- (BOOL)sendFrame:(struct CECFrame { unsigned char x1[16]; unsigned int x2 : 5; unsigned int x3 : 3; })arg1 withRetryCount:(unsigned char)arg2 error:(id*)arg3;
- (id)initWithInterfaceListener:(id)arg1 properties:(id)arg2;
- (id)properties;
- (BOOL)isValid;
- (void)dealloc;

@end