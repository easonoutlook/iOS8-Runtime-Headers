/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

@class BKSApplicationStateMonitor, NSMutableArray;

@interface AFUIApplicationStateHelper : NSObject  {
    BKSApplicationStateMonitor *_appStateMonitor;
    NSMutableArray *_foregroundAppIdentifiers;
}


- (id)foregroundAppIdentifiers;
- (void)_handleApplicationStateUpdate:(id)arg1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
