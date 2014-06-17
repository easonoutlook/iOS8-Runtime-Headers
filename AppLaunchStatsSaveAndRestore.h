/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AppLaunchStats.framework/AppLaunchStats
 */

@class NSMutableDictionary, NSMutableArray, NSObject<OS_dispatch_queue>;

@interface AppLaunchStatsSaveAndRestore : NSObject  {
    boolallowSave;
    boolhasSavedData;
    NSObject<OS_dispatch_queue> *aplsSaveAndRestoreQueue;
    NSMutableArray *saveRestoreObjects;
    NSMutableDictionary *saveState;
}

@property bool allowSave;
@property(readonly) bool hasSavedData;


- (void)addDataSource:(id)arg1;
- (bool)hasSavedData;
- (void)setAllowSave:(bool)arg1;
- (bool)allowSave;
- (void)saveState:(id)arg1 withKey:(id)arg2;
- (void)saveAll;
- (void)restoreAll;
- (void)quickSaveAppStatistics:(id)arg1 forKey:(id)arg2;
- (void)quickSaveDelayTime:(id)arg1 forKey:(id)arg2;
- (void)quickSaveInstallApps:(id)arg1 forKey:(id)arg2;
- (void)quickSaveUnBlackList:(id)arg1 forKey:(id)arg2;
- (void)quickSaveBlackList:(id)arg1 forKey:(id)arg2;
- (id)getString:(id)arg1;
- (id)getDict:(id)arg1;
- (void)createBasicStoreStructure;
- (void)doDeepCopySavedState:(id)arg1;
- (id)getList:(id)arg1;
- (void).cxx_destruct;
- (id)init;

@end
