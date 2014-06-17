/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString;

@interface GEOPhotoInfo : PBCodable <NSCopying> {
    int _size;
    NSString *_url;
    struct { 
        unsigned int size : 1; 
    } _has;
}

@property BOOL hasSize;
@property int size;
@property(readonly) BOOL hasUrl;
@property(retain) NSString * url;


- (BOOL)hasSize;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)initWithPlaceDataPhotoContent:(id)arg1;
- (void)setHasSize:(BOOL)arg1;
- (BOOL)hasUrl;
- (id)dictionaryRepresentation;
- (void)setUrl:(id)arg1;
- (void)setSize:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)url;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (int)size;
- (id)description;
- (void)dealloc;

@end
