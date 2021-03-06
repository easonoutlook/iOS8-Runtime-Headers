/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@class NSData;

@interface RURadioStreamPing : NSObject  {
    int _type;
    NSData *_value;
    double _timestamp;
}

@property(readonly) double timestamp;
@property(readonly) int type;
@property(copy,readonly) NSData * value;


- (id)initWithType:(int)arg1 value:(id)arg2 timestamp:(double)arg3;
- (void).cxx_destruct;
- (id)value;
- (int)type;
- (double)timestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;

@end
