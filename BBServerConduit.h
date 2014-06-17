/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@class NSXPCConnection;

@interface BBServerConduit : NSObject <BBServerConduitClientInterface> {
    NSXPCConnection *_connection;
}

+ (id)clientInterface;
+ (id)sharedConduit;
+ (id)serverInterface;

- (void)weeAppWithBundleID:(id)arg1 getHiddenFromUser:(id)arg2;
- (void)weeAppWithBundleID:(id)arg1 setHiddenFromUser:(BOOL)arg2;
- (void)sendMessageToDataProviderSectionID:(id)arg1 name:(id)arg2 userInfo:(id)arg3;
- (void)invalidate;
- (void)dealloc;
- (id)init;

@end