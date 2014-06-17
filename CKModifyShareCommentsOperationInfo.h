/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class CKShareID, NSArray;

@interface CKModifyShareCommentsOperationInfo : CKOperationInfo  {
    CKShareID *_shareID;
    NSArray *_commentsToSave;
    NSArray *_commentIDsToDelete;
}

@property(retain) CKShareID * shareID;
@property(retain) NSArray * commentsToSave;
@property(retain) NSArray * commentIDsToDelete;

+ (BOOL)supportsSecureCoding;

- (void)setCommentIDsToDelete:(id)arg1;
- (void)setCommentsToSave:(id)arg1;
- (id)commentIDsToDelete;
- (id)commentsToSave;
- (void)setShareID:(id)arg1;
- (id)shareID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
