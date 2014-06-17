/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UIImageView, SKUIDownloadsCellView;

@interface SKUIDownloadsCollectionViewCell : UICollectionViewCell  {
    SKUIDownloadsCellView *_cellView;
    UIImageView *_editIndicator;
    int _cellState;
}

@property(readonly) SKUIDownloadsCellView * cellView;
@property int cellState;


- (int)cellState;
- (void)_reloadEditState;
- (void)setCellState:(int)arg1;
- (id)cellView;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
