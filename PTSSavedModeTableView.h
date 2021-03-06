/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@class _UISettings, NSString;

@interface PTSSavedModeTableView : UITableView <PTSHUDControl> {
    BOOL _enabled;
    _UISettings *_settings;
    NSString *_valueKeyPath;
    int _alignment;
}

@property _UISettings * settings;
@property(copy) NSString * valueKeyPath;
@property int alignment;
@property BOOL enabled;

+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })defaultFrame;

- (id)valueKeyPath;
- (void)setValueKeyPath:(id)arg1;
- (void).cxx_destruct;
- (void)setSettings:(id)arg1;
- (int)alignment;
- (void)setEnabled:(BOOL)arg1;
- (id)settings;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setAlignment:(int)arg1;
- (BOOL)enabled;

@end
