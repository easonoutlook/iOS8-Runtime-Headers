/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADBevel, OADColor;

@interface OADShape3D : NSObject <NSCopying> {
    OADBevel *mTopBevel;
    OADBevel *mBottomBevel;
    OADColor *mExtrusionColor;
    float mExtrusionHeight;
    OADColor *mContourColor;
    float mContourWidth;
    float mShapeDepth;
    int mMaterial;
}

+ (id)nullShape3D;

- (id)contourColor;
- (id)extrusionColor;
- (id)bottomBevel;
- (id)topBevel;
- (float)contourWidth;
- (float)extrusionHeight;
- (float)shapeDepth;
- (void)setContourWidth:(float)arg1;
- (void)setExtrusionHeight:(float)arg1;
- (void)setShapeDepth:(float)arg1;
- (void)setContourColor:(id)arg1;
- (void)setExtrusionColor:(id)arg1;
- (void)setBottomBevel:(id)arg1;
- (void)setTopBevel:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)setMaterial:(int)arg1;
- (int)material;
- (id)description;
- (void)dealloc;
- (id)init;

@end
