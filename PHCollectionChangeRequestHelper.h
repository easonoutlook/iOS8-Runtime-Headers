/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class PHChangeRequestHelper, NSArray, NSString, NSMutableArray;

@interface PHCollectionChangeRequestHelper : NSObject  {
    BOOL _allowsInsert;
    BOOL _allowsMove;
    BOOL _allowsRemove;
    NSString *_relationshipName;
    NSString *_destinationEntityName;
    NSArray *_originalObjectIDs;
    NSMutableArray *_mutableObjectIDsAndUUIDs;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _isDestinationObjectValid;

    PHChangeRequestHelper *_changeRequestHelper;
}

@property(readonly) NSString * relationshipName;
@property(retain) NSString * destinationEntityName;
@property BOOL allowsInsert;
@property BOOL allowsMove;
@property BOOL allowsRemove;
@property(retain) NSArray * originalObjectIDs;
@property(retain) NSMutableArray * mutableObjectIDsAndUUIDs;
@property(copy) id isDestinationObjectValid;
@property(retain) PHChangeRequestHelper * changeRequestHelper;


- (void).cxx_destruct;
- (void)setChangeRequestHelper:(id)arg1;
- (id)changeRequestHelper;
- (void)setIsDestinationObjectValid:(id)arg1;
- (void)setMutableObjectIDsAndUUIDs:(id)arg1;
- (id)mutableObjectIDsAndUUIDs;
- (void)setOriginalObjectIDs:(id)arg1;
- (id)originalObjectIDs;
- (void)setAllowsRemove:(BOOL)arg1;
- (void)setAllowsMove:(BOOL)arg1;
- (void)setAllowsInsert:(BOOL)arg1;
- (id)relationshipName;
- (BOOL)applyMutationsToManagedObject:(id)arg1 mutableChildren:(id)arg2 error:(id*)arg3;
- (id)initWithRelationshipName:(id)arg1 xpcDict:(id)arg2 changeRequestHelper:(id)arg3;
- (id)isDestinationObjectValid;
- (BOOL)allowsMove;
- (BOOL)allowsInsert;
- (BOOL)allowsRemove;
- (id)initWithRelationshipName:(id)arg1 changeRequestHelper:(id)arg2;
- (void)encodeToXPCDict:(id)arg1;
- (void)setDestinationEntityName:(id)arg1;
- (id)destinationEntityName;

@end
