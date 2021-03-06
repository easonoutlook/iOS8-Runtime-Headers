/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIViewFittingSizeTargetInfo : NSObject <NSCopying> {
    float _horizontalPriority;
    float _verticalPriority;
    struct CGSize { 
        float width; 
        float height; 
    } _targetSize;
}

@property(readonly) struct CGSize { float x1; float x2; } targetSize;
@property(readonly) float horizontalPriority;
@property(readonly) float verticalPriority;


- (id)initWithTargetSize:(struct CGSize { float x1; float x2; })arg1 horizontalPriority:(float)arg2 verticalPriority:(float)arg3;
- (BOOL)isEqualToTargetInfo:(id)arg1;
- (struct CGSize { float x1; float x2; })targetSize;
- (float)verticalPriority;
- (float)horizontalPriority;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end
