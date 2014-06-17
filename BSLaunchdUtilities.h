/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSLaunchdUtilities : NSObject  {
}

+ (unsigned long long)lastExitReasonForLabel:(id)arg1;
+ (int)pidForLabel:(id)arg1;
+ (BOOL)createJobWithLabel:(id)arg1 bundleIdentifier:(id)arg2 path:(id)arg3 containerPath:(id)arg4 arguments:(id)arg5 environment:(id)arg6 standardOutputPath:(id)arg7 standardErrorPath:(id)arg8 machServices:(id)arg9 threadPriority:(long long)arg10 waitForDebugger:(BOOL)arg11 denyCreatingOtherJobs:(BOOL)arg12 runAtLoad:(BOOL)arg13 disableASLR:(BOOL)arg14 systemApp:(BOOL)arg15;
+ (void)deleteAllJobsWithLabelPrefix:(id)arg1;
+ (void)deleteJobWithLabel:(id)arg1;
+ (id)labelForPID:(int)arg1;
+ (BOOL)startJobWithLabel:(id)arg1;
+ (BOOL)stopJobWithLabel:(id)arg1;
+ (id)allJobLabels;


@end
