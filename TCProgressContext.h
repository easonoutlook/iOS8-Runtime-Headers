/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OITSUProgressContext, TCProgressStage, NSDate, NSMutableArray;

@interface TCProgressContext : NSObject  {
    OITSUProgressContext *m_parentProgressContext;
    TCProgressStage *m_currentStage;
    NSDate *m_lastReportTime;
    NSMutableArray *m_stackOfBranches;
}

+ (void)createStageWithSteps:(double)arg1 takingSteps:(double)arg2 name:(id)arg3;
+ (void)advanceProgressInContext:(id)arg1 progress:(double)arg2;
+ (void)popBranch;
+ (void)pushBranch:(id)arg1;
+ (void)endBranch:(id)arg1;
+ (id)createBranchWithSteps:(double)arg1 takingSteps:(double)arg2 name:(id)arg3;
+ (void)createContextForCurrentThreadWithParentContext:(id)arg1;
+ (id)stageForCurrentThread;
+ (id)contextForCurrentThread;
+ (void)removeContextForCurrentThread;
+ (void)addProgressObserver:(id)arg1 selector:(SEL)arg2;
+ (void)removeProgressObserver:(id)arg1;
+ (void)endStage;
+ (double)currentPosition;
+ (void)advanceProgress:(double)arg1;
+ (void)createStageWithSteps:(double)arg1 takingSteps:(double)arg2;
+ (void)setMessage:(id)arg1;
+ (void)setProgress:(double)arg1;

- (void)reportProgress:(double)arg1;
- (id)rootStage;
- (id)initWithParentContext:(id)arg1;
- (id)currentStage;
- (void)dealloc;

@end
