/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/RadarCompose.framework/RadarCompose
 */

@interface NUCRestKit : NSObject  {
}

+ (BOOL)canUploadFileAtURL:(id)arg1 outLength:(unsigned long long*)arg2 error:(id*)arg3;
+ (id)encodeParamStringFromDictionary:(id)arg1;
+ (BOOL)getStringEncoding:(unsigned int*)arg1 forFileAtPath:(id)arg2;
+ (id)createQueryStringForPath:(id)arg1;
+ (id)createNSURLCredentialForUser:(id)arg1 withPassword:(id)arg2;
+ (id)addBasicAuthToURLRequest:(id)arg1 forUserName:(id)arg2 andPassword:(id)arg3;
+ (id)createPostRequestForURL:(id)arg1 timeoutInterval:(double)arg2 fromDictionary:(id)arg3 handleCookies:(BOOL)arg4;
+ (id)createSimpleRequestForURL:(id)arg1 useCache:(BOOL)arg2;
+ (id)createRequestForPath:(id)arg1 useCache:(BOOL)arg2 timeoutInterval:(double)arg3 postData:(id)arg4 dataIsForm:(BOOL)arg5 handleCookies:(BOOL)arg6;
+ (id)createURLForPathStr:(id)arg1 baseURL:(id)arg2;
+ (id)urlDecodeString:(id)arg1;
+ (id)urlEncodePostString:(id)arg1;
+ (id)encodedFormFromDictionary:(id)arg1;
+ (id)createRequestForURL:(id)arg1 useCache:(BOOL)arg2 timeoutInterval:(double)arg3 postData:(id)arg4 dataIsForm:(BOOL)arg5 handleCookies:(BOOL)arg6;
+ (id)createURLForPathStr:(id)arg1 baseStr:(id)arg2;
+ (id)urlEncodeParameterString:(id)arg1;


@end