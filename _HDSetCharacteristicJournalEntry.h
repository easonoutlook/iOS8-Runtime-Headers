/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@class HKCharacteristicType;

@interface _HDSetCharacteristicJournalEntry : NSObject <HDJournalEntry, NSSecureCoding> {
    id _value;
    HKCharacteristicType *_dataType;
}

@property(readonly) id value;
@property(readonly) HKCharacteristicType * dataType;

+ (BOOL)supportsSecureCoding;

- (id)initWithValue:(id)arg1 dataType:(id)arg2;
- (BOOL)applyWithDaemon:(id)arg1;
- (void).cxx_destruct;
- (id)value;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dataType;

@end
