/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTraitsPhotoSize : PBCodable <NSCopying> {
    unsigned int _height;
    unsigned int _width;
    struct { 
        unsigned int height : 1; 
        unsigned int width : 1; 
    } _has;
}

@property BOOL hasWidth;
@property unsigned int width;
@property BOOL hasHeight;
@property unsigned int height;


- (BOOL)hasWidth;
- (void)setHasWidth:(BOOL)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (BOOL)hasHeight;
- (void)setHasHeight:(BOOL)arg1;
- (void)setHeight:(unsigned int)arg1;
- (void)setWidth:(unsigned int)arg1;
- (id)dictionaryRepresentation;
- (unsigned int)height;
- (unsigned int)width;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;

@end
