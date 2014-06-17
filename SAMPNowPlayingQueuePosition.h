/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPNowPlayingQueuePosition : AceObject <SAAceSerializable> {
}

@property int index;
@property int queueSize;

+ (id)nowPlayingQueuePositionWithDictionary:(id)arg1 context:(id)arg2;
+ (id)nowPlayingQueuePosition;

- (void)setQueueSize:(int)arg1;
- (int)queueSize;
- (id)encodedClassName;
- (void)setIndex:(int)arg1;
- (int)index;
- (id)groupIdentifier;

@end
