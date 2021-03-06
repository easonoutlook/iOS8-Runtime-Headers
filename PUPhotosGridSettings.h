/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotosGridSettings : PUSettings  {
    BOOL _badgeAllItemsAsVideos;
    BOOL _displayAllItemsAsBursts;
    BOOL _forceJPEGThumbnailsInDefaultGrid;
    float _defaultItemSideSize;
    float _minimumSpacing;
    float _maximumSpacing;
    float _sideMargins;
    int _numberColumnsInDefaultGrid;
    int _numberOfColumnsInWideGrid;
}

@property float defaultItemSideSize;
@property float minimumSpacing;
@property float maximumSpacing;
@property float sideMargins;
@property BOOL badgeAllItemsAsVideos;
@property BOOL displayAllItemsAsBursts;
@property BOOL forceJPEGThumbnailsInDefaultGrid;
@property int numberColumnsInDefaultGrid;
@property int numberOfColumnsInWideGrid;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (void)setDefaultValues;
- (int)numberOfColumnsInWideGrid;
- (int)numberColumnsInDefaultGrid;
- (BOOL)forceJPEGThumbnailsInDefaultGrid;
- (float)sideMargins;
- (float)maximumSpacing;
- (float)minimumSpacing;
- (float)defaultItemSideSize;
- (void)setNumberOfColumnsInWideGrid:(int)arg1;
- (void)setNumberColumnsInDefaultGrid:(int)arg1;
- (void)setForceJPEGThumbnailsInDefaultGrid:(BOOL)arg1;
- (void)setDisplayAllItemsAsBursts:(BOOL)arg1;
- (void)setBadgeAllItemsAsVideos:(BOOL)arg1;
- (void)setSideMargins:(float)arg1;
- (void)setMaximumSpacing:(float)arg1;
- (void)setMinimumSpacing:(float)arg1;
- (void)setDefaultItemSideSize:(float)arg1;
- (BOOL)badgeAllItemsAsVideos;
- (BOOL)displayAllItemsAsBursts;

@end
