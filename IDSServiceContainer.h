/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@class NSMutableSet, IDSServiceMonitor;

@interface IDSServiceContainer : NSObject  {
    IDSServiceMonitor *_monitor;
    NSMutableSet *_listeners;
}

@property(retain) IDSServiceMonitor * monitor;
@property(retain,readonly) NSMutableSet * listeners;


- (void)setMonitor:(id)arg1;
- (BOOL)removeListenerID:(id)arg1;
- (BOOL)addListenerID:(id)arg1;
- (BOOL)hasListenerID:(id)arg1;
- (id)listeners;
- (void)dealloc;
- (id)initWithService:(id)arg1;
- (id)monitor;

@end
