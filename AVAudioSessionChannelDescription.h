/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@class NSString;

@interface AVAudioSessionChannelDescription : NSObject  {
    void *_impl;
}

@property(readonly) NSString * channelName;
@property(readonly) NSString * owningPortUID;
@property(readonly) unsigned int channelNumber;
@property(readonly) unsigned long channelLabel;

+ (id)privateCreateArray:(id)arg1 portUID:(id)arg2;
+ (id)privateCreate:(id)arg1 portUID:(id)arg2 channelNumber:(unsigned long)arg3;

- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;
- (unsigned long)channelLabel;
- (id)channelName;
- (BOOL)isEqualToChannel:(id)arg1;
- (struct ChannelDescriptionImpl { id x1; id x2; unsigned int x3; unsigned int x4; }*)privateGetImplementation;
- (unsigned int)channelNumber;
- (id)owningPortUID;

@end
