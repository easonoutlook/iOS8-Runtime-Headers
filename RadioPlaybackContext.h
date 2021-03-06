/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@class NSArray;

@interface RadioPlaybackContext : NSObject <NSCopying, NSMutableCopying> {
    int _numberOfSkipsUsed;
    NSArray *_trackPlaybackDescriptorQueue;
}

@property(readonly) int numberOfSkipsUsed;
@property(copy,readonly) NSArray * trackPlaybackDescriptorQueue;


- (id)trackPlaybackDescriptorQueue;
- (int)numberOfSkipsUsed;
- (id)playbackContextDictionary;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
