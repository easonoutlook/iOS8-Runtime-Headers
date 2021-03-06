/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@class GKLabel;

@interface GKRemoteUIHeaderView : UIView <RemoteUITableHeader> {
    BOOL _isFirstSection;
    GKLabel *_textLabel;
    float _height;
    float _bottomMargin;
}

@property BOOL isFirstSection;
@property(retain) GKLabel * textLabel;
@property float height;
@property float bottomMargin;


- (id)initWithAttributes:(id)arg1;
- (void)setBottomMargin:(float)arg1;
- (float)bottomMargin;
- (void)setIsFirstSection:(BOOL)arg1;
- (BOOL)isFirstSection;
- (float)headerHeightForWidth:(float)arg1 inTableView:(id)arg2;
- (void)setSectionIsFirst:(BOOL)arg1;
- (void)setTextLabel:(id)arg1;
- (void)setHeight:(float)arg1;
- (float)height;
- (id)textLabel;
- (void)dealloc;

@end
