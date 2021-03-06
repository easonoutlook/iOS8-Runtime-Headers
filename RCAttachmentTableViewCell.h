/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/RadarCompose.framework/RadarCompose
 */

@class UIImageView, UIView, UIButton, UILabel, UIActivityIndicatorView;

@interface RCAttachmentTableViewCell : UITableViewCell  {
    BOOL _singular;
    BOOL _checked;
    BOOL _isFilename;
    BOOL _busy;
    BOOL _canLog;
    BOOL _canPreview;
    UIImageView *_checkBox;
    UIButton *_disclosureIndicator;
    UIView *_accessorySpacer;
    UILabel *_mainLabel;
    UILabel *_minorLabel;
    UIActivityIndicatorView *_activityIndicator;
    int _numLogs;
}

@property(retain) UIImageView * checkBox;
@property(retain) UIButton * disclosureIndicator;
@property(retain) UIView * accessorySpacer;
@property(retain) UILabel * mainLabel;
@property(retain) UILabel * minorLabel;
@property(retain) UIActivityIndicatorView * activityIndicator;
@property int numLogs;
@property BOOL singular;
@property BOOL checked;
@property BOOL isFilename;
@property BOOL busy;
@property BOOL canLog;
@property BOOL canPreview;


- (BOOL)checked;
- (void)setCanPreview:(BOOL)arg1;
- (void)setSingular:(BOOL)arg1;
- (void)setNumLogs:(int)arg1;
- (void)setDisclosureIndicator:(id)arg1;
- (id)disclosureIndicator;
- (void)setUniqueFilename:(id)arg1;
- (int)numLogs;
- (id)accessorySpacer;
- (BOOL)canPreview;
- (BOOL)busy;
- (BOOL)isFilename;
- (BOOL)singular;
- (BOOL)canLog;
- (void)setCanLog:(BOOL)arg1;
- (void)setIsFilename:(BOOL)arg1;
- (void)setAccessorySpacer:(id)arg1;
- (id)minorLabel;
- (void)setMinorLabel:(id)arg1;
- (id)mainLabel;
- (void)setMainLabel:(id)arg1;
- (id)checkBox;
- (void)setCheckBox:(id)arg1;
- (void)setBusy:(BOOL)arg1;
- (id)activityIndicator;
- (void)setActivityIndicator:(id)arg1;
- (void).cxx_destruct;
- (void)setChecked:(BOOL)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;

@end
