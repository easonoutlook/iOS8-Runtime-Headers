/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMapTable, NSLock;

@interface GEOETARequester : NSObject  {
    NSMapTable *_pendingRequests;
    NSLock *_pendingRequestsLock;
}

+ (id)sharedRequester;

- (void)startSimpleETARequest:(id)arg1 finished:(id)arg2 networkActivity:(id)arg3 error:(id)arg4;
- (void)updateRequest:(id)arg1 finished:(id)arg2 networkActivity:(id)arg3 error:(id)arg4;
- (void)startRequest:(id)arg1 connectionProperties:(const struct { unsigned int x1; double x2; unsigned int x3; }*)arg2 willSendRequest:(id)arg3 finished:(id)arg4 networkActivity:(id)arg5 error:(id)arg6;
- (void)_startRequest:(id)arg1 provider:(id)arg2 isRequestUpdate:(BOOL)arg3 connectionProperties:(const struct { unsigned int x1; double x2; unsigned int x3; }*)arg4 willSendRequest:(id)arg5 finished:(id)arg6 networkActivity:(id)arg7 error:(id)arg8;
- (void)startRequest:(id)arg1 finished:(id)arg2 networkActivity:(id)arg3 error:(id)arg4;
- (void)cancelRequest:(id)arg1;
- (void)dealloc;
- (id)init;

@end
