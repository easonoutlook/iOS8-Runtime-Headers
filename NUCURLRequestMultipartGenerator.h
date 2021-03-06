/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/RadarCompose.framework/RadarCompose
 */

@class NSString;

@interface NUCURLRequestMultipartGenerator : NUCURLRequestGenerator  {
    NSString *_partBoundary;
}

@property(copy) NSString * partBoundary;


- (id)requestWithMultipartFormRequest:(id)arg1 writingStreamContentsToFile:(id)arg2 completionHandler:(id)arg3;
- (id)multipartFormRequestWithMethod:(id)arg1 forURLString:(id)arg2 uriParameters:(id)arg3 error:(id*)arg4 constructingBodyWithBlock:(id)arg5;
- (void)setPartBoundary:(id)arg1;
- (id)multipartFormRequestWithMethod:(id)arg1 forURL:(id)arg2 uriParameters:(id)arg3 error:(id*)arg4 constructingBodyWithBlock:(id)arg5;
- (id)partBoundary;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;

@end
