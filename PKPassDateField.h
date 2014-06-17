/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPassDateField : PKPassField  {
    BOOL _isRelative;
    BOOL _ignoresTimeZone;
    int _dateStyle;
    int _timeStyle;
}

@property int dateStyle;
@property int timeStyle;
@property BOOL isRelative;
@property BOOL ignoresTimeZone;

+ (BOOL)supportsSecureCoding;

- (BOOL)ignoresTimeZone;
- (void)setIgnoresTimeZone:(BOOL)arg1;
- (void)setIsRelative:(BOOL)arg1;
- (BOOL)isRelative;
- (void)setTimeStyle:(int)arg1;
- (void)setDateStyle:(int)arg1;
- (id)value;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (int)timeStyle;
- (int)dateStyle;

@end
