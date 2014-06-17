/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@class NSDictionary, NSString, NSObject<OS_dispatch_queue>;

@interface MPUApplicationDefaults : NSObject  {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSString *_applicationIdentifier;
    NSDictionary *_defaultValues;
}


- (void)removeValueForKey:(id)arg1;
- (id)arrayForKey:(id)arg1;
- (id)initWithApplicationIdentifier:(id)arg1;
- (void)setString:(id)arg1 forKey:(id)arg2;
- (struct __CFString { }*)_defaultsDomain;
- (id)_objectForKey:(id)arg1 expectedTypeID:(unsigned long)arg2;
- (id)_defaultsDidChangeNotificationName;
- (void)_defaultsDidChange;
- (void)_setObject:(id)arg1 forKey:(id)arg2;
- (void).cxx_destruct;
- (void)setBool:(BOOL)arg1 forKey:(id)arg2;
- (id)stringForKey:(id)arg1;
- (void)registerDefaults:(id)arg1;
- (BOOL)boolForKey:(id)arg1;
- (void)dealloc;
- (void)setArray:(id)arg1 forKey:(id)arg2;

@end
