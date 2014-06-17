/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPMediaQuery, NSArray;

@interface MPQueryPlaybackContext : MPPlaybackContext  {
    NSArray *_prefixMediaItems;
    MPMediaQuery *_query;
    unsigned int _startIndex;
}

@property(copy) NSArray * prefixMediaItems;
@property(readonly) MPMediaQuery * query;
@property unsigned int startIndex;


- (id)initWithQuery:(id)arg1;
- (void).cxx_destruct;
- (id)query;
- (void)setStartIndex:(unsigned int)arg1;
- (unsigned int)startIndex;
- (void)setPrefixMediaItems:(id)arg1;
- (id)prefixMediaItems;

@end
