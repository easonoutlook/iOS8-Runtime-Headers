/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray;

@interface GEOPDPlace : PBCodable <NSCopying> {
    unsigned long long _muid;
    unsigned long long _preferredMuid;
    NSMutableArray *_components;
    int _resultProviderId;
    int _status;
    struct { 
        unsigned int muid : 1; 
        unsigned int preferredMuid : 1; 
        unsigned int resultProviderId : 1; 
        unsigned int status : 1; 
    } _has;
}

@property BOOL hasMuid;
@property unsigned long long muid;
@property BOOL hasStatus;
@property int status;
@property BOOL hasPreferredMuid;
@property unsigned long long preferredMuid;
@property(retain) NSMutableArray * components;
@property BOOL hasResultProviderId;
@property int resultProviderId;

+ (id)attributionForPlaceData:(id)arg1 type:(int)arg2;
+ (id)failedPlaceData;
+ (id)failedPlaceDataForMuid:(unsigned long long)arg1;

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasPreferredMuid:(BOOL)arg1;
- (void)setPreferredMuid:(unsigned long long)arg1;
- (id)componentAtIndex:(unsigned int)arg1;
- (void)clearComponents;
- (unsigned int)componentsCount;
- (void)addComponent:(id)arg1;
- (unsigned long long)preferredMuid;
- (BOOL)hasPreferredMuid;
- (id)businessURL;
- (id)_entityName;
- (id)_cleanedPhoneNumberForPhoneNumberRepresentation:(id)arg1;
- (BOOL)hasExpiredComponentsAsOf:(double)arg1;
- (unsigned long long)muid;
- (BOOL)hasMuid;
- (void)setHasMuid:(BOOL)arg1;
- (void)setMuid:(unsigned long long)arg1;
- (id)geoMapItem;
- (int)resultProviderId;
- (BOOL)hasResultProviderId;
- (void)setHasResultProviderId:(BOOL)arg1;
- (void)setResultProviderId:(int)arg1;
- (BOOL)isDisputed;
- (id)phoneNumbers;
- (id)bestName;
- (BOOL)hasStatus;
- (void)setHasStatus:(BOOL)arg1;
- (void)setStatus:(int)arg1;
- (int)status;
- (id)components;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (void)setComponents:(id)arg1;

@end
