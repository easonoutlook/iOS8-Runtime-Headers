/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class CKContainerID, NSObject<NSSecureCoding><NSCopying>;

@interface CKSharedItemID : NSObject <NSSecureCoding, NSCopying> {
    int _itemType;
    int _scope;
    CKContainerID *_containerID;
    NSObject<NSSecureCoding><NSCopying> *_itemIdentifier;
}

@property int itemType;
@property int scope;
@property(copy) CKContainerID * containerID;
@property(copy) NSObject<NSSecureCoding><NSCopying> * itemIdentifier;

+ (BOOL)supportsSecureCoding;

- (void)setScope:(int)arg1;
- (int)scope;
- (void)setItemIdentifier:(id)arg1;
- (id)recordID;
- (int)itemType;
- (void)setItemType:(int)arg1;
- (id)itemIdentifier;
- (id)_itemTypeDescription;
- (id)initWithItemType:(int)arg1 itemIdentifier:(id)arg2 containerID:(id)arg3;
- (id)commentIdentifier;
- (id)shareID;
- (id)ckShortDescription;
- (id)CKPropertiesDescription;
- (void)setContainerID:(id)arg1;
- (id)zoneID;
- (id)containerID;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)init;
- (id)UIDocumentIdentifier;
- (id)initWithItemType:(int)arg1 itemIdentifier:(id)arg2;
- (void)CKAssignToContainerWithID:(id)arg1;

@end
