/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class WebScriptObject, NSString, NSLock;

@interface SUScriptEventListener : NSObject  {
    WebScriptObject *_callback;
    NSLock *_lock;
    NSString *_name;
    BOOL _useCapture;
}

@property(retain) WebScriptObject * callback;
@property(copy) NSString * name;
@property BOOL shouldUseCapture;


- (BOOL)shouldUseCapture;
- (void)setShouldUseCapture:(BOOL)arg1;
- (void)setCallback:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)callback;

@end
