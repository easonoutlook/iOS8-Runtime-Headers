/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXEventPathInfoRepresentation : NSObject <NSSecureCoding, NSCopying> {
    unsigned char _pathIndex;
    unsigned char _pathIdentity;
    unsigned char _pathProximity;
    unsigned long _pathWindowContextID;
    float _pathPressure;
    float _pathMajorRadius;
    float _pathMinorRadius;
    float _pathTwist;
    float _pathQuality;
    float _pathDensity;
    unsigned int _pathEventMask;
    void *_pathWindow;
    struct CGPoint { 
        float x; 
        float y; 
    } _pathLocation;
}

@property unsigned char pathIndex;
@property unsigned char pathIdentity;
@property struct CGPoint { float x1; float x2; } pathLocation;
@property unsigned long pathWindowContextID;
@property unsigned char pathProximity;
@property float pathPressure;
@property float pathMajorRadius;
@property float pathMinorRadius;
@property float pathTwist;
@property float pathQuality;
@property float pathDensity;
@property unsigned int pathEventMask;
@property void* pathWindow;

+ (id)representationWithPathInfo:(struct { unsigned char x1; unsigned char x2; unsigned char x3; float x4; float x5; struct CGPoint { float x_6_1_1; float x_6_1_2; } x6; unsigned int x7; void *x8; }*)arg1;
+ (BOOL)supportsSecureCoding;

- (void)writeToPathInfo:(struct { unsigned char x1; unsigned char x2; unsigned char x3; float x4; float x5; struct CGPoint { float x_6_1_1; float x_6_1_2; } x6; unsigned int x7; void *x8; }*)arg1;
- (void)setPathEventMask:(unsigned int)arg1;
- (unsigned int)pathEventMask;
- (void)setPathDensity:(float)arg1;
- (float)pathDensity;
- (void)setPathQuality:(float)arg1;
- (float)pathQuality;
- (void)setPathMinorRadius:(float)arg1;
- (float)pathMinorRadius;
- (void)setPathTwist:(float)arg1;
- (float)pathTwist;
- (void*)pathWindow;
- (float)pathMajorRadius;
- (float)pathPressure;
- (unsigned char)pathProximity;
- (unsigned char)pathIdentity;
- (unsigned char)pathIndex;
- (void)setPathWindow:(void*)arg1;
- (void)setPathWindowContextID:(unsigned long)arg1;
- (void)setPathLocation:(struct CGPoint { float x1; float x2; })arg1;
- (void)setPathMajorRadius:(float)arg1;
- (void)setPathPressure:(float)arg1;
- (void)setPathProximity:(unsigned char)arg1;
- (void)setPathIdentity:(unsigned char)arg1;
- (void)setPathIndex:(unsigned char)arg1;
- (unsigned long)pathWindowContextID;
- (struct CGPoint { float x1; float x2; })pathLocation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;

@end
