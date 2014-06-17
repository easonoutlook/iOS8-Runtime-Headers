/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class CKShareID, NSArray;

@interface CKFetchLikesOperationInfo : CKOperationInfo  {
    NSArray *_itemIDs;
    CKShareID *_shareID;
    unsigned int _resultsLimit;
}

@property(retain) NSArray * itemIDs;
@property(retain) CKShareID * shareID;
@property unsigned int resultsLimit;

+ (BOOL)supportsSecureCoding;

- (void)setItemIDs:(id)arg1;
- (id)itemIDs;
- (void)setShareID:(id)arg1;
- (id)shareID;
- (unsigned int)resultsLimit;
- (void)setResultsLimit:(unsigned int)arg1;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end