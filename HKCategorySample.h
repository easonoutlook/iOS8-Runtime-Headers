/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@class HKCategoryType;

@interface HKCategorySample : HKSample  {
    int _value;
}

@property(readonly) HKCategoryType * categoryType;
@property(readonly) int value;

+ (BOOL)supportsSecureCoding;
+ (id)categorySampleWithType:(id)arg1 value:(int)arg2 startDate:(id)arg3 endDate:(id)arg4;
+ (id)categorySampleWithType:(id)arg1 value:(int)arg2 startDate:(id)arg3 endDate:(id)arg4 metadata:(id)arg5;

- (void)_setValue:(int)arg1;
- (id)categoryType;
- (int)value;
- (void)validate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)_valueDescription;

@end
