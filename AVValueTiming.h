/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVValueTiming : NSObject <NSCoding, NSCopying, NSMutableCopying> {
}

@property(readonly) double currentValue;
@property(readonly) double anchorValue;
@property(readonly) double anchorTimeStamp;
@property(readonly) double rate;

+ (id)valueTimingWithAnchorValue:(double)arg1 anchorTimeStamp:(double)arg2 rate:(double)arg3;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (double)currentTimeStamp;

- (double)currentValue;
- (double)rate;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)timeStampForValue:(double)arg1;
- (double)valueForTimeStamp:(double)arg1;
- (double)anchorTimeStamp;
- (double)anchorValue;
- (id)initWithAnchorValue:(double)arg1 anchorTimeStamp:(double)arg2 rate:(double)arg3;
- (id)initWithValueTiming:(id)arg1;
- (BOOL)isEqualToValueTiming:(id)arg1;
- (struct { double x1; double x2; })_timing;

@end
