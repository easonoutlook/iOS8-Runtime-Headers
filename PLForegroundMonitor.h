/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSMapTable, NSMutableSet, NSObject<OS_dispatch_queue>, NSCountedSet;

@interface PLForegroundMonitor : NSObject  {
    NSObject<OS_dispatch_queue> *_queue;
    NSCountedSet *_interestingApplications;
    NSMutableSet *_foregroundApplications;
    NSMapTable *_observers;
    BOOL _isMonitoringApplicationStates;
}

+ (id)sharedInstance;

- (void)stopWatchingApplicationWithBundleIdentifier:(id)arg1;
- (void)_applicationStateDidChange:(id)arg1;
- (void)_stopMonitoringApplicationStatesLocked;
- (void)_applicationDidMoveToBackgroundLocked:(id)arg1;
- (void)_startMonitoringApplicationStatesLocked;
- (void)_applicationDidMoveToForegroundLocked:(id)arg1;
- (void)startWatchingApplicationWithBundleIdentifier:(id)arg1;
- (void)removeForegroundObserver:(id)arg1 context:(id)arg2;
- (void)addForegroundObserver:(id)arg1 context:(id)arg2;
- (void)dealloc;
- (id)init;

@end
