/* Generated by RuntimeBrowser.
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSData;

@interface AWDWifiMostUsedNetworks : PBCodable <NSCopying> {
    double _timeUsed;
    unsigned int _apOUI;
    NSData *_apOui;
    unsigned int _securityType;
    unsigned int _timeUsedMinutes;
    struct { 
        unsigned int timeUsed : 1; 
        unsigned int apOUI : 1; 
        unsigned int securityType : 1; 
        unsigned int timeUsedMinutes : 1; 
    } _has;
}

@property BOOL hasApOUI;
@property unsigned int apOUI;
@property BOOL hasSecurityType;
@property unsigned int securityType;
@property BOOL hasTimeUsed;
@property double timeUsed;
@property(readonly) BOOL hasApOui;
@property(retain) NSData * apOui;
@property BOOL hasTimeUsedMinutes;
@property unsigned int timeUsedMinutes;


- (unsigned int)timeUsedMinutes;
- (id)apOui;
- (double)timeUsed;
- (unsigned int)securityType;
- (unsigned int)apOUI;
- (BOOL)hasTimeUsedMinutes;
- (void)setHasTimeUsedMinutes:(BOOL)arg1;
- (void)setTimeUsedMinutes:(unsigned int)arg1;
- (BOOL)hasApOui;
- (BOOL)hasTimeUsed;
- (void)setHasTimeUsed:(BOOL)arg1;
- (void)setTimeUsed:(double)arg1;
- (BOOL)hasSecurityType;
- (void)setHasSecurityType:(BOOL)arg1;
- (void)setSecurityType:(unsigned int)arg1;
- (BOOL)hasApOUI;
- (void)setHasApOUI:(BOOL)arg1;
- (void)setApOUI:(unsigned int)arg1;
- (void)setApOui:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;

@end
