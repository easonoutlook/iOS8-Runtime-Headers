/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADPoint3D, OADVector3D;

@interface OADBackdrop : NSObject <NSCopying> {
    OADPoint3D *mAnchor;
    OADVector3D *mNormal;
    OADVector3D *mUp;
}


- (id)up;
- (void)setUp:(id)arg1;
- (void)setNormal:(id)arg1;
- (void)setAnchor:(id)arg1;
- (id)anchor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)normal;
- (id)description;
- (void)dealloc;
- (id)init;

@end