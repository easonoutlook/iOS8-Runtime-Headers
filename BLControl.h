/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSObject<OS_dispatch_queue>;

@interface BLControl : NSObject  {
    boolAABEnabled;
    struct __IOHIDEventSystemClient { } *hidSystemClient;
    struct AABC {} *aab[2];
    struct LegacyBacklightC { int (**x1)(); unsigned int x2; struct __Display {} *x3; unsigned int x4; int x5; struct __IOHIDServiceClient {} *x6; float x7; struct _ALS_Struct { float x_8_1_1; float x_8_1_2; float x_8_1_3; float x_8_1_4; int x_8_1_5; float x_8_1_6; float x_8_1_7; float x_8_1_8; float x_8_1_9; id x_8_1_10; struct { unsigned int x_11_2_1; boolx_11_2_2; boolx_11_2_3; float x_11_2_4; float x_11_2_5; float x_11_2_6; } x_8_1_11; struct { int x_12_2_1; unsigned char x_12_2_2; float x_12_2_3; unsigned int x_12_2_4; id x_12_2_5; } x_8_1_12; struct { unsigned char x_13_2_1; float x_13_2_2; id x_13_2_3; } x_8_1_13; } x8; } *legacyAutoBacklight;
    unsigned int alsNode[3];
    unsigned int driverNode[3];
    unsigned int alsOrientation[3];
    struct __IOHIDServiceClient {} *alsClient[3];
    struct __IOHIDServiceClient {} *otherClients[3];
    unsigned int alsCount;
    unsigned int otherClientsCount;
    unsigned int backlight[2];
    struct __Display {} *display[2];
    unsigned int displayCount;
    NSObject<OS_dispatch_queue> *queue;
    boolaabExist;
    boolignoreBrightnessKey;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _callback;

    void *_callbackContext;
}


- (bool)setPropertyWithKey:(struct __CFString { }*)arg1 property:(void*)arg2;
- (void*)copyPropertyWithKey:(struct __CFString { }*)arg1;
- (bool)findHIDClients;
- (bool)findAlsNodes;
- (bool)findBacklight;
- (bool)setBLControlPropertyWithKey:(struct __CFString { }*)arg1 property:(void*)arg2;
- (void*)copyBLControlPropertyWithkey:(struct __CFString { }*)arg1;
- (struct __CFDictionary { }*)createDictWithUsagePairPage:(unsigned int)arg1 usage:(unsigned int)arg2;
- (void)callBlockWithProperty:(struct __CFString { }*)arg1 value:(void*)arg2;
- (void)registerNotificationBlock:(id)arg1;
- (bool)start;
- (void)stop;
- (id)init;

@end
