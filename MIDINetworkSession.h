/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreMIDI.framework/CoreMIDI
 */

@class NSString;

@interface MIDINetworkSession : NSObject  {
    struct _MIDINetworkSessionImpl { struct OpaqueMIDIEntity {} *x1; struct OpaqueMIDIEndpoint {} *x2; struct OpaqueMIDIEndpoint {} *x3; id x4; id x5; struct ContactOrConnectionSet { boolx_6_1_1; id x_6_1_2; } x6; } *_impl;
}

@property(getter=isEnabled) BOOL enabled;
@property(readonly) unsigned int networkPort;
@property(readonly) NSString * networkName;
@property(readonly) NSString * localName;
@property unsigned int connectionPolicy;

+ (id)defaultSession;

- (id)localName;
- (void)setConnectionPolicy:(unsigned int)arg1;
- (unsigned int)connectionPolicy;
- (id)networkName;
- (BOOL)isEnabled;
- (void)setEnabled:(BOOL)arg1;
- (void)dealloc;
- (id)init;
- (struct OpaqueMIDIEndpoint { }*)destinationEndpoint;
- (struct OpaqueMIDIEndpoint { }*)sourceEndpoint;
- (void)contactsChanged;
- (void)sessionChanged;
- (BOOL)removeContact:(id)arg1;
- (BOOL)addContact:(id)arg1;
- (unsigned int)networkPort;
- (BOOL)addOrRemoveConnection:(id)arg1 add:(BOOL)arg2;
- (void)refreshBonjourName;
- (void)updateFromEntity;
- (void)setStateToEntity;
- (id)connections;
- (id)contacts;
- (BOOL)addConnection:(id)arg1;
- (BOOL)removeConnection:(id)arg1;

@end
