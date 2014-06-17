/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class ML3DatabaseResult;

@interface ML3DatabaseRow : NSObject  {
    struct sqlite3_stmt { } *_stmt;
    ML3DatabaseResult *_parentResult;
}

@property(readonly) ML3DatabaseResult * parentResult;


- (void)getBlobBytes:(const void**)arg1 outLength:(int*)arg2 forColumnName:(id)arg3;
- (id)numberForColumnName:(id)arg1;
- (long long)int64ForColumnName:(id)arg1;
- (int)intForColumnName:(id)arg1;
- (double)doubleForColumnName:(id)arg1;
- (id)dataForColumnName:(id)arg1;
- (id)valueForColumnName:(id)arg1;
- (id)initWithParentResult:(id)arg1;
- (void)getBlobBytes:(const void**)arg1 outLength:(int*)arg2 forColumnIndex:(unsigned int)arg3;
- (double)doubleForColumnIndex:(unsigned int)arg1;
- (id)arrayRepresentation;
- (id)numberForColumnIndex:(unsigned int)arg1;
- (int)intForColumnIndex:(unsigned int)arg1;
- (id)stringForColumnIndex:(unsigned int)arg1;
- (id)stringForColumnName:(id)arg1;
- (id)parentResult;
- (long long)int64ForColumnIndex:(unsigned int)arg1;
- (id)valueForColumnIndex:(unsigned int)arg1;
- (id)dataForColumnIndex:(unsigned int)arg1;
- (void).cxx_destruct;
- (unsigned int)columnCount;
- (id)dictionaryRepresentation;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)objectAtIndexedSubscript:(unsigned int)arg1;
- (id)init;

@end
