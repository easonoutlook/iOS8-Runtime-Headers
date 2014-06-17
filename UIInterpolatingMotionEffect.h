/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString;

@interface UIInterpolatingMotionEffect : UIMotionEffect  {
    float _horizontalAccelerationBoostFactor;
    float _verticalAccelerationBoostFactor;
    NSString *_keyPath;
    int _type;
    id _minimumRelativeValue;
    id _maximumRelativeValue;
}

@property(readonly) NSString * keyPath;
@property(readonly) int type;
@property(retain) id minimumRelativeValue;
@property(retain) id maximumRelativeValue;


- (id)maximumRelativeValue;
- (id)minimumRelativeValue;
- (void)_setType:(int)arg1;
- (void)_setKeyPath:(id)arg1;
- (id)_keyPathsAndRelativeValuesForPose:(id)arg1;
- (float)_verticalAccelerationBoostFactor;
- (void)_setVerticalAccelerationBoostFactor:(float)arg1;
- (float)_horizontalAccelerationBoostFactor;
- (void)_setHorizontalAccelerationBoostFactor:(float)arg1;
- (void)setMaximumRelativeValue:(id)arg1;
- (void)setMinimumRelativeValue:(id)arg1;
- (id)initWithKeyPath:(id)arg1 type:(int)arg2;
- (id)keyPathsAndRelativeValuesForViewerOffset:(struct UIOffset { float x1; float x2; })arg1;
- (id)keyPath;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)type;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)dealloc;

@end
