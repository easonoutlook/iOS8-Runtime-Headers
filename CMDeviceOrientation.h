/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMDeviceOrientation : CMLogItem  {
    id _internal;
}

@property(readonly) int orientation;


- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)orientation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithOrientation:(int)arg1 andTimestamp:(double)arg2;
- (id)orientationString;

@end
