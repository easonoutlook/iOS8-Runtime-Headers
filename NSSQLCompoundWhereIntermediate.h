/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSMutableArray;

@interface NSSQLCompoundWhereIntermediate : NSSQLWhereIntermediate  {
    NSMutableArray *_subclauses;
}


- (void)dealloc;
- (BOOL)isOrScoped;
- (id)_generateMulticlauseStringInContext:(id)arg1;
- (id)initWithPredicate:(id)arg1 inScope:(id)arg2 inContext:(id)arg3;
- (id)generateSQLStringInContext:(id)arg1;

@end