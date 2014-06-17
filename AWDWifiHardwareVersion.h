/* Generated by RuntimeBrowser.
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDWifiHardwareVersion : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    NSString *_hardwareVersion;
    struct { 
        unsigned int timestamp : 1; 
    } _has;
}

@property BOOL hasTimestamp;
@property unsigned long long timestamp;
@property(readonly) BOOL hasHardwareVersion;
@property(retain) NSString * hardwareVersion;


- (id)hardwareVersion;
- (BOOL)hasHardwareVersion;
- (void)setHardwareVersion:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (BOOL)hasTimestamp;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;

@end