/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SyncedDefaults.framework/SyncedDefaults
 */

@class NSMutableDictionary;

@interface SYDJournal : NSObject  {
    NSMutableDictionary *store;
    NSMutableDictionary *journal;
    BOOL readonly;
}


- (BOOL)removeChangesUntilChangeCount:(long long)arg1;
- (int)changeSinceChangeCount:(long long)arg1 forKey:(id)arg2;
- (void)addChange:(int)arg1 forKey:(id)arg2 changeCount:(long long)arg3;
- (id)initWithMutableStore:(id)arg1;
- (long long)maximumChangeCount;
- (id)changesSinceChangeCount:(long long)arg1;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)initWithStore:(id)arg1;

@end