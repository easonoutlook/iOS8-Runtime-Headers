/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSXPCConnection;

@interface BBNotificationBehaviorUtilitiesClient : NSObject <BBNotificationBehaviorUtilitiesClientProtocol> {
    NSXPCConnection *_connection;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _filteringStateChangeHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _activeBehaviorOverridesChangeHandler;

}

+ (id)clientInterface;

- (void)shouldPresentNotificationOfType:(int)arg1 fromSender:(id)arg2 withHandler:(id)arg3;
- (void)setActiveBehaviorOverridesChangeHandler:(id)arg1;
- (void)setFilteringStateChangeHandler:(id)arg1;
- (void)notificationPresentationFilteringChangedToEnabled:(BOOL)arg1;
- (void)activeBehaviorOverrideTypesChanged:(unsigned int)arg1 source:(unsigned int)arg2;
- (void)invalidate;
- (void)dealloc;
- (id)init;

@end
