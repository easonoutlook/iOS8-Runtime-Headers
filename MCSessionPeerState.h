/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
 */

@class NSData, NSMutableDictionary, MCPeerID;

@interface MCSessionPeerState : NSObject  {
    BOOL _connectPeerCalled;
    MCPeerID *_peerID;
    int _state;
    NSMutableDictionary *_outgoingStreamRequests;
    NSMutableDictionary *_incomingStreams;
    NSMutableDictionary *_outgoingStreams;
    NSData *_nearbyConnectionData;
    int _certificateDecision;
    unsigned int _newStreamOpenRequestID;
    unsigned int _newStreamID;
}

@property(copy,readonly) MCPeerID * peerID;
@property int state;
@property BOOL connectPeerCalled;
@property(copy) NSData * nearbyConnectionData;
@property(retain) NSMutableDictionary * outgoingStreamRequests;
@property(retain) NSMutableDictionary * outgoingStreams;
@property(retain) NSMutableDictionary * incomingStreams;
@property(readonly) unsigned int newStreamOpenRequestID;
@property(readonly) unsigned int newStreamID;
@property int certificateDecision;


- (void)setState:(int)arg1;
- (int)state;
- (void)setCertificateDecision:(int)arg1;
- (int)certificateDecision;
- (void)setConnectPeerCalled:(BOOL)arg1;
- (BOOL)connectPeerCalled;
- (void)setNearbyConnectionData:(id)arg1;
- (id)nearbyConnectionData;
- (void)setOutgoingStreams:(id)arg1;
- (id)outgoingStreams;
- (void)setIncomingStreams:(id)arg1;
- (id)incomingStreams;
- (void)setOutgoingStreamRequests:(id)arg1;
- (id)outgoingStreamRequests;
- (unsigned int)newStreamOpenRequestID;
- (unsigned int)newStreamID;
- (id)initWithPeer:(id)arg1;
- (void)dealloc;
- (id)peerID;

@end
