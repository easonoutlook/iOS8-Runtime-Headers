/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class CMMotionManager;

@interface FigCoreMotionDelegate : NSObject  {
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    } ringMutex;
    CMMotionManager *motionManager;
    BOOL manageFusedMotion;
    BOOL manageAccel;
    BOOL manageGravity;
    int accelRingIndex;
    float accelRingX[256];
    float accelRingY[256];
    float accelRingZ[256];
    double accelRingTime[256];
    int fusedRingIndex;
    double fusedRingTime[256];
    BOOL fusedRingDoingBiasEstimation[256];
    struct { 
        float x; 
        float y; 
        float z; 
    } fusedRingAccel[256];
    struct { 
        double w; 
        double x; 
        double y; 
        double z; 
    } fusedRingQuaternion[256];
    struct { 
        float x; 
        float y; 
        float z; 
    } fusedRingPosition[256];
    struct OpaqueFigSemaphore { } *dataSemaphore;
    double latestMotionDataTime;
    double latestGravityDataTime;
    BOOL copyingAllData;
    double dLatestFusedMotionCopied;
    double dLatestTimestamp;
    double dGyroUpdateInterval;
    double timestampLatency;
    BOOL gettingAttitudeChange;
    struct { 
        double w; 
        double x; 
        double y; 
        double z; 
    } previousQuaternion;
    struct { 
        double w; 
        double x; 
        double y; 
        double z; 
    } currentQuaternion;
    BOOL computingPosition;
    struct { 
        double timestamp; 
        float x; 
        float y; 
        float z; 
    } position;
    struct { 
        double timestamp; 
        float x; 
        float y; 
        float z; 
    } velocity;
}


- (BOOL)isCopyingAllData;
- (BOOL)managingGravity;
- (BOOL)managingAccel;
- (BOOL)managingFusedMotion;
- (void)getPositionX:(float*)arg1 y:(float*)arg2 z:(float*)arg3 forTimeStamp:(double)arg4;
- (void)getCurrentDeltaAttitudeRoll:(double*)arg1 pitch:(double*)arg2 yaw:(double*)arg3;
- (void)getCurrentAttitudeRoll:(double*)arg1 pitch:(double*)arg2 yaw:(double*)arg3;
- (void)getCurrentQuaternion:(struct { double x1; double x2; double x3; double x4; }*)arg1;
- (long)updateCurrentQuaternionForTimeStamps:(double)arg1 withEnd:(double)arg2;
- (long)updateCurrentQuaternionForTimeStamp:(double)arg1;
- (id)copyFusedMotionData:(double)arg1 endTime:(double)arg2 timeoutValue:(double)arg3 errOut:(int*)arg4;
- (id)copyNewFusedMotionData;
- (id)copyAllFusedMotionData;
- (void)didUpdateFusedMotionWithDeviceMotion:(struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; struct { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; int x5; boolx6; boolx7; boolx8; })arg1 time:(double)arg2 ifsync:(BOOL)arg3;
- (long)getFusedVectorX:(float*)arg1 y:(float*)arg2 z:(float*)arg3 forTimeStamp:(double)arg4;
- (long)getGravityX:(float*)arg1 y:(float*)arg2 z:(float*)arg3 forTimeStamp:(double)arg4;
- (void)didUpdateGravity:(struct { float x1; float x2; float x3; })arg1 time:(double)arg2;
- (void)didUpdateAcceleration:(struct { float x1; float x2; float x3; })arg1 time:(double)arg2;
- (void)updateGyroInterval:(float)arg1;
- (void)updateDeviceCallback:(BOOL)arg1 fusedMotionUpdateInterval:(float)arg2;
- (void)getCurrentDeltaQuaternion:(struct { double x1; double x2; double x3; double x4; }*)arg1;
- (void)didUpdatePositionWithTimeStamp:(double)arg1;
- (void)didUpdateVelocityWithAcceleration:(struct { float x1; float x2; float x3; }*)arg1 forTimeStamp:(double)arg2;
- (void)didUpdatePositionWithAcceleration:(struct { float x1; float x2; float x3; }*)arg1 forTimeStamp:(double)arg2;
- (id)initWithAccelerometer:(BOOL)arg1 gravityZ:(BOOL)arg2 fusedMotion:(BOOL)arg3 accelUpdateInterval:(float)arg4 fusedMotionUpdateInterval:(float)arg5;
- (long)getVectorX:(float*)arg1 y:(float*)arg2 z:(float*)arg3 forTimeStamp:(double)arg4;
- (void)dealloc;
- (id)init;

@end
