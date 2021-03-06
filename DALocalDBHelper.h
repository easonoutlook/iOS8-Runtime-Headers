/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NoteContext, NSString;

@interface DALocalDBHelper : NSObject  {
    void *_abDB;
    int _abConnectionCount;
    struct CalDatabase { } *_calDB;
    int _calConnectionCount;
    NSString *_changeTrackingID;
    void *_bookmarkDB;
    int _bookmarkConnectionCount;
    NoteContext *_noteDB;
    int _noteConnectionCount;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _calUnitTestCallbackBlock;

}

@property void* abDB;
@property int abConnectionCount;
@property struct CalDatabase { }* calDB;
@property int calConnectionCount;
@property(retain) NSString * changeTrackingID;
@property void* bookmarkDB;
@property int bookmarkConnectionCount;
@property(retain) NoteContext * noteDB;
@property int noteConnectionCount;
@property(copy) id calUnitTestCallbackBlock;

+ (id)sharedInstanceForAccountType:(id)arg1 creatingClass:(Class)arg2;
+ (id)calTestCalDBDir;
+ (void)calSetTestCalDBDir:(id)arg1;
+ (id)abTestABDBDir;
+ (void)abSetTestABDBDir:(id)arg1;

- (id)noteDB;
- (BOOL)calSaveDB;
- (BOOL)abSaveDB;
- (void*)abDB;
- (BOOL)calCloseDBAndSave:(BOOL)arg1;
- (void)calOpenDBWithClientIdentifier:(id)arg1;
- (id)changeTrackingID;
- (struct CalDatabase { }*)calDB;
- (void)setNoteConnectionCount:(int)arg1;
- (void)setNoteDB:(id)arg1;
- (void)setBookmarkConnectionCount:(int)arg1;
- (int)bookmarkConnectionCount;
- (void)setBookmarkDB:(void*)arg1;
- (void)setCalConnectionCount:(int)arg1;
- (void)setCalDB:(struct CalDatabase { }*)arg1;
- (void)setAbConnectionCount:(int)arg1;
- (int)abConnectionCount;
- (void)setAbDB:(void*)arg1;
- (void)calUnitTestsSetCallbackBlockForSave:(id)arg1;
- (int)noteConnectionCount;
- (BOOL)noteCloseDBAndSave:(BOOL)arg1;
- (void)noteOpenDB;
- (void)bookmarkCloseDBAndSave:(BOOL)arg1;
- (void)bookmarkSaveDB;
- (BOOL)bookmarkOpenDB;
- (void*)bookmarkDB;
- (int)calConnectionCount;
- (BOOL)calSaveDBAndFlushCaches;
- (void)calOpenDBWithChangeLogging;
- (id)abConstraintPlistPath;
- (void)abProcessAddedImages;
- (void)abProcessAddedRecords;
- (void)setCalUnitTestCallbackBlock:(id)arg1;
- (BOOL)noteSaveDB;
- (id)calUnitTestCallbackBlock;
- (void)setChangeTrackingID:(id)arg1;
- (void)_registerForCalendarYieldNotifications;
- (void)_registerForAddressBookYieldNotifications;
- (BOOL)abCloseDBAndSave:(BOOL)arg1;
- (void)abOpenDB;
- (void).cxx_destruct;

@end
