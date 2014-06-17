/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/RadarCompose.framework/RadarCompose
 */

@class UIImage;

@interface RCAttachmentImage : RCAttachmentItem  {
    UIImage *_thumbnail;
}

@property(retain) UIImage * thumbnail;

+ (id)newAttachmentImageWithAssetURL:(id)arg1 andThumbnail:(id)arg2;
+ (id)newAttachmentImageWithURL:(id)arg1;

- (id)generateThumbnailFromURL:(id)arg1;
- (void)setThumbnail:(id)arg1;
- (id)thumbnail;
- (void).cxx_destruct;

@end