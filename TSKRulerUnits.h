/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSFormatter;

@interface TSKRulerUnits : NSObject  {
    int _rulerUnits;
    BOOL _showRulerAsPercentage;
    BOOL _centerRulerOrigin;
    int _preferredPixelUnit;
    NSFormatter *_formatter;
    NSFormatter *_lenientFormatter;
    NSFormatter *_highPrecisionFormatter;
    NSFormatter *_lenientHighPrecisionFormatter;
}

@property int rulerUnits;
@property BOOL showRulerAsPercentage;
@property BOOL centerRulerOrigin;
@property int preferredPixelUnit;

+ (id)instance;
+ (id)formatterForRulerUnits:(int)arg1 decimalPlaces:(int)arg2 trailingZeros:(BOOL)arg3 lenient:(BOOL)arg4;

- (void)dealloc;
- (id)init;
- (void)setPreferredPixelUnit:(int)arg1;
- (int)preferredPixelUnit;
- (BOOL)showRulerAsPercentage;
- (int)rulerUnits;
- (id)localizedCompatibleRulerUnits;
- (id)compatibleRulerUnits;
- (float)convertRulerUnitsToPoints:(float)arg1;
- (void)setCenterRulerOrigin:(BOOL)arg1;
- (void)setShowRulerAsPercentage:(BOOL)arg1;
- (void)setRulerUnits:(int)arg1;
- (float)convertPointsToRulerUnits:(float)arg1;
- (BOOL)centerRulerOrigin;
- (id)formatter:(BOOL)arg1 lenient:(BOOL)arg2;

@end
