/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSLocale;

@interface MKDistanceFormatter : NSFormatter  {
    NSLocale *_locale;
    unsigned int _units;
    unsigned int _unitStyle;
}

@property(copy) NSLocale * locale;
@property unsigned int units;
@property unsigned int unitStyle;


- (void)setUnits:(unsigned int)arg1;
- (unsigned int)units;
- (BOOL)getObjectValue:(id*)arg1 forString:(id)arg2 errorDescription:(id*)arg3;
- (id)stringForObjectValue:(id)arg1;
- (void).cxx_destruct;
- (id)locale;
- (void)setLocale:(id)arg1;
- (id)description;
- (id)init;
- (double)distanceFromString:(id)arg1;
- (id)stringFromDistance:(double)arg1;
- (BOOL)_useMetric;
- (BOOL)isPartialStringValid:(id*)arg1 proposedSelectedRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2 originalString:(id)arg3 originalSelectedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4 errorDescription:(id*)arg5;
- (unsigned int)unitStyle;
- (void)setUnitStyle:(unsigned int)arg1;

@end