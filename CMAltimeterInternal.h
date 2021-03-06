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

@class NSOperationQueue;

@interface CMAltimeterInternal : NSObject  {
    struct Dispatcher { int (**x1)(); id x2; } *fFilteredPressureDispatcher;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id fRelativeAltimeterHandler;

    NSOperationQueue *fRelativeAltimeterQueue;
    struct Sample { 
        double timestamp; 
        struct { 
            float pressure; 
            float temperature; 
        } pressureData; 
    } fBaseAltimeterSample;
    float fBarometricBaseAltitude;
    boolfBaselineReceived;
}


- (id).cxx_construct;
- (void)dealloc;
- (id)initWithInfo:(id)arg1;

@end
