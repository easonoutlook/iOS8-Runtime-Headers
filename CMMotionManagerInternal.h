/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSOperationQueue, NSObject<OS_dispatch_queue>;

@interface CMMotionManagerInternal : NSObject  {
    int fSampleLock;
    struct Dispatcher { int (**x1)(); id x2; } *fAccelerometerDispatcher;
    double fAccelerometerUpdateInterval;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id fAccelerometerHandler;

    NSOperationQueue *fAccelerometerQueue;
    double fLastAccelerometerNotificationTimestamp;
    struct Sample { 
        double timestamp; 
        struct { 
            float x; 
            float y; 
            float z; 
        } acceleration; 
    } fLatestAccelerometerSample;
    struct Dispatcher { int (**x1)(); id x2; } *fAmbientPressureDispatcher;
    double fAmbientPressureUpdateInterval;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id fAmbientPressureHandler;

    NSOperationQueue *fAmbientPressureQueue;
    double fLastAmbientPressureNotificationTimestamp;
    struct Sample { 
        double timestamp; 
        struct { 
            float pressure; 
            float temperature; 
        } pressureData; 
    } fLatestAmbientPressureSample;
    struct Dispatcher { int (**x1)(); id x2; } *fGyroDispatcher;
    double fGyroUpdateInterval;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id fGyroHandler;

    NSOperationQueue *fGyroQueue;
    double fLastGyroNotificationTimestamp;
    struct Sample { 
        double timestamp; 
        struct { 
            float x; 
            float y; 
            float z; 
        } rotationRate; 
        unsigned short sampleNum; 
        boolfsync; 
    } fLatestGyroSample;
    struct Dispatcher { int (**x1)(); id x2; } *fDeviceMotionDispatcher;
    double fDeviceMotionUpdateInterval;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id fDeviceMotionHandler;

    NSOperationQueue *fDeviceMotionQueue;
    double fLastDeviceMotionNotificationTimestamp;
    struct Sample { 
        double timestamp; 
        struct { 
            struct { 
                double w; 
                double x; 
                double y; 
                double z; 
            } quaternion; 
            struct { 
                float x; 
                float y; 
                float z; 
            } userAcceleration; 
            struct { 
                float x; 
                float y; 
                float z; 
            } rotationRate; 
            struct { 
                float x; 
                float y; 
                float z; 
            } magneticField; 
            int magneticFieldCalibrationLevel; 
            booldoingYawCorrection; 
            booldoingBiasEstimation; 
            boolisInitialized; 
        } deviceMotion; 
        boolfsync; 
    } fLatestDeviceMotionSample;
    int fAttitudeReferenceFrame;
    boolfCompassCalibrationHud;
    boolfShowCompassCalibrationHudOnResume;
    boolfHaveSentDeviceRequiresMovementError;
    struct unique_ptr<CLGeomagneticModelProvider_Type::Client, std::__1::default_delete<CLGeomagneticModelProvider_Type::Client> > { 
        struct __compressed_pair<CLGeomagneticModelProvider_Type::Client *, std::__1::default_delete<CLGeomagneticModelProvider_Type::Client> > { 
            struct Client {} *__first_; 
        } __ptr_; 
    } fGeomagneticModelProviderClient;
    struct { 
        double x; 
        double y; 
        double z; 
        double magnitude; 
        double horizontal; 
        double declination; 
        double inclination; 
        double timestamp; 
    } fGeomagneticModel;
    boolfHaveSentTrueNorthUnavailableError;
    double fDeviceMotionStartTimestamp;
    struct Dispatcher { int (**x1)(); id x2; } *fMagnetometerDispatcher;
    double fMagnetometerUpdateInterval;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id fMagnetometerHandler;

    NSOperationQueue *fMagnetometerQueue;
    double fLastMagnetometerNotificationTimestamp;
    struct Sample { 
        double timestamp; 
        struct { 
            float x; 
            float y; 
            float z; 
        } magneticField; 
    } fLatestMagnetometerSample;
    boolfShowsDeviceMovementDisplay;
    struct Dispatcher { int (**x1)(); id x2; } *fPrivateAccelerometerDataDispatcher;
    int (*fPrivateAccelerometerDataCallback)();
    void *fPrivateAccelerometerDataCallbackInfo;
    struct Dispatcher { int (**x1)(); id x2; } *fPrivateGyroDataDispatcher;
    int (*fPrivateGyroDataCallback)();
    void *fPrivateGyroDataCallbackInfo;
    struct Dispatcher { int (**x1)(); id x2; } *fPrivateDeviceMotionDispatcher;
    int (*fPrivateDeviceMotionCallback)();
    void *fPrivateDeviceMotionCallbackInfo;
    boolfPrivateDeviceMotionUse9Axis;
    boolfPrivateUseAccelerometer;

