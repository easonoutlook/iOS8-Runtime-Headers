/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class <ABGroupWrapperDelegate>, NSString, NSSet, ACAccountStore, ABGroupWrapper;

@interface ABGroupWrapper : NSObject  {
    void *_addressBook;
    NSString *_accountIdentifier;
    void *_source;
    void *_group;
    NSString *_cachedName;
    ACAccountStore *_accountStore;
    id _delegate;
    BOOL _shouldBeSelectedWhenAllChildrenAreSelected;
    BOOL _selected;
    NSSet *_childGroupWrappers;
    ABGroupWrapper *_parentGroupWrapper;
}

@property(readonly) NSString * accountIdentifier;
@property(readonly) NSString * name;
@property(readonly) void* addressBook;
@property(readonly) void* source;
@property(readonly) void* group;
@property(retain) NSSet * childGroupWrappers;
@property BOOL shouldBeSelectedWhenAllChildrenAreSelected;
@property ABGroupWrapper * parentGroupWrapper;
@property(getter=isSelected) BOOL selected;
@property <ABGroupWrapperDelegate> * delegate;
@property(readonly) int sourceType;
@property(retain) ACAccountStore * accountStore;
@property(readonly) NSString * _accountDescriptionBasedOnIdentifier;

+ (id)newGroupWrapperFromDictionaryRepresentation:(id)arg1 withAddressBook:(void*)arg2;
+ (id)newGroupWrappersWithAccountIdentifier:(id)arg1 addressBook:(void*)arg2 excludingSearchableStores:(BOOL)arg3;
+ (id)newGroupWrappersWithAccountIdentifier:(id)arg1 addressBook:(void*)arg2;
+ (id)newGroupWrappersWithAccountIdentifier:(id)arg1 addressBook:(void*)arg2 accountStore:(id)arg3;
+ (id)newGroupWrappersWithAccountIdentifier:(id)arg1 addressBook:(void*)arg2 accountStore:(id)arg3 excludingSearchableStores:(BOOL)arg4 isSoleAccount:(BOOL)arg5;

- (int)score;
- (void*)addressBook;
- (void)setAccountStore:(id)arg1;
- (id)accountIdentifier;
- (id)accountStore;
- (void*)group;
- (void*)source;
- (int)sourceType;
- (void)setSelected:(BOOL)arg1;
- (BOOL)isSelected;
- (id)delegate;
- (BOOL)isEqual:(id)arg1;
- (id)name;
- (id)description;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (BOOL)shouldBeSelectedWhenAllChildrenAreSelected;
- (id)childGroupWrappers;
- (BOOL)isContainerWrapper;
- (BOOL)showLinkedPeople;
- (id)_rootGroupWrapper;
- (void)setSelected:(BOOL)arg1 propagateSelectionToChildren:(BOOL)arg2;
- (void)childGroupWrapper:(id)arg1 didBecomeSelected:(BOOL)arg2;
- (id)_accountDescriptionBasedOnIdentifier;
- (id)initWithAddressBook:(void*)arg1 accountIdentifier:(id)arg2 source:(void*)arg3 group:(void*)arg4;
- (id)copyDictionaryRepresentation;
- (BOOL)isGlobalWrapper;
- (BOOL)toggleSelection;
- (int)compareToGroupWrapper:(id)arg1;
- (void)setShouldBeSelectedWhenAllChildrenAreSelected:(BOOL)arg1;
- (void)setChildGroupWrappers:(id)arg1;
- (void)setParentGroupWrapper:(id)arg1;
- (id)parentGroupWrapper;
- (BOOL)isDirectoryWrapper;

@end