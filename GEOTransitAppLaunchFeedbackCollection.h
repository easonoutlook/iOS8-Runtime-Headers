/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOLatLng, NSString;

@interface GEOTransitAppLaunchFeedbackCollection : PBCodable <NSCopying> {
    double _timestamp;
    NSString *_bundleIdentifier;
    GEOLatLng *_destination;
    GEOLatLng *_source;
    struct { 
        unsigned int timestamp : 1; 
    } _has;
}

@property(readonly) BOOL hasBundleIdentifier;
@property(retain) NSString * bundleIdentifier;
@property(readonly) BOOL hasSource;
@property(retain) GEOLatLng * source;
@property(readonly) BOOL hasDestination;
@property(retain) GEOLatLng * destination;
@property BOOL hasTimestamp;
@property double timestamp;


- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (BOOL)hasSource;
- (BOOL)hasTimestamp;
- (BOOL)hasBundleIdentifier;
- (BOOL)hasDestination;
- (void)setBundleIdentifier:(id)arg1;
- (void)setDestination:(id)arg1;
- (id)destination;
- (void)setSource:(id)arg1;
- (id)source;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setTimestamp:(double)arg1;
- (id)bundleIdentifier;
- (double)timestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;

@end
