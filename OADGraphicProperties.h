/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSArray, OADShape3D, OADScene3D, OADFill, OADStroke;

@interface OADGraphicProperties : OADDrawableProperties <OADEffectsParent, OADProperties3DParent> {
    OADFill *mFill;
    NSArray *mEffects;
    NSArray *mExts;
    OADScene3D *mScene3D;
    OADShape3D *mShape3D;
    OADStroke *mStroke;
    unsigned int mHasIsBehindText : 1;
    unsigned int mIsBehindText : 1;
}


- (void)setParent:(id)arg1;
- (BOOL)hasEffects;
- (void)removeUnnecessaryOverrides;
- (id)initWithDefaults;
- (id)shape3D;
- (id)scene3D;
- (BOOL)hasShape3D;
- (BOOL)hasScene3D;
- (BOOL)isBehindText;
- (id)exts;
- (BOOL)hasIsBehindText;
- (BOOL)hasExts;
- (void)setExts:(id)arg1;
- (void)setIsBehindText:(BOOL)arg1;
- (void)setShape3D:(id)arg1;
- (void)setScene3D:(id)arg1;
- (void)setEffects:(id)arg1;
- (id)effects;
- (BOOL)hasStroke;
- (BOOL)hasFill;
- (void)setStroke:(id)arg1;
- (void)setFill:(id)arg1;
- (id)stroke;
- (id)fill;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end
