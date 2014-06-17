/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class DADuetReporter, NSTimer, NSMutableArray, <DATask>, NSMutableSet, DAAccount, NSArray;

@interface DATaskManager : NSObject  {
    DAAccount *_account;
    BOOL _didLogSyncStart;
    <DATask> *_activeModalTask;
    <DATask> *_activeQueuedTask;
    NSMutableArray *_queuedExclusiveTasks;
    <DATask> *_activeExclusiveTask;
    NSMutableSet *_independentTasks;
    NSMutableSet *_heldIndependentTasks;
    NSMutableSet *_modalHeldIndependentTasks;
    NSMutableArray *_mQueuedTasks;
    <DATask> *_modalHeldActiveQueuedTask;
    NSMutableArray *_queuedModalTasks;
    int _state;
    NSTimer *_managerIdleTimer;
    NSTimer *_userInitiatedSyncTimer;
    NSTimer *_powerLogIdleTimer;
    DADuetReporter *_duetReporter;
}

@property DAAccount * account;
@property(retain) <DATask> * activeModalTask;
@property(retain) <DATask> * activeQueuedTask;
@property(readonly) NSArray * queuedTasks;
@property(readonly) NSArray * allTasks;
@property(retain) NSMutableArray * queuedExclusiveTasks;
@property(retain) <DATask> * activeExclusiveTask;
@property(retain) NSMutableSet * independentTasks;
@property(retain) NSMutableSet * heldIndependentTasks;
@property(retain) NSMutableSet * modalHeldIndependentTasks;
@property(retain) NSMutableArray * mQueuedTasks;
@property(retain) <DATask> * modalHeldActiveQueuedTask;
@property(retain) NSMutableArray * queuedModalTasks;
@property int state;
@property(retain) NSTimer * managerIdleTimer;
@property(retain) NSTimer * userInitiatedSyncTimer;
@property(retain) NSTimer * powerLogIdleTimer;
@property BOOL didLogSyncStart;
@property(retain) DADuetReporter * duetReporter;


- (id)deviceType;
- (id)initWithAccount:(id)arg1;
- (BOOL)_hasTasksIndicatingARunningSync;
- (void)taskManagerWillRemoveTask:(id)arg1;
- (void)taskManagerDidAddTask:(id)arg1;
- (BOOL)taskIsModal:(id)arg1;
- (id)allTasks;
- (void)cancelTask:(id)arg1 withUnderlyingError:(id)arg2;
- (id)activeModalTask;
- (void)taskDidFinish:(id)arg1;
- (void)taskEndModal:(id)arg1;
- (void)taskRequestModal:(id)arg1;
- (void)cancelAllTasks;
- (void)submitExclusiveTask:(id)arg1;
- (id)accountPersistentUUID;
- (id)identityPersist;
- (void)submitIndependentTask:(id)arg1;
- (void)submitQueuedTask:(id)arg1;
- (id)stateString;
- (void)submitExclusiveTask:(id)arg1 toFrontOfQueue:(BOOL)arg2;
- (BOOL)useSSL;
- (void)setDidLogSyncStart:(BOOL)arg1;
- (void)setQueuedModalTasks:(id)arg1;
- (void)setMQueuedTasks:(id)arg1;
- (void)setModalHeldIndependentTasks:(id)arg1;
- (void)setHeldIndependentTasks:(id)arg1;
- (void)setIndependentTasks:(id)arg1;
- (void)setQueuedExclusiveTasks:(id)arg1;
- (BOOL)isShutdown;
- (BOOL)_useFakeDescriptions;
- (id)queuedTasks;
- (void)_scheduleSelector:(SEL)arg1 withArgument:(id)arg2;
- (void)_retainPowerAssertionForTask:(id)arg1;
- (void)_logSyncEnd;
- (BOOL)didLogSyncStart;
- (void)_clearUserInitiatedSyncTimer;
- (void)_useOpportunisticSocketsAgain;
- (BOOL)_hasTasksForcingNetworkConnection;
- (void)_scheduleStartModal:(id)arg1;
- (void)_reactivateHeldTasks;
- (void)setActiveModalTask:(id)arg1;
- (void)_startModal:(id)arg1;
- (void)_performTask:(id)arg1;
- (void)setModalHeldActiveQueuedTask:(id)arg1;
- (void)_releasePowerAssertionForTask:(id)arg1;
- (id)duetReporter;
- (BOOL)_taskInQueueForcesNetworkConnection:(id)arg1;
- (BOOL)_taskForcesNetworking:(id)arg1;
- (id)_powerLogInfoDictionary;
- (id)queuedModalTasks;
- (id)modalHeldIndependentTasks;
- (void)_cancelTasksWithReason:(int)arg1;
- (void)setPowerLogIdleTimer:(id)arg1;
- (id)powerLogIdleTimer;
- (void)setUserInitiatedSyncTimer:(id)arg1;
- (id)userInitiatedSyncTimer;
- (void)setManagerIdleTimer:(id)arg1;
- (id)managerIdleTimer;
- (void)setActiveQueuedTask:(id)arg1;
- (id)heldIndependentTasks;
- (void)_requestCancelTasksWithReason:(int)arg1;
- (void)_makeStateTransition;
- (void)_schedulePerformTask:(id)arg1;
- (void)setActiveExclusiveTask:(id)arg1;
- (id)_version;
- (void)_populateVersionDescriptions;
- (void)setDuetReporter:(id)arg1;
- (id)modalHeldActiveQueuedTask;
- (id)activeQueuedTask;
- (id)mQueuedTasks;
- (id)independentTasks;
- (id)activeExclusiveTask;
- (id)queuedExclusiveTasks;
- (void)cancelTask:(id)arg1;
- (void)setAccount:(id)arg1;
- (id)account;
- (void)shutdown;
- (id)accountID;
- (int)port;
- (void).cxx_destruct;
- (void)setState:(int)arg1;
- (id)server;
- (int)state;
- (void)dealloc;
- (id)init;
- (id)userAgent;
- (id)password;
- (id)user;

@end
