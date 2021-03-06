/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSObject<OS_dispatch_source>, NSString, NSObject<OS_dispatch_queue>;

@interface CalFileSensor : NSObject  {
    NSString *_path;
    int _type;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_source;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _eventBlock;

    BOOL _started;
}

@property(retain) NSString * path;
@property int type;
@property BOOL started;
@property(copy) id eventBlock;

+ (id)copyFileSensorTypeAsString:(int)arg1;
+ (unsigned long)_maskForFileSensorType:(int)arg1;

- (BOOL)started;
- (void)setStarted:(BOOL)arg1;
- (id)initWithPath:(id)arg1 andType:(int)arg2;
- (void).cxx_destruct;
- (void)setPath:(id)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (id)eventBlock;
- (void)setEventBlock:(id)arg1;
- (void)start;
- (void)stop;
- (id)path;
- (id)description;
- (void)dealloc;
- (id)init;

@end
