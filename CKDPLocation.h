/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDPLocationBound, CKDPLocationCoordinate;

@interface CKDPLocation : PBCodable <NSCopying> {
    CKDPLocationBound *_bounds;
    CKDPLocationCoordinate *_coordinate;
}

@property(readonly) BOOL hasCoordinate;
@property(retain) CKDPLocationCoordinate * coordinate;
@property(readonly) BOOL hasBounds;
@property(retain) CKDPLocationBound * bounds;


- (void)setCoordinate:(id)arg1;
- (id)coordinate;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (BOOL)hasBounds;
- (BOOL)hasCoordinate;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)setBounds:(id)arg1;
- (id)bounds;

@end
