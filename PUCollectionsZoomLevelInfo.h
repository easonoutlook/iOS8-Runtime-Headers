/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class NSMutableDictionary, PHFetchResult;

@interface PUCollectionsZoomLevelInfo : PUGridZoomLevelInfo <PUSectionedGridLayoutDelegate> {
    PHFetchResult *_collectionsFetchResult;
    NSMutableDictionary *_resultsForCollectionList;
}


- (int)imageFormat;
- (void).cxx_destruct;
- (id)displayTitle;
- (id)_collectionsFetchResult;
- (int)maxRowsPerSection;
- (id)momentsInCollectionList:(id)arg1;
- (id)initWithZoomLevel:(unsigned int)arg1 zoomLevelManager:(id)arg2 baseZoomLevelInfo:(id)arg3;
- (id)assetsToDisplayInMapForVisualSection:(int)arg1;
- (id)diagnosticsProviderForVisualSection:(int)arg1;
- (id)newCollectionViewLayout;
- (id)sectionedGridLayout:(id)arg1 sectionsForVisualSection:(int)arg2;
- (int)numberOfVisualSectionsForSectionedGridLayout:(id)arg1;
- (void)configureSectionHeaderView:(id)arg1 forVisualSection:(int)arg2;
- (id)renderedStripsElementKind;
- (BOOL)hasEnoughContentToDisplay;
- (void)updateLayoutMetricsForWidth:(float)arg1;
- (void)modelDidChange:(id)arg1;
- (BOOL)supportsIncrementalChangeNotifications;
- (id)sectionHeaderElementKind;
- (struct __CFString { }*)aggregateLevelKey;

@end