  /* Unexpected information at end of encoded ivar type: }{__compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, void (^)(CLConnectionMessage *)>, std::__1::less<std::__1::basic_string<char> >, true> >=L}}}@?@?} */
  /* Error parsing encoded ivar type info: ^{CLConnectionClient={basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=II*}{__short=(?=Cc)[11c]}{__raw=[3L]})}}}@@@^{CLConnection}{CLNameValuePair=^^?^{__CFDictionary}}{CLNameValuePair=^^?^{__CFDictionary}}{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=II*}{__short=(?=Cc)[11c]}{__raw=[3L]})}}}@?@?{map<std::__1::basic_string<char>, void (^)(CLConnectionMessage *), std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, void (^)(CLConnectionMessage *)> > >={__tree<std::__1::__value_type<std::__1::basic_string<char>, void (^)(CLConnectionMessage *)>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, void (^)(CLConnectionMessage *)>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, void (^)(CLConnectionMessage *)> > >=^{__tree_node<std::__1::__value_type<std::__1::basic_string<char>, void (^)(CLConnectionMessage *)>, void *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, void (^)(CLConnectionMessage *)>, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, void (^)(CLConnectionMessage *)>, std::__1::less<std::__1::basic_string<char> >, true> >=L}}}@?@?} */
    struct CLConnectionClient { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned int x_1_5_1; unsigned int x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[11]; } x_1_4_2; struct __raw { unsigned long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_1_1_1; } x1; id x2; id x3; id x4; struct CLConnection {} *x5; struct CLNameValuePair { int (**x_6_1_1)(); struct __CFDictionary {} *x_6_1_2; } x6; struct CLNameValuePair { int (**x_7_1_1)(); struct __CFDictionary {} *x_7_1_2; } x7; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned int x_1_5_1; unsigned int x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[11]; } x_1_4_2; struct __raw { unsigned long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_8_1_1; } x8; id x9; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x10; id x11; void*x12; struct map<std::__1::basic_string<char>, void (^)(CLConnectionMessage *), std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, void (^)(CLConnectionMessage *)> > >={__tree<std::__1::__value_type<std::__1::basic_string<char>, void (^)(CLConnectionMessage *)>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, void (^)(CLConnectionMessage *)>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, void (^)(CLConnectionMessage *)> > >=^{__tree_node<std::__1::__value_type<std::__1::basic_string<char>, void (^)(CLConnectionMessage *)>, void *> {} x13; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, void (^)(CLConnectionMessage *)>, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *> {} x14; } *fConnection;

    NSObject<OS_dispatch_queue> *fConnectionQueue;
    struct __CFRunLoopTimer { } *fWatchdogTimer;
    boolfSidebandSensorFusionEnabled;
    boolfSidebandSensorFusionLatency;
    boolfSidebandSensorFusionSnoop;
    struct unique_ptr<CLOscarIspDataVisitor, std::__1::default_delete<CLOscarIspDataVisitor> > { 
        struct __compressed_pair<CLOscarIspDataVisitor *, std::__1::default_delete<CLOscarIspDataVisitor> > { 
            struct CLOscarIspDataVisitor {} *__first_; 
        } __ptr_; 
    } fSidebandVisitor;
    boolfPrivateWantsPowerConservativeDeviceMotion;
    int (*fPrivateNotificationCallback)();
    void *fPrivateNotificationCallbackInfo;
    struct Dispatcher { int (**x1)(); id x2; } *fPrivateDeviceMotionSensorStatusDispatcher;
    struct Dispatcher { int (**x1)(); id x2; } *fPrivateDeviceMotionAlgorithmDidResetDispatcher;
    int (*fPrivateGyroBiasAndVarianceCallback)();
    void *fPrivateGyroBiasAndVarianceCallbackInfo;
    struct Dispatcher { int (**x1)(); id x2; } *fPrivateGyroBiasAndVarianceDispatcher;
    int (*fPrivateDeviceMotionCompassDataCallback)();
    void *fPrivateDeviceMotionCompassDataCallbackInfo;
    struct Dispatcher { int (**x1)(); id x2; } *fPrivateDeviceMotionCompassDataDispatcher;
    int (*fPrivateDeviceMotionCompassAlignmentCallback)();
    void *fPrivateDeviceMotionCompassAlignmentCallbackInfo;
    struct Dispatcher { int (**x1)(); id x2; } *fPrivateDeviceMotionCompassAlignmentDispatcher;
    boolfInactive;
}


- (void).cxx_destruct;
- (id).cxx_construct;
- (void)dealloc;
- (id)init;
- (void)teardownPrivate;

@end