/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@class UIPDFPageRenderJob;

@interface UIPDFPageRenderOperation : NSOperation  {
    UIPDFPageRenderJob *_job;
    BOOL executing;
    BOOL finished;
}

@property(retain) UIPDFPageRenderJob * job;


- (void)setJob:(id)arg1;
- (id)job;
- (BOOL)isConcurrent;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (id)initWithJob:(id)arg1;
- (void)main;
- (void)completeOperation;
- (void)start;
- (void)dealloc;

@end
