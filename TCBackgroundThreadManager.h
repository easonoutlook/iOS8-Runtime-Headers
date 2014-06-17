/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class <TCCancelDelegate>, TCMessageContext, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_group>, TCProgressContext;

@interface TCBackgroundThreadManager : NSObject  {
    <TCCancelDelegate> *mCancelDelegate;
    BOOL mIsWaiting;
    unsigned int mBlockCount;
    NSObject<OS_dispatch_queue> *mQueue;
    NSObject<OS_dispatch_group> *mGroup;
    NSObject<OS_dispatch_queue> *mProgressReportingQueue;
    TCMessageContext *mMessageContext;
    TCProgressContext *mProgressContext;
}

@property(readonly) BOOL isCancelled;
@property(retain) TCMessageContext * messageContext;
@property(retain) TCProgressContext * progressContext;


- (id)progressContext;
- (id)messageContext;
- (void)reportWarning:(struct TCTaggedMessageStructure { int x1; id x2; }*)arg1;
- (void)waitUntilComplete;
- (void)addASyncBlock:(id)arg1;
- (id)initWithCancelDelegate:(id)arg1;
- (void)setProgressContext:(id)arg1;
- (void)setMessageContext:(id)arg1;
- (BOOL)isCancelled;
- (void)dealloc;

@end
