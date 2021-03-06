/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

@interface SCROBrailleEvent : NSObject  {
    int _type;
    id _data;
    id _data2;
    id _data3;
    BOOL _shouldDisplay;
}

@property BOOL shouldDisplay;

+ (id)eventWithType:(int)arg1 data:(id)arg2 data2:(id)arg3 data3:(id)arg4;
+ (id)eventWithType:(int)arg1 data:(id)arg2;

- (void)setShouldDisplay:(BOOL)arg1;
- (id)initWithType:(int)arg1 data:(id)arg2 data2:(id)arg3 data3:(id)arg4;
- (id)data3;
- (BOOL)shouldDisplay;
- (id)data2;
- (int)type;
- (id)data;
- (id)description;
- (void)dealloc;

@end
