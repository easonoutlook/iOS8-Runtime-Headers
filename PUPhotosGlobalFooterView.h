/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class NSString, PLSyncProgressView, UILabel;

@interface PUPhotosGlobalFooterView : UICollectionReusableView  {
    unsigned int _imageCount;
    unsigned int _videoCount;
    unsigned int _otherCount;
    unsigned int _pendingCount;
    int _importOperation;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    PLSyncProgressView *_syncProgressView;
    int _style;
    NSString *_subtitle;
}

@property int style;
@property(retain) NSString * subtitle;


- (void).cxx_destruct;
- (void)setSubtitle:(id)arg1;
- (id)subtitle;
- (void)setStyle:(int)arg1;
- (int)style;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;
- (void)_updateSubviews;
- (void)setImageCount:(unsigned int)arg1 videoCount:(unsigned int)arg2 otherCount:(unsigned int)arg3;
- (void)setPendingCount:(unsigned int)arg1 importOperation:(int)arg2;

@end