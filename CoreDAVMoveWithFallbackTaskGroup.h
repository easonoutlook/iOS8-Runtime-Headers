/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSString, NSData, NSDictionary, NSURL;

@interface CoreDAVMoveWithFallbackTaskGroup : CoreDAVTaskGroup  {
    NSURL *_sourceURL;
    NSURL *_destinationURL;
    NSString *_previousETag;
    BOOL _useFallback;
    int _overwrite;
    NSData *_dataPayload;
    NSString *_dataContentType;
    NSDictionary *_responseHeaders;
    NSString *_nextETag;
}

@property(readonly) NSURL * sourceURL;
@property(readonly) NSURL * destinationURL;
@property int overwrite;
@property BOOL useFallback;
@property(retain) NSString * previousETag;
@property(retain) NSData * dataPayload;
@property(retain) NSString * dataContentType;
@property(readonly) NSDictionary * responseHeaders;
@property(readonly) NSString * nextETag;


- (void)setDataContentType:(id)arg1;
- (void)setDataPayload:(id)arg1;
- (void)setUseFallback:(BOOL)arg1;
- (BOOL)useFallback;
- (id)initWithSourceURL:(id)arg1 destinationURL:(id)arg2 AccountInfoProvider:(id)arg3 taskManager:(id)arg4;
- (void)_completedPutTask:(id)arg1;
- (void)_completedMoveTask:(id)arg1;
- (void)setOverwrite:(int)arg1;
- (int)overwrite;
- (void)setPreviousETag:(id)arg1;
- (id)previousETag;
- (id)dataContentType;
- (id)dataPayload;
- (void)startTaskGroup;
- (id)responseHeaders;
- (id)description;
- (void)dealloc;
- (id)sourceURL;
- (id)destinationURL;
- (id)nextETag;

@end
