/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

@class SCROConnection, SCRCTargetSelectorTimer, NSLock;

@interface SCROScriptClient : NSObject  {
    NSLock *_lock;
    SCROConnection *_connection;
    SCRCTargetSelectorTimer *_timer;
    BOOL _isReady;
}

+ (id)sharedClient;
+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)handleCallback:(id)arg1;
- (BOOL)runScriptFile:(id)arg1;
- (void)_killConnection;
- (id)_lazyConnection;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)retainCount;
- (void)dealloc;
- (id)autorelease;
- (id)retain;
- (oneway void)release;
- (id)init;
- (BOOL)_isReady;

@end
