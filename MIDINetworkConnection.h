/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreMIDI.framework/CoreMIDI
 */

@class MIDINetworkHost;

@interface MIDINetworkConnection : NSObject  {
    struct _MIDINetworkConnectionImpl { id x1; } *_impl;
}

@property(retain,readonly) MIDINetworkHost * host;

+ (id)connectionWithHost:(id)arg1;

- (id)host;
- (void)dealloc;
- (id)init;

@end
