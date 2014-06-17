/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@class ISDataProvider, NSString, NSData, NSDictionary, SBKTransaction, NSURL;

@interface SBKRequest : NSObject  {
    BOOL _shouldAuthenticate;
    NSURL *_requestURL;
    NSString *_action;
    NSData *_bodyData;
    int _bodyContentType;
    NSDictionary *_headers;
    NSDictionary *_arguments;
    int _method;
    ISDataProvider *_responseDataProvider;
    BOOL _concurrent;
    BOOL _includeDeviceGUID;
    SBKTransaction *_transaction;
}

@property(retain) SBKTransaction * transaction;
@property(getter=isConcurrent,readonly) BOOL concurrent;
@property int method;
@property(readonly) double timeoutInterval;
@property BOOL shouldAuthenticate;
@property BOOL includeDeviceGUID;
@property(retain) NSData * bodyData;
@property(retain) ISDataProvider * responseDataProvider;

+ (id)_contentTypeStringForBodyContentType:(int)arg1;
+ (id)_contentEncodingTypeStringForBodyContentEncodingType:(int)arg1;
+ (int)bodyContentType;
+ (int)bodyContentEncodingType;
+ (id)requestWithRequestURL:(id)arg1;
+ (id)_methodStringForMethod:(int)arg1;

- (void)setMethod:(int)arg1;
- (BOOL)includeDeviceGUID;
- (void)setResponseDataProvider:(id)arg1;
- (id)initWithRequestURL:(id)arg1;
- (id)responseDataProvider;
- (id)copyRequestProperties;
- (id)newURLOperation;
- (void)setShouldAuthenticate:(BOOL)arg1;
- (BOOL)shouldAuthenticate;
- (void)setIncludeDeviceGUID:(BOOL)arg1;
- (void)setBodyDataWithPropertyList:(id)arg1;
- (id)transaction;
- (void)setTransaction:(id)arg1;
- (void)setBodyData:(id)arg1;
- (void)setValue:(id)arg1 forHeaderField:(id)arg2;
- (id)descriptionWithoutHeaderFields;
- (id)_defaultHeaderFields;
- (BOOL)acceptsGzipEncoding;
- (id)canonicalResponseForResponse:(id)arg1;
- (double)timeoutInterval;
- (BOOL)isConcurrent;
- (void).cxx_destruct;
- (int)method;
- (id)description;
- (id)bodyData;
- (void)setValue:(id)arg1 forArgument:(id)arg2;

@end