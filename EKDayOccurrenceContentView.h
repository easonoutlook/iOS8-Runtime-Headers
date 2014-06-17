/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class UIFont, NSIndexSet, NSString, UIColor, NSAttributedString;

@interface EKDayOccurrenceContentView : UIView  {
    NSString *_title;
    NSString *_location;
    UIColor *_color;
    UIColor *_titleTextColor;
    UIColor *_timeTextColor;
    UIColor *_secondaryTextColor;
    UIColor *_textBackgroundColor;
    UIColor *_statusTextColor;
    NSIndexSet *_titleMetrics;
    struct CGPoint { 
        float x; 
        float y; 
    } _titleEndPoint;
    float _textEndY;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _titleRect;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _fullTextRect;
    NSAttributedString *_attributedContentString;
    BOOL _usingSmallPrimaryFont;
    UIFont *_cachedPrimaryFont;
    float _cachedLineHeight;
    float _minimumCachedLineHeight;
    UIFont *_cachedSecondaryFont;
    float _cachedSecondaryLineHeight;
    BOOL _allDay;
    BOOL _birthday;
    BOOL _facebook;
    BOOL _cancelled;
    BOOL _tentative;
    BOOL _declined;
    BOOL _needsReply;
    BOOL _selected;
    BOOL _allDayDrawingStyle;
    BOOL _usesSmallText;
    BOOL _hideText;
    BOOL _reduceProcessingForAnimation;
    NSString *_time;
    int _occurrenceBackgroundStyle;
}

@property(copy) NSString * title;
@property(copy) NSString * time;
@property(copy) NSString * location;
@property(retain) UIColor * color;
@property(getter=isAllDay) BOOL allDay;
@property(getter=isBirthday) BOOL birthday;
@property(getter=isFacebook) BOOL facebook;
@property(getter=isCancelled) BOOL cancelled;
@property(getter=isTentative) BOOL tentative;
@property(getter=isDeclined) BOOL declined;
@property BOOL needsReply;
@property BOOL selected;
@property(getter=isAllDayDrawingStyle) BOOL allDayDrawingStyle;
@property BOOL usesSmallText;
@property(retain) UIColor * titleTextColor;
@property(retain) UIColor * timeTextColor;
@property(retain) UIColor * secondaryTextColor;
@property(retain) UIColor * textBackgroundColor;
@property BOOL hideText;
@property int occurrenceBackgroundStyle;
@property BOOL reduceProcessingForAnimation;

+ (Class)layerClass;
+ (id)defaultPrimaryTextFont;
+ (id)defaultSmallPrimaryTextFont;
+ (id)defaultSecondaryTextFont;

- (void)setLocation:(id)arg1;
- (id)stringDrawingContext;
- (void)setSecondaryTextColor:(id)arg1;
- (id)secondaryTextColor;
- (void)setBirthday:(BOOL)arg1;
- (id)initWithContentView:(id)arg1;
- (void).cxx_destruct;
- (BOOL)selected;
- (id)location;
- (void)displayLayer:(id)arg1;
- (id)time;
- (void)setTime:(id)arg1;
- (void)setColor:(id)arg1;
- (id)color;
- (BOOL)isCancelled;
- (void)setCancelled:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (id)title;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)setTitle:(id)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setNeedsDisplay;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)_statusTextFont;
- (id)attributedContentString;
- (float)_secondaryFontLineHeight;
- (id)attributedContentStringUnconstrained:(BOOL)arg1;
- (id)statusTextColor;
- (id)_secondaryTextFont;
- (id)_timeTextFont;
- (id)strikethroughColor;
- (float)_attributedStringMinimumLineHeightBasedOnCurrentFontMetrics;
- (id)_timeText;
- (id)_secondaryText;
- (id)_statusText;
- (float)_minimumPrimaryFontLineHeight;
- (id)_primaryTextFont;
- (float)_primaryFontLineHeight;
- (BOOL)reduceProcessingForAnimation;
- (void)_invalidateMetrics;
- (BOOL)isAllDayDrawingStyle;
- (float)minimumNaturalHeightAllText;
- (float)textNaturalWidth;
- (float)attributedStringMinimumLineHeight;
- (void)setReduceProcessingForAnimation:(BOOL)arg1;
- (id)textBackgroundColor;
- (id)timeTextColor;
- (id)titleTextColor;
- (void)invalidateCachedFontMetrics;
- (void)setFacebook:(BOOL)arg1;
- (BOOL)isBirthday;
- (void)setNeedsReply:(BOOL)arg1;
- (BOOL)needsReply;
- (void)setDeclined:(BOOL)arg1;
- (BOOL)isDeclined;
- (void)setTentative:(BOOL)arg1;
- (void)setHideText:(BOOL)arg1;
- (BOOL)hideText;
- (void)setAllDayDrawingStyle:(BOOL)arg1;
- (BOOL)hasIcon;
- (float)minimumNaturalHeightForPrimaryText;
- (void)_invalidateCachedFonts;
- (BOOL)usesSmallText;
- (void)setOccurrenceBackgroundStyle:(int)arg1;
- (int)occurrenceBackgroundStyle;
- (void)setTextBackgroundColor:(id)arg1;
- (void)setTimeTextColor:(id)arg1;
- (void)setTitleTextColor:(id)arg1;
- (void)setUsesSmallText:(BOOL)arg1;
- (BOOL)isFacebook;
- (BOOL)isTentative;
- (void)setAllDay:(BOOL)arg1;
- (BOOL)isAllDay;

@end
