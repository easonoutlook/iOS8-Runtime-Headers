/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNBoundingBox : NSObject  {
    struct SCNVector3 { 
        float x; 
        float y; 
        float z; 
    } min;
    struct SCNVector3 { 
        float x; 
        float y; 
        float z; 
    } max;
}

@property struct SCNVector3 { float x1; float x2; float x3; } min;
@property struct SCNVector3 { float x1; float x2; float x3; } max;

+ (id)SCNJSExportProtocol;

- (void)setMin:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (struct SCNVector3 { float x1; float x2; float x3; })min;
- (void)setMax:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (struct SCNVector3 { float x1; float x2; float x3; })max;
- (id)description;

@end
