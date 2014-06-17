/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class <TSCHStyleOwning>, NSDictionary;

@interface TSCHPropertyMutationTuple : NSObject  {
    <TSCHStyleOwning> *mStyleOwner;
    NSDictionary *mMutations;
}

@property(readonly) <TSCHStyleOwning> * styleOwner;
@property(readonly) NSDictionary * mutations;


- (id)mutations;
- (id)description;
- (void)dealloc;
- (id)indirectTuple;
- (id)styleOwnerRef;
- (id)styleOwner;
- (id)initWithStyleOwner:(id)arg1 mutationMap:(id)arg2;
- (id)initWithStyleOwner:(id)arg1 mutations:(id)arg2;

@end