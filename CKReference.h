/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class CKRecordID;

@interface CKReference : NSObject <CKRecordValue, NSSecureCoding, NSCopying> {
    unsigned int _referenceAction;
    CKRecordID *_recordID;
}

@property(readonly) unsigned int referenceAction;
@property(copy) CKRecordID * recordID;

+ (BOOL)supportsSecureCoding;
+ (id)weakStructureRefForItemID:(id)arg1 zoneName:(id)arg2 forType:(BOOL)arg3;
+ (id)parentStructureRefForItemID:(id)arg1 zoneName:(id)arg2;

- (id)recordID;
- (void)setRecordID:(id)arg1;
- (id)_initBare;
- (unsigned int)referenceAction;
- (id)ckShortDescription;
- (id)CKPropertiesDescription;
- (id)initWithRecordID:(id)arg1 action:(unsigned int)arg2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)init;
- (id)initWithRecord:(id)arg1 action:(unsigned int)arg2;

@end