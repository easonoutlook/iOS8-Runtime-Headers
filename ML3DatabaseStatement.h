/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class NSString, ML3DatabaseConnection;

@interface ML3DatabaseStatement : NSObject  {
    NSString *_sql;
    BOOL _clearBindingsAfterRunning;
    BOOL _isExecuting;
    ML3DatabaseConnection *_connection;
    struct sqlite3_stmt { } *_sqliteStatement;
}

@property(readonly) NSString * sql;
@property(readonly) ML3DatabaseConnection * connection;
@property(readonly) struct sqlite3_stmt { }* sqliteStatement;
@property BOOL clearBindingsAfterRunning;
@property BOOL isExecuting;


- (int)step;
- (BOOL)isBusy;
- (BOOL)isReadOnly;
- (void)setClearBindingsAfterRunning:(BOOL)arg1;
- (void)bindValuesInArray:(id)arg1;
- (void)bindValuesForParameterNames:(id)arg1;
- (void)bindUTF8StringNoCopy:(const char *)arg1 length:(int)arg2 forParameterAtPosition:(int)arg3;
- (void)bindUTF8StringNoCopy:(const char *)arg1 forParameterAtPosition:(int)arg2;
- (void)bindUTF8String:(const char *)arg1 forParameterAtPosition:(int)arg2;
- (void)bindBytesNoCopy:(const void*)arg1 length:(int)arg2 forParameterAtPosition:(int)arg3;
- (void)bindBytes:(const void*)arg1 length:(int)arg2 forParameterAtPosition:(int)arg3;
- (void)bindNullForParameterAtPosition:(int)arg1;
- (void)bindDouble:(double)arg1 forParameterAtPosition:(int)arg2;
- (void)bindInt64:(long long)arg1 forParameterAtPosition:(int)arg2;
- (void)bindInt:(int)arg1 forParameterAtPosition:(int)arg2;
- (id)initWithSQLiteStatement:(struct sqlite3_stmt { }*)arg1 SQL:(id)arg2 connection:(id)arg3;
- (void)bindValue:(id)arg1 forParameterAtPosition:(int)arg2;
- (BOOL)clearBindingsAfterRunning;
- (void)setIsExecuting:(BOOL)arg1;
- (int)clearBindings;
- (int)finalizeStatement;
- (id)sql;
- (struct sqlite3_stmt { }*)sqliteStatement;
- (BOOL)isExecuting;
- (id)connection;
- (void).cxx_destruct;
- (int)reset;
- (id)description;
- (void)dealloc;

@end
