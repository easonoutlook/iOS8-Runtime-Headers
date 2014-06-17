/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class CKRecordID, NSDictionary;

@interface CKQueryNotification : CKNotification <NSSecureCoding> {
    BOOL _isPublicDatabase;
    int _queryNotificationReason;
    NSDictionary *_recordFields;
    CKRecordID *_recordID;
}

@property int queryNotificationReason;
@property(copy) NSDictionary * recordFields;
@property(copy) CKRecordID * recordID;
@property BOOL isPublicDatabase;

+ (BOOL)supportsSecureCoding;

- (id)recordID;
- (void)setRecordID:(id)arg1;
- (id)CKPropertiesDescription;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (BOOL)isPublicDatabase;
- (id)recordFields;
- (int)queryNotificationReason;
- (void)setIsPublicDatabase:(BOOL)arg1;
- (void)setRecordFields:(id)arg1;
- (void)setQueryNotificationReason:(int)arg1;
- (id)initWithRemoteNotificationDictionary:(id)arg1;

@end
