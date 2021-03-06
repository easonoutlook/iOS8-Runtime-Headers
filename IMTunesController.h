/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@class NSMutableArray, NSString, NSDate, NSDictionary, NSMutableDictionary;

@interface IMTunesController : NSObject  {
    NSDate *_lastChange;
    NSDictionary *_lastInfo;
    NSMutableDictionary *_playerInfo;
    NSMutableArray *_listeners;
    NSString *_messageFormat;
}

@property(readonly) BOOL isEnabled;
@property(readonly) NSDictionary * playerInfo;
@property(readonly) NSString * messageFormat;

+ (id)sharedTunesController;

- (void)_playerChangedNotification:(id)arg1;
- (void)_playerChanged:(id)arg1;
- (void)_updateMessage;
- (id)messageFormat;
- (id)playerInfo;
- (void)addListener:(id)arg1;
- (void)removeListener:(id)arg1;
- (BOOL)isEnabled;
- (void)dealloc;
- (id)init;

@end
