/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDPResponseOperationResultErrorPlugin, NSString, CKDPResponseOperationResultErrorClient, CKDPResponseOperationResultErrorServer;

@interface CKDPResponseOperationResultError : PBCodable <NSCopying> {
    CKDPResponseOperationResultErrorClient *_clientError;
    NSString *_errorDescription;
    NSString *_errorInternal;
    NSString *_errorKey;
    CKDPResponseOperationResultErrorPlugin *_pluginError;
    int _retryAfterSeconds;
    CKDPResponseOperationResultErrorServer *_serverError;
    struct { 
        unsigned int retryAfterSeconds : 1; 
    } _has;
}

@property(readonly) BOOL hasClientError;
@property(retain) CKDPResponseOperationResultErrorClient * clientError;
@property(readonly) BOOL hasServerError;
@property(retain) CKDPResponseOperationResultErrorServer * serverError;
@property(readonly) BOOL hasPluginError;
@property(retain) CKDPResponseOperationResultErrorPlugin * pluginError;
@property BOOL hasRetryAfterSeconds;
@property int retryAfterSeconds;
@property(readonly) BOOL hasErrorDescription;
@property(retain) NSString * errorDescription;
@property(readonly) BOOL hasErrorKey;
@property(retain) NSString * errorKey;
@property(readonly) BOOL hasErrorInternal;
@property(retain) NSString * errorInternal;


- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasRetryAfterSeconds:(BOOL)arg1;
- (void)setRetryAfterSeconds:(int)arg1;
- (void)setPluginError:(id)arg1;
- (void)setErrorInternal:(id)arg1;
- (void)setServerError:(id)arg1;
- (int)retryAfterSeconds;
- (BOOL)hasRetryAfterSeconds;
- (id)errorInternal;
- (BOOL)hasErrorInternal;
- (id)errorKey;
- (BOOL)hasErrorKey;
- (void)setErrorDescription:(id)arg1;
- (void)setErrorKey:(id)arg1;
- (void)setClientError:(id)arg1;
- (id)errorDescription;
- (BOOL)hasErrorDescription;
- (id)pluginError;
- (BOOL)hasPluginError;
- (id)serverError;
- (BOOL)hasServerError;
- (id)clientError;
- (BOOL)hasClientError;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;

@end