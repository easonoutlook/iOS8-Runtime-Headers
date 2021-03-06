/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AppLaunchStats.framework/AppLaunchStats
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSObject<OS_dispatch_source>, NSObject<OS_dispatch_queue>;

@interface AppLaunchStatsDiag : NSObject  {
    NSObject<OS_dispatch_queue> *APLSDiagQueue;
    NSObject<OS_dispatch_source> *APLSDiagTimer;
    int diagToken;
    booldiagTimerOn;
}


- (void)initializeDiag:(bool)arg1;
- (void)base64EncodeFile:(const char *)arg1 dumpfile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg2;
- (void)turnOnDiagnostic:(long long)arg1;
- (bool)checkDuetDiagState;
- (void)turnOffDiagnostic;
- (void)dumpDiagnosticIntoFile;
- (void).cxx_destruct;
- (id)init;

@end
