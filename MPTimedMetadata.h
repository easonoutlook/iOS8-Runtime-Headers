/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class AVMetadataItem, NSString, NSDictionary;

@interface MPTimedMetadata : NSObject  {
    AVMetadataItem *_metadataItem;
}

@property(readonly) NSString * key;
@property(readonly) NSString * keyspace;
@property(readonly) id value;
@property(readonly) double timestamp;
@property(readonly) NSDictionary * allMetadata;


- (void).cxx_destruct;
- (id)key;
- (id)value;
- (double)timestamp;
- (id)init;
- (id)allMetadata;
- (id)keyspace;
- (id)_initWithMetadataItem:(id)arg1;

@end