/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class NSArray;

@interface CKDiscoverUserInfosOperationInfo : CKOperationInfo <NSSecureCoding> {
    BOOL _shouldDiscoverAllContacts;
    NSArray *_emails;
    NSArray *_userRecordIDs;
}

@property(retain) NSArray * emails;
@property(retain) NSArray * userRecordIDs;
@property BOOL shouldDiscoverAllContacts;

+ (BOOL)supportsSecureCoding;

- (void)setEmails:(id)arg1;
- (id)emails;
- (id)userRecordIDs;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)shouldDiscoverAllContacts;
- (void)setShouldDiscoverAllContacts:(BOOL)arg1;
- (void)setUserRecordIDs:(id)arg1;

@end
