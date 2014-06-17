/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@class NSHashTable;

@interface HDDiagnosticManager : NSObject  {
    NSHashTable *_objects;
    int _lock;
}

+ (id)sharedDiagnosticManager;

- (id)diagnosticsForKey:(id)arg1;
- (void)logAllDiagnostics;
- (id)_diagnosticsForKey:(id)arg1 shouldLog:(BOOL)arg2;
- (void).cxx_destruct;
- (void)removeObject:(id)arg1;
- (void)addObject:(id)arg1;
- (id)init;

@end