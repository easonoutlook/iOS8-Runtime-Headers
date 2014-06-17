/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@class NSURL, NSURLResponseInternal, NSString;

@interface NSURLResponse : NSObject <NSSecureCoding, NSCopying> {
    NSURLResponseInternal *_internal;
}

@property(copy,readonly) NSURL * URL;
@property(copy,readonly) NSString * MIMEType;
@property(readonly) long long expectedContentLength;
@property(copy,readonly) NSString * textEncodingName;
@property(copy,readonly) NSString * suggestedFilename;

+ (id)_responseWithCFURLResponse:(struct _CFURLResponse { }*)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)getObjectKeyWithIndex:(long)arg1;

- (id)initWithURL:(id)arg1 MIMEType:(id)arg2 expectedContentLength:(int)arg3 textEncodingName:(id)arg4;
- (struct _CFURLResponse { }*)_CFURLResponse;
- (long long)expectedContentLength;
- (id)MIMEType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)URL;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)_peerCertificateChain;
- (double)_calculatedExpiration;
- (double)_freshnessLifetime;
- (BOOL)_mustRevalidate;
- (id)_lastModifiedDate;
- (void)_setMIMEType:(id)arg1;
- (void)_setExpectedContentLength:(long long)arg1;
- (id)suggestedFilename;
- (id)textEncodingName;
- (id)_initWithCFURLResponse:(struct _CFURLResponse { }*)arg1;
- (id)_cacheTime;
- (long long)maxExpectedContentLength;
- (int)statusCode;
- (id)allHeaderFields;
- (id)webui_certificateChain;

@end
