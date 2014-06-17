/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, NSObject<OS_xpc_object>;

@interface _NSBackgroundActivityInternal : NSObject  {
    NSString *_identifier;
    double _interval;
    double _tolerance;
    double _delay;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _activity;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _checkInHandler;

    BOOL _repeats;
    BOOL _preregistered;
    BOOL _appRefresh;
    NSObject<OS_xpc_object> *_additionalProperties;
    int _qualityOfService;
    NSObject<OS_xpc_object> *_currentActivity;
}

@property(copy) NSString * identifier;
@property int qualityOfService;
@property BOOL repeats;
@property double interval;
@property double tolerance;
@property double delay;
@property(copy) id activity;
@property BOOL preregistered;
@property(copy) id checkInHandler;
@property(getter=isAppRefresh) BOOL appRefresh;


- (void)setQualityOfService:(int)arg1;
- (int)qualityOfService;
- (BOOL)repeats;
- (void)setActivity:(id)arg1;
- (double)interval;
- (void)setInterval:(double)arg1;
- (id)activity;
- (void)setIdentifier:(id)arg1;
- (double)delay;
- (id)identifier;
- (void)setDelay:(double)arg1;
- (void)dealloc;
- (id)init;
- (void)setAppRefresh:(BOOL)arg1;
- (BOOL)isAppRefresh;
- (void)setRepeats:(BOOL)arg1;
- (void)setCheckInHandler:(id)arg1;
- (id)checkInHandler;
- (void)setPreregistered:(BOOL)arg1;
- (BOOL)preregistered;
- (void)setAdditionalProperties:(id)arg1;
- (id)additionalProperties;
- (void)setCurrentActivity:(id)arg1;
- (id)currentActivity;
- (void)setTolerance:(double)arg1;
- (double)tolerance;

@end
