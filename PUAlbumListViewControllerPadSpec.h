/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUAlbumListViewControllerPadSpec : PUAlbumListViewControllerSpec  {
}


- (float)sectionFooterHeight;
- (float)sectionHeaderHeight;
- (id)feedViewControllerSpec;
- (id)panoramaViewControllerSpec;
- (id)gridViewControllerSpec;
- (int)albumDeletionConfirmationStyle;
- (BOOL)shouldUseCollageForCloudFeedPlaceholder;
- (BOOL)usesStackTransitionToGrid;
- (int)cellContentViewLayout;
- (BOOL)showsDeleteButtonOnCellContentView;
- (BOOL)allowsAlbumCountSubtitle;
- (float)collageSpacing;
- (int)collageQualityImageFormat;
- (int)collageFastImageFormat;
- (struct UIOffset { float x1; float x2; })stackPerspectiveOffset;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })stackPerspectiveInsets;
- (struct UIOffset { float x1; float x2; })stackOffset;
- (id)emptyStackPhotoDecoration;
- (id)stackPhotoDecoration;
- (unsigned int)stackViewStyle;
- (int)qualityImageFormat;
- (int)fastImageFormat;
- (BOOL)displaysSearchInPopover;
- (struct CGSize { float x1; float x2; })cellSizeForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)configureStackViewWithGridStyle:(id)arg1;
- (id)_nameOfAddSharedAlbumPlaceholderImage;
- (id)_nameOfEmptySharedAlbumPlaceholderImage;
- (struct CGSize { float x1; float x2; })stackSize;
- (id)_nameOfEmptyAlbumPlaceholderImage;
- (id)photosPickerViewControllerSpec;
- (BOOL)canDisplaySearchActionInNavigationBar;
- (float)maxSearchBarWidth;

@end
