/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSNumber, NSString, NSArray;

@interface SAAlarmObject : SADomainObject  {
}

@property(copy) NSNumber * enabled;
@property(copy) NSArray * frequency;
@property(copy) NSNumber * hour;
@property(copy) NSString * label;
@property(copy) NSNumber * minute;
@property(copy) NSNumber * relativeOffsetMinutes;

+ (id)objectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)object;

- (void)setRelativeOffsetMinutes:(id)arg1;
- (id)relativeOffsetMinutes;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
- (id)encodedClassName;
- (void)setMinute:(id)arg1;
- (id)minute;
- (id)hour;
- (void)setHour:(id)arg1;
- (void)setFrequency:(id)arg1;
- (id)frequency;
- (void)setLabel:(id)arg1;
- (id)label;
- (void)setEnabled:(id)arg1;
- (id)enabled;
- (id)groupIdentifier;

@end
