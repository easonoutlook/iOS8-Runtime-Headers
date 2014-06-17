/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@interface MinMaxIntFormatter : APFormatter  {
    int _minimum;
    int _maximum;
}

+ (id)formatterForMin:(int)arg1 max:(int)arg2;

- (id)initWithMin:(int)arg1 max:(int)arg2;
- (void)setMaximum:(int)arg1;
- (void)setMinimum:(int)arg1;
- (BOOL)isPartialStringValid:(id)arg1 newEditingString:(id*)arg2 errorDescription:(id*)arg3;
- (int)maximum;
- (int)minimum;

@end