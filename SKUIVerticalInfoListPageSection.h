/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIViewElementLayoutContext, NSMutableArray, SKUIInfoListViewElement;

@interface SKUIVerticalInfoListPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate> {
    SKUIViewElementLayoutContext *_cellLayoutContext;
    float _columnHeight;
    NSMutableArray *_columns;
    float _columnWidth;
    SKUIInfoListViewElement *_infoList;
    int _numberOfColumns;
}


- (int)_numberOfColumnsForWidth:(float)arg1;
- (void)_requestCellLayout;
- (void)_enumerateVisibleIndexPathsUsingBlock:(id)arg1;
- (id)_reloadColumnDataIfNecessary;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_contentInsetForIndexPath:(id)arg1;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (id)backgroundColorForIndexPath:(id)arg1;
- (void)reloadVisibleCells;
- (void)willTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;
- (int)numberOfCells;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize { float x1; float x2; })cellSizeForIndexPath:(id)arg1;
- (void)willAppearInContext:(id)arg1;
- (id)initWithPageComponent:(id)arg1;
- (void).cxx_destruct;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })sectionContentInset;

@end
