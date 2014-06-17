/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@class NSString, PBUnknownFields;

@interface MSPRapIdentifiers : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSString *_deviceIdentifier;
    NSString *_localRapIdentifier;
}

@property(readonly) BOOL hasDeviceIdentifier;
@property(retain) NSString * deviceIdentifier;
@property(readonly) BOOL hasLocalRapIdentifier;
@property(retain) NSString * localRapIdentifier;
@property(readonly) PBUnknownFields * unknownFields;


- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)localRapIdentifier;
- (BOOL)hasLocalRapIdentifier;
- (void)setLocalRapIdentifier:(id)arg1;
- (id)unknownFields;
- (id)deviceIdentifier;
- (BOOL)hasDeviceIdentifier;
- (void)setDeviceIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;

@end
