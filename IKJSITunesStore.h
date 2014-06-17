/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@class NSString;

@interface IKJSITunesStore : IKJSObject <IKJSITunesStore> {
    NSString *_cookieURL;
}

@property(readonly) NSString * DSID;
@property(readonly) NSString * userAgent;
@property(readonly) NSString * networkConnectionType;
@property(retain) NSString * storefront;
@property(retain) NSString * cookieURL;
@property(retain) id cookie;

+ (void)setHeadersForURL:(id)arg1 inRequestProperties:(id)arg2;
+ (void)setITunesStoreHeaders:(id)arg1;

- (void)setCookie:(id)arg1;
- (id)cookie;
- (void)setStorefront:(id)arg1;
- (id)storefront;
- (void)setCookieURL:(id)arg1;
- (id)cookieURL;
- (id)networkConnectionType;
- (id)DSID;
- (void)evaluateScripts:(id)arg1 :(id)arg2;
- (void)loadStoreContent:(id)arg1 :(id)arg2;
- (void)recordEvent:(id)arg1 :(id)arg2;
- (id)makeStoreXMLHttpRequest;
- (id)getBag;
- (void)clearCookies;
- (void).cxx_destruct;
- (id)userAgent;

@end
