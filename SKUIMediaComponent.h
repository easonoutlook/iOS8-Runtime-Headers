/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIArtworkList, NSString, SKUILink;

@interface SKUIMediaComponent : SKUIPageComponent <SSMetricsEventFieldProvider> {
    NSString *_accessibilityLabel;
    int _alignment;
    double _duration;
    SKUILink *_link;
    int _mediaAppearance;
    long long _mediaIdentifier;
    int _mediaType;
    NSString *_mediaURLString;
    SKUIArtworkList *_thumbnailArtworkList;
    NSString *_title;
    float _titleFontSize;
    int _titleFontWeight;
}

@property(readonly) NSString * accessibilityLabel;
@property(readonly) int alignment;
@property(readonly) double duration;
@property(readonly) SKUILink * link;
@property(readonly) long long mediaIdentifier;
@property(readonly) int mediaAppearance;
@property(readonly) int mediaType;
@property(readonly) NSString * mediaURLString;
@property(readonly) SKUIArtworkList * thumbnailArtworkList;
@property(readonly) NSString * title;
@property(readonly) float titleFontSize;
@property(readonly) int titleFontWeight;


- (int)titleFontWeight;
- (float)titleFontSize;
- (id)initWithArtworkList:(id)arg1;
- (id)initWithArtwork:(id)arg1;
- (id)thumbnailArtworkList;
- (id)bestThumbnailArtwork;
- (int)mediaAppearance;
- (id)bestThumbnailForWidth:(float)arg1;
- (id)initWithArtworkList:(id)arg1 appearance:(int)arg2;
- (id)mediaURLString;
- (long long)mediaIdentifier;
- (id)metricsElementName;
- (id)initWithFeaturedContentContext:(id)arg1 kind:(int)arg2;
- (id)valueForMetricsField:(id)arg1;
- (int)componentType;
- (id)initWithCustomPageContext:(id)arg1;
- (int)mediaType;
- (id)link;
- (void).cxx_destruct;
- (int)alignment;
- (id)accessibilityLabel;
- (id)title;
- (double)duration;

@end