/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVVideoCompositionLayerInstructionInternal;

@interface AVVideoCompositionLayerInstruction : NSObject <NSSecureCoding, NSCopying, NSMutableCopying> {
    AVVideoCompositionLayerInstructionInternal *_layerInstruction;
}

@property(readonly) int trackID;

+ (void)initialize;
+ (BOOL)supportsSecureCoding;

- (int)trackID;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)finalize;
- (id)init;
- (BOOL)getCropRectangleRampForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 startCropRectangle:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 endCropRectangle:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg3 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; }*)arg4;
- (BOOL)getOpacityRampForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 startOpacity:(float*)arg2 endOpacity:(float*)arg3 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; }*)arg4;
- (BOOL)getTransformRampForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 startTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; }*)arg2 endTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; }*)arg3 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; }*)arg4;
- (void)setCropRectangleRampFromStartCropRectangle:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toEndCropRectangle:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg3;
- (void)setOpacityRampFromStartOpacity:(float)arg1 toEndOpacity:(float)arg2 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg3;
- (void)setTransformRampFromStartTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1 toEndTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg2 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg3;
- (void)setCropRectangle:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)setOpacity:(float)arg1 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)setTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)_setCropRectangleRampFromStartCropRectangle:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toEndCropRectangle:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg3 selector:(SEL)arg4;
- (void)_setOpacityRampFromStartOpacity:(float)arg1 toEndOpacity:(float)arg2 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg3 selector:(SEL)arg4;
- (void)_setTransformRampFromStartTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1 toEndTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg2 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg3 selector:(SEL)arg4;
- (void)_setCropRectangleRamps:(id)arg1;
- (void)_setOpacityRamps:(id)arg1;
- (void)_setTransformRamps:(id)arg1;
- (void)_setValuesFromDictionary:(id)arg1 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg2;
- (id)dictionaryRepresentationWithTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (void)setTrackID:(int)arg1;

@end
