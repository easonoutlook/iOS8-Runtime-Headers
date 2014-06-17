/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString, NSArray;

@interface VSRecognitionRecognizeAction : VSRecognitionAction  {
    NSString *_modelIdentifier;
    NSArray *_keywords;
    void *_recognition;
    NSArray *_results;
    NSString *_debugDumpPath;
    NSString *_audioInputPath;
    double _levelInterval;
    struct { 
        unsigned int debugDumpEnabled : 1; 
        unsigned int preferredEngine : 2; 
        unsigned int resetEngine : 1; 
        unsigned int bluetoothAllowed : 1; 
        unsigned int hasStarted : 1; 
    } _recognizeFlags;
}


- (void)_handleRecognitionCompleted:(struct __VSRecognition { }*)arg1 withResults:(struct __CFArray { }*)arg2 error:(struct __CFError { }*)arg3;
- (void)_handleRecognitionStarted:(struct __VSRecognition { }*)arg1;
- (void)_handleRecognitionPrepared:(struct __VSRecognition { }*)arg1;
- (void)_releaseFromPrepare;
- (void)_configureNewRecognitionInstance;
- (BOOL)_setDebugDumpEnabled:(BOOL)arg1 dumpPath:(id)arg2;
- (id)_actionForEmptyResults;
- (struct __VSRecognition { }*)_createRecognitionInstanceWithCallbacks:(struct { int (*x1)(); int (*x2)(); int (*x3)(); }*)arg1 info:(void*)arg2;
- (id)_keywords;
- (BOOL)_keywordIndexChanged;
- (int)_keywordCount;
- (id)_keywordAtIndex:(int)arg1;
- (float)_inputLevelDB;
- (float)_inputLevel;
- (void)_handledThreadedResults:(id)arg1 nextAction:(id)arg2;
- (BOOL)_setEngineResetRequired:(BOOL)arg1;
- (BOOL)_setInputLevelUpdateInterval:(double)arg1;
- (BOOL)_setAudioInputPath:(id)arg1;
- (BOOL)_setPreferredEngine:(int)arg1;
- (BOOL)_setDebugDumpEnabled:(BOOL)arg1;
- (BOOL)_setDebugDumpPath:(id)arg1;
- (BOOL)_setBluetoothInputAllowed:(BOOL)arg1;
- (BOOL)_isActivelyRecognizing;
- (BOOL)_isRecognizing;
- (id)initWithModelIdentifier:(id)arg1;
- (id)_debugDumpPath;
- (BOOL)_hasDeferredStartCallback;
- (void)_continueAfterDeferredStart;
- (void)_setResults:(id)arg1;
- (int)completionType;
- (id)modelIdentifier;
- (void)_reset;
- (id)perform;
- (id)cancel;
- (void)dealloc;

@end
