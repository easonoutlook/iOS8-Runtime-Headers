/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSSQLRelationship, NSString;

@interface NSSQLJoinIntermediate : NSSQLIntermediate  {
    NSSQLRelationship *_relationship;
    NSString *_sourceAlias;
    NSString *_destinationAlias;
    NSString *_correlationAlias;
    unsigned int _type;
    BOOL _direct;
}

+ (id)createJoinIntermediatesForKeypath:(id)arg1 startEntity:(id)arg2 startAlias:(id)arg3 forScope:(id)arg4 inStatementIntermediate:(id)arg5 inContext:(id)arg6;
+ (id)createManyToManyJoinIntermediateForProperty:(id)arg1 direct:(BOOL)arg2 lastStep:(id)arg3 inScope:(id)arg4 context:(id)arg5;
+ (id)createToManyJoinIntermediateForProperty:(id)arg1 lastStep:(id)arg2 inScope:(id)arg3 context:(id)arg4;
+ (id)createToOneJoinIntermediateForProperty:(id)arg1 lastStep:(id)arg2 inScope:(id)arg3 context:(id)arg4;

- (id)description;
- (void)dealloc;
- (BOOL)joinType;
- (id)correlationAlias;
- (void)setDestinationAlias:(id)arg1;
- (void)setDirect:(BOOL)arg1;
- (BOOL)isDirect;
- (id)_generateManyToManySQLStringInContext:(id)arg1;
- (id)_generateToManySQLStringInContext:(id)arg1;
- (id)_generateToOneSQLStringInContext:(id)arg1;
- (void)setSourceAlias:(id)arg1;
- (id)sourceAlias;
- (id)initForRelationship:(id)arg1 sourceAlias:(id)arg2 destinationAlias:(id)arg3 correlationAlias:(id)arg4 direct:(BOOL)arg5 inScope:(id)arg6;
- (id)destinationAlias;
- (void)setJoinType:(unsigned int)arg1;
- (id)sourceEntity;
- (id)generateSQLStringInContext:(id)arg1;
- (id)relationship;
- (id)destinationEntity;

@end
