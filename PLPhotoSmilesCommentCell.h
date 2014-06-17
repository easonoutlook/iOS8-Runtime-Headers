/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSOrderedSet, UIButton, UILabel;

@interface PLPhotoSmilesCommentCell : UITableViewCell  {
    BOOL _showUserLikes;
    BOOL _isVideo;
    UILabel *_smileContentLabel;
    UIButton *_smileImageButton;
    NSOrderedSet *_userLikes;
}

@property(retain,readonly) UIButton * smileImageButton;
@property BOOL showUserLikes;
@property(copy) NSOrderedSet * userLikes;
@property BOOL isVideo;
@property(retain,readonly) UILabel * smileContentLabel;

+ (id)_attributedStringForComments:(id)arg1 color:(id)arg2 isVideo:(BOOL)arg3;
+ (id)_smileStringForComments:(id)arg1;
+ (float)heightOfSmileCellWithComments:(id)arg1 forWidth:(float)arg2 isVideo:(BOOL)arg3 forInterfaceOrientation:(int)arg4;

- (void)setIsVideo:(BOOL)arg1;
- (id)userLikes;
- (BOOL)showUserLikes;
- (id)smileContentLabel;
- (void)_updateContent;
- (void)setUserLikes:(id)arg1;
- (void)setShowUserLikes:(BOOL)arg1;
- (id)smileImageButton;
- (BOOL)isVideo;
- (void)prepareForReuse;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)dealloc;

@end
