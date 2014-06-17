/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, PLOperator;

@interface PLCFNotificationOperatorComposition : NSObject  {
    BOOL _isStateRequired;
    NSString *_notificationName;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _operatorBlock;

    PLOperator *_operator;
    int _stateToken;
}

@property(retain) NSString * notificationName;
@property(copy) id operatorBlock;
@property PLOperator * operator;
@property BOOL isStateRequired;
@property int stateToken;


- (void)setOperator:(id)arg1;
- (id)initWithOperator:(id)arg1 forNotification:(id)arg2 requireState:(BOOL)arg3 withBlock:(id)arg4;
- (void)setStateToken:(int)arg1;
- (int)stateToken;
- (void)setIsStateRequired:(BOOL)arg1;
- (void)setNotificationName:(id)arg1;
- (id)notificationName;
- (BOOL)isStateRequired;
- (BOOL)listenForNotifications:(BOOL)arg1;
- (void)setOperatorBlock:(id)arg1;
- (id)operatorBlock;
- (id)operator;
- (void).cxx_destruct;
- (void)dealloc;

@end