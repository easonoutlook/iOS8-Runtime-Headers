/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKCurrentTimeMarkerView, UIView, UIColor, UIImageView, NSMutableArray;

@interface EKDayGridView : UIView <EKCurrentTimeMarkerViewUpdating> {
    float _timeInset;
    float _hourHeight;
    float _timeWidth;
    unsigned int _leftBorder : 1;
    unsigned int _rightBorder : 1;
    int _selected;
    float _fixedDayWidth;
    int _orientation;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _lastBounds;
    UIColor *_backgroundColor;
    UIView *_leftBorderView;
    NSMutableArray *_middleBorderViews;
    UIView *_rightBorderView;
    NSMutableArray *_gridPatternViews;
    unsigned int _daysToDisplay;
    EKCurrentTimeMarkerView *_timeMarker;
    UIImageView *_timeDot;
    BOOL _rightBorderInsetsOccurrences;
    BOOL _showsTimeLine;
    BOOL _showsTimeMarker;
    BOOL _usesVibrantGridDrawing;
    UIColor *_lineColor;
    int _timeMarkerDotDay;
    float _eventHorizontalInset;
    float _hoursToPadTop;
    float _hoursToPadBottom;
    float _gridHeightScale;
}

@property BOOL showsLeftBorder;
@property BOOL showsRightBorder;
@property BOOL rightBorderInsetsOccurrences;
@property BOOL showsTimeLine;
@property BOOL showsTimeMarker;
@property int timeMarkerDotDay;
@property float fixedDayWidth;
@property float eventHorizontalInset;
@property float hoursToPadTop;
@property float hoursToPadBottom;
@property(getter=isSelected) BOOL selected;
@property(retain) UIColor * lineColor;
@property BOOL usesVibrantGridDrawing;
@property(readonly) EKCurrentTimeMarkerView * timeMarker;
@property(readonly) float timeWidth;
@property(readonly) float timeInset;
@property(readonly) float topPadding;
@property(readonly) float hourHeight;
@property(readonly) float widthForOccurrences;
@property float gridHeightScale;

+ (void)cacheBackgroundImage:(id)arg1 forKey:(id)arg2;
+ (id)cachedBackgroundImageForKey:(id)arg1;

- (void)setLineColor:(id)arg1;
- (id)lineColor;
- (void).cxx_destruct;
- (void)setOrientation:(int)arg1;
- (void)setSelected:(BOOL)arg1;
- (BOOL)isSelected;
- (void)tintColorDidChange;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;
- (void)addSubview:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)gridHeightScale;
- (void)setHoursToPadBottom:(float)arg1;
- (float)hoursToPadBottom;
- (float)hoursToPadTop;
- (void)setEventHorizontalInset:(float)arg1;
- (void)setRightBorderInsetsOccurrences:(BOOL)arg1;
- (BOOL)rightBorderInsetsOccurrences;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForStartSeconds:(int)arg1 endSeconds:(int)arg2;
- (void)setTimeMarkerDotDay:(int)arg1;
- (float)timeInset;
- (id)_generateGridImage;
- (void)_updateTimeMarker;
- (id)timeDotImage;
- (float)eventHorizontalInset;
- (int)timeMarkerDotDay;
- (BOOL)showsRightBorder;
- (BOOL)usesVibrantGridDrawing;
- (void)setGridHeightScale:(float)arg1;
- (void)setUsesVibrantGridDrawing:(BOOL)arg1;
- (void)setShowsRightBorder:(BOOL)arg1;
- (BOOL)showsTimeMarker;
- (id)timeMarker;
- (void)setShowsTimeLine:(BOOL)arg1;
- (void)updateMarkerPosition;
- (BOOL)showsTimeLine;
- (void)setShowsTimeMarker:(BOOL)arg1;
- (float)timeWidth;
- (float)hourHeight;
- (float)fixedDayWidth;
- (int)secondAtPosition:(float)arg1;
- (float)widthForOccurrences;
- (float)_dayWidth;
- (float)positionOfSecond:(int)arg1;
- (void)setHoursToPadTop:(float)arg1;
- (void)setFixedDayWidth:(float)arg1;
- (BOOL)showsLeftBorder;
- (void)setShowsLeftBorder:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 backgroundColor:(id)arg2 opaque:(BOOL)arg3 numberOfDaysToDisplay:(unsigned int)arg4;
- (float)bottomPadding;
- (float)topPadding;

@end
