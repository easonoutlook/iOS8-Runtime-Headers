/* Generated by RuntimeBrowser.
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDAppBBPower : PBCodable <NSCopying> {
    NSString *_bundleName;
    unsigned int _powerMicroWatt;
    int _rAT;
    struct { 
        unsigned int powerMicroWatt : 1; 
        unsigned int rAT : 1; 
    } _has;
}

@property BOOL hasRAT;
@property int rAT;
@property(readonly) BOOL hasBundleName;
@property(retain) NSString * bundleName;
@property BOOL hasPowerMicroWatt;
@property unsigned int powerMicroWatt;


- (unsigned int)powerMicroWatt;
- (BOOL)hasPowerMicroWatt;
- (void)setHasPowerMicroWatt:(BOOL)arg1;
- (int)rAT;
- (BOOL)hasBundleName;
- (BOOL)hasRAT;
- (void)setHasRAT:(BOOL)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)bundleName;
- (void)setRAT:(int)arg1;
- (void)setPowerMicroWatt:(unsigned int)arg1;
- (void)setBundleName:(id)arg1;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;

@end
