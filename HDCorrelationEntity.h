/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCorrelationEntity : HDDataEntity  {
}

+ (id)databaseTable;
+ (void)_enumerateCorrelationsWithStartAnchor:(id)arg1 endAnchor:(id)arg2 healthDaemon:(id)arg3 callback:(id)arg4;
+ (id)_predicateForEntitiesWithCorrelationUUIDs:(id)arg1;
+ (id)correlationsWithObjectUUIDs:(id)arg1 healthDaemon:(id)arg2 error:(id*)arg3;
+ (id)correlationsWithCorrelationUUID:(id)arg1 healthDaemon:(id)arg2 error:(id*)arg3;
+ (id)insertEntriesForCorrelation:(id)arg1 healthDaemon:(id)arg2 error:(id*)arg3;
+ (id)insertCorrelationTuple:(id)arg1 healthDaemon:(id)arg2 error:(id*)arg3;
+ (id)_propertySettersForCorrelationTuple;
+ (void)_enumerateCorrelationsWithPredicate:(id)arg1 database:(id)arg2 callback:(id)arg3;
+ (id)_correlationEntitiesWithPredicate:(id)arg1 database:(id)arg2;
+ (id)_insertCorrelationEntryWithCorrelation:(id)arg1 object:(id)arg2 database:(id)arg3;
+ (int)protectionClass;
+ (id)createTableSQL;
+ (void)load;


@end
