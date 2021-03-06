/* Generated by RuntimeBrowser.
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDSiriSessionLoadTimeout : PBCodable <NSCopying> {
    unsigned long long _connectionTechnology;
    unsigned long long _interfaceIndex;
    unsigned long long _sendBufferSize;
    unsigned long long _timestamp;
    NSString *_connectionURL;
    BOOL _wwanPreferred;
    struct { 
        unsigned int connectionTechnology : 1; 
        unsigned int interfaceIndex : 1; 
        unsigned int sendBufferSize : 1; 
        unsigned int timestamp : 1; 
        unsigned int wwanPreferred : 1; 
    } _has;
}

@property BOOL hasTimestamp;
@property unsigned long long timestamp;
@property(readonly) BOOL hasConnectionURL;
@property(retain) NSString * connectionURL;
@property BOOL hasInterfaceIndex;
@property unsigned long long interfaceIndex;
@property BOOL hasSendBufferSize;
@property unsigned long long sendBufferSize;
@property BOOL hasWwanPreferred;
@property BOOL wwanPreferred;
@property BOOL hasConnectionTechnology;
@property unsigned long long connectionTechnology;


- (unsigned long long)connectionTechnology;
- (BOOL)wwanPreferred;
- (unsigned long long)sendBufferSize;
- (unsigned long long)interfaceIndex;
- (id)connectionURL;
- (BOOL)hasConnectionTechnology;
- (void)setHasConnectionTechnology:(BOOL)arg1;
- (void)setConnectionTechnology:(unsigned long long)arg1;
- (BOOL)hasWwanPreferred;
- (void)setHasWwanPreferred:(BOOL)arg1;
- (void)setWwanPreferred:(BOOL)arg1;
- (BOOL)hasSendBufferSize;
- (void)setHasSendBufferSize:(BOOL)arg1;
- (void)setSendBufferSize:(unsigned long long)arg1;
- (BOOL)hasInterfaceIndex;
- (void)setHasInterfaceIndex:(BOOL)arg1;
- (void)setInterfaceIndex:(unsigned long long)arg1;
- (BOOL)hasConnectionURL;
- (void)setConnectionURL:(id)arg1;
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
