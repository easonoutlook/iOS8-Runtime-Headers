/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface _NSRefcountedPthreadMutex : NSObject  {
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    } lock;
}


- (void)unlock;
- (void)lock;
- (void)dealloc;
- (void)finalize;
- (id)init;

@end
