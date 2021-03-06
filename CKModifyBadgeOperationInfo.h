/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKModifyBadgeOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {
    BOOL _thisDeviceOnly;
    unsigned int _badgeValue;
}

@property unsigned int badgeValue;
@property BOOL thisDeviceOnly;

+ (BOOL)supportsSecureCoding;

- (BOOL)thisDeviceOnly;
- (unsigned int)badgeValue;
- (void)setBadgeValue:(unsigned int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setThisDeviceOnly:(BOOL)arg1;

@end
