/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSMutableArray;

@interface SUDelayedQuitController : NSObject  {
    int _delayTerminateCount;
    NSMutableArray *_longLivedViewControllers;
}

+ (id)checkedInViewControllerOfClass:(Class)arg1;
+ (BOOL)viewControllerIsLongLived:(id)arg1;
+ (void)checkOutLongLivedViewController:(id)arg1;
+ (void)checkInLongLivedViewController:(id)arg1;
+ (BOOL)isDelayingTerminate;
+ (void)endDelayingTerminate;
+ (void)beginDelayingTerminate;
+ (id)sharedInstance;

- (void)_endDelayingTerminate;
- (void)_beginDelayingTerminate;
- (BOOL)_isDelayingTerminate;
- (id)_checkedInViewControllerOfClass:(Class)arg1;
- (BOOL)_viewControllerIsLongLived:(id)arg1;
- (void)_checkOutLongLivedViewController:(id)arg1;
- (void)_checkInLongLivedViewController:(id)arg1;
- (void)dealloc;

@end
