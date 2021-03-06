/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSError, NSMutableDictionary;

@interface CKDMMCSItemGroupSet : NSObject  {
    NSMutableDictionary *_itemsByGroupTuple;
}

@property(readonly) NSError * error;
@property(retain) NSMutableDictionary * itemsByGroupTuple;


- (id)error;
- (void)setItemsByGroupTuple:(id)arg1;
- (id)itemsByGroupTuple;
- (void)addItemToPut:(id)arg1;
- (id)allItemGroups;
- (id)initWithItemsToPut:(id)arg1;
- (id)CKPropertiesDescription;
- (void).cxx_destruct;
- (void)addItem:(id)arg1;
- (id)initWithItems:(id)arg1;
- (id)description;
- (id)init;

@end
