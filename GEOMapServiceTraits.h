/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOLocation, NSString, GEOMapRegion, NSMutableArray;

@interface GEOMapServiceTraits : PBCodable <NSCopying> {
    struct { 
        unsigned long long _high; 
        unsigned long long _low; 
    } _sessionId;
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    } _transportTypes;
    double _carHeadunitPixelHeight;
    double _carHeadunitPixelWidth;
    int _action;
    NSString *_appIdentifier;
    NSString *_appMajorVersion;
    NSString *_appMinorVersion;
    int _carHeadunitInteractionModel;
    NSString *_carHeadunitManufacturer;
    NSString *_carHeadunitModel;
    NSString *_deviceDisplayLocale;
    NSMutableArray *_deviceInstalledKeyboardLocales;
    NSString *_deviceKeyboardLocale;
    GEOLocation *_deviceLocation;
    NSString *_deviceSpokenLocale;
    GEOMapRegion *_mapRegion;
    NSMutableArray *_photoSizes;
    unsigned int _photosCount;
    NSMutableArray *_reviewUserPhotoSizes;
    unsigned int _reviewUserPhotosCount;
    unsigned int _sequenceNumber;
    int _source;
    unsigned int _timeSinceMapEnteredForeground;
    unsigned int _timeSinceMapViewportChanged;
    BOOL _isAPICall;
    struct { 
        unsigned int sessionId : 1; 
        unsigned int carHeadunitPixelHeight : 1; 
        unsigned int carHeadunitPixelWidth : 1; 
        unsigned int action : 1; 
        unsigned int carHeadunitInteractionModel : 1; 
        unsigned int photosCount : 1; 
        unsigned int reviewUserPhotosCount : 1; 
        unsigned int sequenceNumber : 1; 
        unsigned int source : 1; 
        unsigned int timeSinceMapEnteredForeground : 1; 
        unsigned int timeSinceMapViewportChanged : 1; 
        unsigned int isAPICall : 1; 
    } _has;
}

@property BOOL hasSessionId;
@property struct { unsigned long long x1; unsigned long long x2; } sessionId;
@property BOOL hasSequenceNumber;
@property unsigned int sequenceNumber;
@property(readonly) BOOL hasAppIdentifier;
@property(retain) NSString * appIdentifier;
@property(readonly) BOOL hasAppMajorVersion;
@property(retain) NSString * appMajorVersion;
@property(readonly) BOOL hasAppMinorVersion;
@property(retain) NSString * appMinorVersion;
@property(readonly) BOOL hasDeviceLocation;
@property(retain) GEOLocation * deviceLocation;
@property(readonly) unsigned int transportTypesCount;
@property(readonly) int* transportTypes;
@property(readonly) BOOL hasMapRegion;
@property(retain) GEOMapRegion * mapRegion;
@property(readonly) BOOL hasDeviceDisplayLocale;
@property(retain) NSString * deviceDisplayLocale;
@property(readonly) BOOL hasDeviceKeyboardLocale;
@property(retain) NSString * deviceKeyboardLocale;
@property(readonly) BOOL hasDeviceSpokenLocale;
@property(retain) NSString * deviceSpokenLocale;
@property(retain) NSMutableArray * deviceInstalledKeyboardLocales;
@property BOOL hasIsAPICall;
@property BOOL isAPICall;
@property BOOL hasSource;
@property int source;
@property(retain) NSMutableArray * photoSizes;
@property BOOL hasPhotosCount;
@property unsigned int photosCount;
@property(retain) NSMutableArray * reviewUserPhotoSizes;
@property BOOL hasReviewUserPhotosCount;
@property unsigned int reviewUserPhotosCount;
@property BOOL hasTimeSinceMapEnteredForeground;
@property unsigned int timeSinceMapEnteredForeground;
@property BOOL hasTimeSinceMapViewportChanged;
@property unsigned int timeSinceMapViewportChanged;
@property BOOL hasAction;
@property int action;
@property BOOL hasCarHeadunitInteractionModel;
@property int carHeadunitInteractionModel;
@property(readonly) BOOL hasCarHeadunitManufacturer;
@property(retain) NSString * carHeadunitManufacturer;
@property(readonly) BOOL hasCarHeadunitModel;
@property(retain) NSString * carHeadunitModel;
@property BOOL hasCarHeadunitPixelWidth;
@property double carHeadunitPixelWidth;
@property BOOL hasCarHeadunitPixelHeight;
@property double carHeadunitPixelHeight;


- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setMapRegion:(id)arg1;
- (id)mapRegion;
- (unsigned int)photosCount;
- (void)setHasCarHeadunitPixelHeight:(BOOL)arg1;
- (void)setCarHeadunitPixelHeight:(double)arg1;
- (void)setHasCarHeadunitPixelWidth:(BOOL)arg1;
- (void)setCarHeadunitPixelWidth:(double)arg1;
- (void)setHasCarHeadunitInteractionModel:(BOOL)arg1;
- (void)setCarHeadunitInteractionModel:(int)arg1;
- (BOOL)hasReviewUserPhotosCount;
- (void)setHasReviewUserPhotosCount:(BOOL)arg1;
- (void)setReviewUserPhotosCount:(unsigned int)arg1;
- (BOOL)hasPhotosCount;
- (void)setHasPhotosCount:(BOOL)arg1;
- (void)setPhotosCount:(unsigned int)arg1;
- (void)setHasIsAPICall:(BOOL)arg1;
- (id)reviewUserPhotoSizesAtIndex:(unsigned int)arg1;
- (void)clearReviewUserPhotoSizes;
- (unsigned int)reviewUserPhotoSizesCount;
- (id)photoSizesAtIndex:(unsigned int)arg1;
- (void)addReviewUserPhotoSizes:(id)arg1;
- (void)addPhotoSizes:(id)arg1;
- (void)setCarHeadunitModel:(id)arg1;
- (void)setCarHeadunitManufacturer:(id)arg1;
- (void)setReviewUserPhotoSizes:(id)arg1;
- (void)setPhotoSizes:(id)arg1;
- (BOOL)hasAppIdentifier;
- (void)setTransportTypes:(int*)arg1 count:(unsigned int)arg2;
- (int*)transportTypes;
- (void)addTransportType:(int)arg1;
- (void)clearTransportTypes;
- (double)carHeadunitPixelWidth;
- (double)carHeadunitPixelHeight;
- (BOOL)hasCarHeadunitPixelWidth;
- (BOOL)hasCarHeadunitPixelHeight;
- (id)carHeadunitModel;
- (BOOL)hasCarHeadunitModel;
- (id)carHeadunitManufacturer;
- (BOOL)hasCarHeadunitManufacturer;
- (int)carHeadunitInteractionModel;
- (BOOL)hasCarHeadunitInteractionModel;
- (int)_uiActionType;
- (void)clearPhotoSizes;
- (unsigned int)photoSizesCount;
- (id)appMinorVersion;
- (id)appMajorVersion;
- (BOOL)hasAppMinorVersion;
- (BOOL)hasAppMajorVersion;
- (void)setIsAPICall:(BOOL)arg1;
- (void)setAppMinorVersion:(id)arg1;
- (void)setAppMajorVersion:(id)arg1;
- (void)setHasSessionId:(BOOL)arg1;
- (void)setSessionId:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (id)appIdentifier;
- (id)reviewUserPhotoSizes;
- (unsigned int)reviewUserPhotosCount;
- (id)photoSizes;
- (BOOL)isAPICall;
- (BOOL)hasIsAPICall;
- (BOOL)hasSessionId;
- (int)transportTypeAtIndex:(unsigned int)arg1;
- (unsigned int)transportTypesCount;
- (struct { unsigned long long x1; unsigned long long x2; })sessionId;
- (id)deviceInstalledKeyboardLocales;
- (id)deviceSpokenLocale;
- (id)deviceKeyboardLocale;
- (id)deviceDisplayLocale;
- (BOOL)hasDeviceSpokenLocale;
- (BOOL)hasDeviceKeyboardLocale;
- (BOOL)hasDeviceDisplayLocale;
- (id)deviceInstalledKeyboardLocaleAtIndex:(unsigned int)arg1;
- (void)clearDeviceInstalledKeyboardLocales;
- (unsigned int)deviceInstalledKeyboardLocalesCount;
- (void)addDeviceInstalledKeyboardLocale:(id)arg1;
- (void)setDeviceInstalledKeyboardLocales:(id)arg1;
- (void)setDeviceSpokenLocale:(id)arg1;
- (void)setDeviceKeyboardLocale:(id)arg1;
- (void)setDeviceDisplayLocale:(id)arg1;
- (void)setAppIdentifier:(id)arg1;
- (unsigned int)timeSinceMapViewportChanged;
- (unsigned int)timeSinceMapEnteredForeground;
- (id)deviceLocation;
- (BOOL)hasTimeSinceMapViewportChanged;
- (void)setHasTimeSinceMapViewportChanged:(BOOL)arg1;
- (void)setTimeSinceMapViewportChanged:(unsigned int)arg1;
- (BOOL)hasTimeSinceMapEnteredForeground;
- (void)setHasTimeSinceMapEnteredForeground:(BOOL)arg1;
- (void)setTimeSinceMapEnteredForeground:(unsigned int)arg1;
- (BOOL)hasSequenceNumber;
- (void)setHasSequenceNumber:(BOOL)arg1;
- (void)setSequenceNumber:(unsigned int)arg1;
- (BOOL)hasDeviceLocation;
- (void)setDeviceLocation:(id)arg1;
- (BOOL)hasMapRegion;
- (BOOL)hasSource;
- (void)setHasSource:(BOOL)arg1;
- (BOOL)hasAction;
- (void)setHasAction:(BOOL)arg1;
- (void)setSource:(int)arg1;
- (int)source;
- (id)dictionaryRepresentation;
- (void)setAction:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)action;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (unsigned int)sequenceNumber;

@end
