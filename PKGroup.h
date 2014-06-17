/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class NSNumber, <PKGroupDelegate>, PKCatalogGroup, NSMutableDictionary;

@interface PKGroup : NSObject  {
    PKCatalogGroup *_catalogGroup;
    NSMutableDictionary *_passesByUniqueID;
    BOOL _local;
    <PKGroupDelegate> *_delegate;
    unsigned int _frontmostPassIndex;
}

@property <PKGroupDelegate> * delegate;
@property unsigned int frontmostPassIndex;
@property(readonly) NSNumber * groupID;
@property(getter=isLocal) BOOL local;


- (id)groupID;
- (void)setFrontmostPassIndex:(unsigned int)arg1;
- (unsigned int)frontmostPassIndex;
- (void)enumerateUniqueIDsWithHandler:(id)arg1;
- (BOOL)containsOnlyUniqueID:(id)arg1;
- (BOOL)containsPasses;
- (void)handleUserPassDelete:(id)arg1;
- (id)copyCatalogGroup;
- (void)updateWithCatalogGroup:(id)arg1 passes:(id)arg2 notify:(BOOL)arg3;
- (id)initWithCatalogGroup:(id)arg1 passes:(id)arg2;
- (unsigned int)indexForPassUniqueID:(id)arg1;
- (id)passAtIndex:(unsigned int)arg1;
- (unsigned int)passCount;
- (unsigned int)_indexOfUniqueID:(id)arg1;
- (void)_removeUniqueID:(id)arg1 notify:(BOOL)arg2;
- (void)_insertPass:(id)arg1 atIndex:(unsigned int)arg2 notify:(BOOL)arg3;
- (void)_moveUniqueID:(id)arg1 toIndex:(unsigned int)arg2 notify:(BOOL)arg3;
- (void)_updatePass:(id)arg1 notify:(BOOL)arg2;
- (id)passWithUniqueID:(id)arg1;
- (id)delegate;
- (void)setLocal:(BOOL)arg1;
- (BOOL)isLocal;
- (id)description;
- (void)dealloc;
- (void)setDelegate:(id)arg1;

@end