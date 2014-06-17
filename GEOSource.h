/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString;

@interface GEOSource : PBCodable <NSCopying> {
    NSString *_sourceId;
    NSString *_sourceName;
    NSString *_sourceVersion;
}

@property(retain) NSString * sourceName;
@property(retain) NSString * sourceId;
@property(readonly) BOOL hasSourceVersion;
@property(retain) NSString * sourceVersion;


- (id)sourceName;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)initWithAttributionID:(id)arg1;
- (BOOL)hasSourceVersion;
- (void)setSourceVersion:(id)arg1;
- (void)setSourceName:(id)arg1;
- (id)sourceVersion;
- (id)sourceId;
- (void)setSourceId:(id)arg1;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;

@end