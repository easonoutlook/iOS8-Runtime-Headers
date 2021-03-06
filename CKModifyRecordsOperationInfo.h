/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class NSDictionary, NSData, NSArray;

@interface CKModifyRecordsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {
    BOOL _shouldOnlySaveAssetContent;
    NSArray *_recordsToSave;
    NSArray *_recordIDsToDelete;
    NSData *_clientChangeTokenData;
    int _savePolicy;
    NSDictionary *_recordIDsToDeleteToEtags;
}

@property(retain) NSArray * recordsToSave;
@property(retain) NSArray * recordIDsToDelete;
@property(retain) NSData * clientChangeTokenData;
@property int savePolicy;
@property BOOL shouldOnlySaveAssetContent;
@property(copy) NSDictionary * recordIDsToDeleteToEtags;

+ (BOOL)supportsSecureCoding;

- (void)setRecordIDsToDelete:(id)arg1;
- (BOOL)shouldOnlySaveAssetContent;
- (id)clientChangeTokenData;
- (int)savePolicy;
- (id)recordIDsToDeleteToEtags;
- (id)recordIDsToDelete;
- (id)recordsToSave;
- (void)setShouldOnlySaveAssetContent:(BOOL)arg1;
- (void)setClientChangeTokenData:(id)arg1;
- (void)setSavePolicy:(int)arg1;
- (void)setRecordIDsToDeleteToEtags:(id)arg1;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setRecordsToSave:(id)arg1;

@end
