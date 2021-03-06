/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class _GEOTileDownloadOp, NSMutableData, GEOSimpleTileRequester, NSURLConnection, NSString, NSURL, NSData;

@interface _GEOTileDownloadOp : NSObject <NSURLConnectionDelegate> {
    NSURL *_url;
    BOOL _requireWiFi;
    NSMutableData *_data;
    NSString *_cachedEtag;
    NSData *_cachedData;
    NSURLConnection *_conn;
    NSString *_responseEtag;
    struct _GEOTileKey { 
        unsigned int z : 6; 
        unsigned int x : 26; 
        unsigned int y : 26; 
        unsigned int type : 6; 
        unsigned int pixelSize : 8; 
        unsigned int textScale : 8; 
        unsigned int provider : 8; 
        unsigned int expires : 1; 
        unsigned int reserved1 : 7; 
        unsigned char reserved2[4]; 
    } _key;
    BOOL _finished;
    NSString *_editionHeader;
    unsigned int _tileEdition;
    NSString *_userAgent;
    NSData *_auditToken;
    BOOL _useCookies;
    _GEOTileDownloadOp *_baseTile;
    _GEOTileDownloadOp *_localizationTile;
    unsigned int _contentLength;
    GEOSimpleTileRequester *_delegate;
    BOOL _gotData;
    int _attempts;
    double _startTime;
    double _timeout;
}

@property(retain) NSURL * url;
@property(retain) NSString * cachedEtag;
@property(retain) NSData * cachedData;
@property BOOL requireWiFi;
@property(retain) NSMutableData * data;
@property(retain) NSString * responseEtag;
@property(retain) NSURLConnection * conn;
@property(retain) NSString * editionHeader;
@property(retain) NSString * userAgent;
@property(retain) NSData * auditToken;
@property BOOL useCookies;
@property(retain) _GEOTileDownloadOp * baseTile;
@property(retain) _GEOTileDownloadOp * localizationTile;
@property struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; } key;
@property unsigned int tileEdition;
@property(readonly) unsigned int contentLength;
@property(readonly) BOOL finished;
@property double timeout;
@property GEOSimpleTileRequester * delegate;


- (double)timeout;
- (BOOL)requireWiFi;
- (void)setTileEdition:(unsigned int)arg1;
- (id)conn;
- (double)elapsed;
- (id)cachedEtag;
- (id)cachedData;
- (void)setResponseEtag:(id)arg1;
- (void)setConn:(id)arg1;
- (BOOL)useCookies;
- (void)setUseCookies:(BOOL)arg1;
- (void)setCachedEtag:(id)arg1;
- (void)setCachedData:(id)arg1;
- (void)setAuditToken:(id)arg1;
- (void)setEditionHeader:(id)arg1;
- (id)editionHeader;
- (void)setRequireWiFi:(BOOL)arg1;
- (id)responseEtag;
- (unsigned int)tileEdition;
- (id)localizationTile;
- (id)baseTile;
- (void)setLocalizationTile:(id)arg1;
- (void)setBaseTile:(id)arg1;
- (void)setUserAgent:(id)arg1;
- (id)auditToken;
- (void)setKey:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; })arg1;
- (struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; })key;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)setUrl:(id)arg1;
- (void)setData:(id)arg1;
- (id)url;
- (id)delegate;
- (void)cancel;
- (id)data;
- (void)start;
- (id)description;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)userAgent;
- (void)setTimeout:(double)arg1;
- (unsigned int)contentLength;
- (BOOL)finished;

@end
