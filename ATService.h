/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

@class NSMutableSet, NSObject<OS_dispatch_queue>;

@interface ATService : NSObject <ATMessageLinkObserver> {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_messageLinks;
    NSMutableSet *_observers;
}

@property(retain) NSMutableSet * messageLinks;
@property(retain) NSMutableSet * observers;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id)messageLinkForLibrary:(id)arg1;
- (id)messageLinks;
- (void)removeMessageLink:(id)arg1;
- (void)addMessageLink:(id)arg1;
- (void)setMessageLinks:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)observers;
- (void)setObservers:(id)arg1;
- (void).cxx_destruct;
- (BOOL)run;
- (void)removeObserver:(id)arg1;
- (BOOL)stop;
- (id)init;

@end
