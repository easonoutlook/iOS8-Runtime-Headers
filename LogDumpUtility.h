/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface LogDumpUtility : NSObject  {
}

+ (id)createLogFilename:(int)arg1 logNameType:(int)arg2 prefix:(id)arg3 suffix:(id)arg4 marcoLog:(int)arg5;
+ (id)openLogDump:(int)arg1 logNameType:(int)arg2 prefix:(id)arg3 suffix:(id)arg4 marcoLog:(int)arg5 fullFilename:(id*)arg6;
+ (void)AddFileToMarco:(id)arg1 logCategory:(int)arg2;
+ (id)getDefaultLogDumpPath;
+ (BOOL)createDirectoy:(id)arg1;
+ (id)getHomeDirPath;


@end
