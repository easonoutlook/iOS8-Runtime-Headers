/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
 */

@class PKHostPlugIn, NSObject<OS_dispatch_queue>;

@interface PKHostDefaults : NSUserDefaults  {
    PKHostPlugIn *_plugin;
    NSObject<OS_dispatch_queue> *_queue;
}

@property PKHostPlugIn * plugin;
@property(retain) NSObject<OS_dispatch_queue> * queue;


- (id)initWithPlugIn:(id)arg1;
- (void)setQueue:(id)arg1;
- (id)queue;
- (void).cxx_destruct;
- (id)plugin;
- (void)setPlugin:(id)arg1;
- (void)registerDefaults:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (BOOL)synchronize;

@end