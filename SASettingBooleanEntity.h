/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSNumber;

@interface SASettingBooleanEntity : SASettingEntity  {
}

@property(copy) NSNumber * previousValue;
@property BOOL value;

+ (id)booleanEntityWithValue:(BOOL)arg1;
+ (id)booleanEntityWithDictionary:(id)arg1 context:(id)arg2;
+ (id)booleanEntity;

- (void)setPreviousValue:(id)arg1;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
- (id)encodedClassName;
- (id)previousValue;
- (BOOL)value;
- (void)setValue:(BOOL)arg1;
- (id)groupIdentifier;
- (id)initWithValue:(BOOL)arg1;

@end
