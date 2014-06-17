/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

@class NSXPCConnection;

@interface ATServiceProxy : ATService <ATServiceObserver> {
    NSXPCConnection *_connection;
}

@property(retain) NSXPCConnection * connection;


- (id)initWithConnection:(id)arg1;
- (void)service:(id)arg1 willOpenMessageLink:(id)arg2;
- (id)messageLinks;
- (void)service:(id)arg1 willOpenMessageLink:(id)arg2 completion:(id)arg3;
- (void)addObserver:(id)arg1;
- (void)setConnection:(id)arg1;
- (id)connection;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
