/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSString, NSObject<OS_dispatch_semaphore>;

@interface _PLClientTransaction : PLClientServerTransaction  {
    int _fileDescriptor;
    id _processAssertion;
    NSString *_path;
    NSObject<OS_dispatch_semaphore> *_fdResourceSemaphore;
}

@property int fileDescriptor;
@property(retain) id processAssertion;
@property(retain) NSString * path;
@property NSObject<OS_dispatch_semaphore> * fdResourceSemaphore;

+ (id)_fdResourceSemaphore;
+ (id)_fdIsolationQueue;

- (void)setFdResourceSemaphore:(id)arg1;
- (id)fdResourceSemaphore;
- (id)processAssertion;
- (void)setProcessAssertion:(id)arg1;
- (void)completeTransaction;
- (void)abortTransaction;
- (int)fileDescriptor;
- (void)setFileDescriptor:(int)arg1;
- (void)setPath:(id)arg1;
- (id)path;
- (id)description;
- (void)dealloc;
- (id)init;

@end