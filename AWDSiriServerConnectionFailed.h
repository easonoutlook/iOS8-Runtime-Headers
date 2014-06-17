/* Generated by RuntimeBrowser.
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDSiriServerConnectionFailed : PBCodable <NSCopying> {
    long long _errorCode;
    unsigned long long _timestamp;
    int _connectionType;
    NSString *_errorDomain;
    struct { 
        unsigned int errorCode : 1; 
        unsigned int timestamp : 1; 
        unsigned int connectionType : 1; 
    } _has;
}

@property BOOL hasTimestamp;
@property unsigned long long timestamp;
@property(readonly) BOOL hasErrorDomain;
@property(retain) NSString * errorDomain;
@property BOOL hasErrorCode;
@property long long errorCode;
@property BOOL hasConnectionType;
@property int connectionType;


- (BOOL)hasConnectionType;
- (void)setHasConnectionType:(BOOL)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (BOOL)hasErrorCode;
- (void)setHasErrorCode:(BOOL)arg1;
- (void)setErrorCode:(long long)arg1;
- (BOOL)hasErrorDomain;
- (void)setErrorDomain:(id)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setConnectionType:(int)arg1;
- (int)connectionType;
- (BOOL)hasTimestamp;
- (long long)errorCode;
- (id)errorDomain;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;

@end