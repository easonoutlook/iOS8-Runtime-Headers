/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface HSNowPlayingArtworkRequest : HSRequest  {
    unsigned int _interfaceID;
    unsigned int _playQueueIndex;
    struct CGSize { 
        float width; 
        float height; 
    } _maximumSize;
}

@property(readonly) unsigned int interfaceID;
@property(readonly) struct CGSize { float x1; float x2; } maximumSize;
@property(readonly) unsigned int playQueueIndex;


- (unsigned int)playQueueIndex;
- (unsigned int)interfaceID;
- (id)initWithInterfaceID:(unsigned int)arg1 maximumSize:(struct CGSize { float x1; float x2; })arg2 playQueueIndex:(unsigned int)arg3;
- (id)canonicalResponseForResponse:(id)arg1;
- (struct CGSize { float x1; float x2; })maximumSize;

@end
