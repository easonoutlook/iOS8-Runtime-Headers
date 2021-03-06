/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@class NSURL, NSArray, NSString, NSDictionary, NSHTTPCookieInternal, NSDate;

@interface NSHTTPCookie : NSObject  {
    NSHTTPCookieInternal *_cookiePrivate;
}

@property(copy,readonly) NSDictionary * properties;
@property(readonly) unsigned int version;
@property(copy,readonly) NSString * name;
@property(copy,readonly) NSString * value;
@property(copy,readonly) NSDate * expiresDate;
@property(getter=isSessionOnly,readonly) BOOL sessionOnly;
@property(copy,readonly) NSString * domain;
@property(copy,readonly) NSString * path;
@property(getter=isSecure,readonly) BOOL secure;
@property(getter=isHTTPOnly,readonly) BOOL HTTPOnly;
@property(copy,readonly) NSString * comment;
@property(copy,readonly) NSURL * commentURL;
@property(copy,readonly) NSArray * portList;

+ (id)cookieWithProperties:(id)arg1;
+ (id)_cf2nsCookies:(struct __CFArray { }*)arg1;
+ (struct __CFArray { }*)_ns2cfCookies:(id)arg1;
+ (id)cookieWithCFHTTPCookie:(struct OpaqueCFHTTPCookie { }*)arg1;
+ (id)requestHeaderFieldsWithCookies:(id)arg1;
+ (id)cookiesWithResponseHeaderFields:(id)arg1 forURL:(id)arg2;

- (id)comment;
- (id)initWithProperties:(id)arg1;
- (id)properties;
- (unsigned int)version;
- (id)value;
- (BOOL)isSecure;
- (id)domain;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)path;
- (id)name;
- (id)description;
- (void)dealloc;
- (void)finalize;
- (id)init;
- (BOOL)_isExpired;
- (id)_key;
- (int)_compareForHeaderOrder:(id)arg1;
- (id)MaxAge;
- (id)Port;
- (id)Discard;
- (id)Secure;
- (id)Version;
- (id)OriginURL;
- (id)CommentURL;
- (id)Comment;
- (id)Expires;
- (id)Path;
- (id)Domain;
- (id)Value;
- (id)Name;
- (BOOL)isHTTPOnly;
- (struct OpaqueCFHTTPCookie { }*)_CFHTTPCookie;
- (struct OpaqueCFHTTPCookie { }*)_GetInternalCFHTTPCookie;
- (id)portList;
- (id)commentURL;
- (id)expiresDate;
- (BOOL)isSessionOnly;
- (id)initWithCFHTTPCookie:(struct OpaqueCFHTTPCookie { }*)arg1;
- (id)replacementObjectForPortCoder:(id)arg1;

@end
