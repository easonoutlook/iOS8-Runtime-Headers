/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMHandleRegistrar : NSObject  {
    id _internal;
}

@property int nameStyle;

+ (id)sharedInstance;

- (void)_dumpOutAllIMHandles;
- (void)imHandleInfoChanged:(id)arg1;
- (void)reassessIMHandleForUniqueName:(id)arg1;
- (void)setNameStyle:(int)arg1;
- (void)_addressBookChanged;
- (void)reassessIMHandleForUniqueName:(id)arg1 rebuild:(BOOL)arg2;
- (id)candidateUniqueNamesForIMHandle:(id)arg1;
- (void)rebuildUniqueNameMap;
- (void)clearNameReservationsForObject:(id)arg1;
- (void)_clearSiblingsCacheForIMHandle:(id)arg1 rebuildAfter:(BOOL)arg2;
- (void)_buildSiblingsForIMHandle:(id)arg1;
- (void)_emptySiblingCacheForIMHandleGUID:(id)arg1;
- (void)_rebuildUniqueNameMapWithStyleChange:(BOOL)arg1;
- (void)_accountsChanged:(id)arg1;
- (id)allIMHandles;
- (id)siblingsForIMHandle:(id)arg1;
- (id)_chatSiblingsForHandle:(id)arg1;
- (id)_existingChatSiblingsForHandle:(id)arg1;
- (id)_accountSiblingsForHandle:(id)arg1;
- (id)_existingAccountSiblingsForHandle:(id)arg1;
- (int)nameStyle;
- (BOOL)_buildingChatSiblings;
- (void)_clearChatSiblingsForGUID:(id)arg1 handle:(id)arg2;
- (void)_clearAccountSiblingsForGUID:(id)arg1 handle:(id)arg2;
- (void)unregisterIMHandle:(id)arg1;
- (void)registerIMHandle:(id)arg1;
- (void)clearSiblingCacheForIMHandle:(id)arg1;
- (void)_dumpOutAllIMHandlesForAccount:(id)arg1;
- (void)dealloc;
- (id)init;

@end
