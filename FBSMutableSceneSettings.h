/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@class NSArray;

@interface FBSMutableSceneSettings : FBSSceneSettings  {
}

@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } frame;
@property float level;
@property int interfaceOrientation;
@property(getter=isBackgrounded) BOOL backgrounded;
@property struct CGPoint { float x1; float x2; } contentOffset;
@property(copy) NSArray * occlusions;

+ (BOOL)_isMutable;

- (id)transientLocalSettings;
- (void)setBackgrounded:(BOOL)arg1;
- (void)setOcclusions:(id)arg1;
- (id)ignoreOcclusionReasons;
- (id)otherSettings;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setLevel:(float)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setInterfaceOrientation:(int)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end