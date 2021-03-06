/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOLatLng;

@interface GEOLocation : PBCodable <NSCopying> {
    double _course;
    double _courseAccuracy;
    double _heading;
    double _horizontalAccuracy;
    double _speed;
    double _speedAccuracy;
    double _timestamp;
    double _verticalAccuracy;
    int _altitude;
    GEOLatLng *_latLng;
    int _type;
    BOOL _isMatchedLocation;
    BOOL _isShifted;
    struct { 
        unsigned int course : 1; 
        unsigned int courseAccuracy : 1; 
        unsigned int heading : 1; 
        unsigned int horizontalAccuracy : 1; 
        unsigned int speed : 1; 
        unsigned int speedAccuracy : 1; 
        unsigned int timestamp : 1; 
        unsigned int verticalAccuracy : 1; 
        unsigned int altitude : 1; 
        unsigned int type : 1; 
        unsigned int isMatchedLocation : 1; 
        unsigned int isShifted : 1; 
    } _has;
}

@property(readonly) struct { double x1; double x2; } coordinate;
@property BOOL hasCourseAccuracy;
@property double courseAccuracy;
@property BOOL hasSpeedAccuracy;
@property double speedAccuracy;
@property BOOL hasIsMatchedLocation;
@property BOOL isMatchedLocation;
@property BOOL hasIsShifted;
@property BOOL isShifted;
@property(retain) GEOLatLng * latLng;
@property BOOL hasType;
@property int type;
@property BOOL hasTimestamp;
@property double timestamp;
@property BOOL hasAltitude;
@property int altitude;
@property BOOL hasHorizontalAccuracy;
@property double horizontalAccuracy;
@property BOOL hasVerticalAccuracy;
@property double verticalAccuracy;
@property BOOL hasSpeed;
@property double speed;
@property BOOL hasHeading;
@property double heading;
@property BOOL hasCourse;
@property double course;

+ (id)locationWithCLLocation:(id)arg1 course:(double)arg2;

- (double)heading;
- (double)course;
- (struct { double x1; double x2; })coordinate;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (int)altitude;
- (void)setLatLng:(id)arg1;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2;
- (double)verticalAccuracy;
- (double)horizontalAccuracy;
- (BOOL)hasType;
- (void)setHasType:(BOOL)arg1;
- (BOOL)hasIsShifted;
- (void)setHasIsShifted:(BOOL)arg1;
- (void)setIsShifted:(BOOL)arg1;
- (BOOL)hasIsMatchedLocation;
- (void)setHasIsMatchedLocation:(BOOL)arg1;
- (void)setIsMatchedLocation:(BOOL)arg1;
- (BOOL)isMatchedLocation;
- (BOOL)hasSpeedAccuracy;
- (void)setHasSpeedAccuracy:(BOOL)arg1;
- (void)setSpeedAccuracy:(double)arg1;
- (double)speedAccuracy;
- (BOOL)hasCourseAccuracy;
- (void)setHasCourseAccuracy:(BOOL)arg1;
- (void)setCourseAccuracy:(double)arg1;
- (double)courseAccuracy;
- (BOOL)hasHeading;
- (void)setHasHeading:(BOOL)arg1;
- (void)setHeading:(double)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (id)initWithGEOCoordinate:(struct { double x1; double x2; })arg1;
- (BOOL)hasTimestamp;
- (BOOL)hasSpeed;
- (void)setHasSpeed:(BOOL)arg1;
- (BOOL)hasCourse;
- (void)setHasCourse:(BOOL)arg1;
- (BOOL)hasVerticalAccuracy;
- (void)setHasVerticalAccuracy:(BOOL)arg1;
- (BOOL)hasAltitude;
- (void)setHasAltitude:(BOOL)arg1;
- (BOOL)hasHorizontalAccuracy;
- (void)setHasHorizontalAccuracy:(BOOL)arg1;
- (void)setCourse:(double)arg1;
- (void)setVerticalAccuracy:(double)arg1;
- (void)setAltitude:(int)arg1;
- (void)setHorizontalAccuracy:(double)arg1;
- (id)dictionaryRepresentation;
- (BOOL)isShifted;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)type;
- (void)setTimestamp:(double)arg1;
- (void)setType:(int)arg1;
- (double)timestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)setSpeed:(double)arg1;
- (double)speed;
- (void)dealloc;
- (id)latLng;
- (id)initWithLocation:(id)arg1;
- (id)_initWithCLClientLocation:(const struct { int x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; int x11; double x12; int x13; struct { double x_14_1_1; double x_14_1_2; } x14; double x15; int x16; }*)arg1;
- (id)initWithCLLocation:(id)arg1 course:(double)arg2;
- (id)initWithCLLocation:(id)arg1 useMatchInfo:(BOOL)arg2;
- (id)initWithCLLocation:(id)arg1;
- (id)initWithCoreLocation:(id)arg1;

@end
