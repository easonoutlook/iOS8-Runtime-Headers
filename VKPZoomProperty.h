/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VKPStyleProperties;

@interface VKPZoomProperty : PBCodable <NSCopying> {
    float _maxZ;
    float _minZ;
    VKPStyleProperties *_properties;
}

@property float minZ;
@property float maxZ;
@property(retain) VKPStyleProperties * properties;


- (void)applyTo:(id)arg1 zoom:(float)arg2;
- (void)setMaxZ:(float)arg1;
- (float)maxZ;
- (void)setMinZ:(float)arg1;
- (float)minZ;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setProperties:(id)arg1;
- (id)properties;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;

@end
