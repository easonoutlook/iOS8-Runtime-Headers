/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLHorizonDetection : NSObject  {
    char *_grayScale;
    char *_rgb;
    char *_orgEdge;
    char *_processedEdge;
    char *_bwLabelSceneMap;
    int _rows;
    int _cols;
    int _isHor;
    int _numLines;
    float _scaleFactor;
    struct { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGPoint { float x_2_1_1; float x_2_1_2; } x2; float *x3; float x4; int x5; int x6; float x7; float x8; float x9; float x10; float x11; float x12; struct CGPoint { float x_13_1_1; float x_13_1_2; } x13; struct CGPoint { float x_14_1_1; float x_14_1_2; } x14; float x15; int x16; int x17; int x18; int x19; } *_detectedLinePointer;
    struct { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1[2]; float x2; BOOL x3; } *_detectedHorPointerH;
    float *_edgeAngle;
}

+ (void)findHorizonForImage:(id)arg1 horizonLineH:(struct { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1[2]; float x2; BOOL x3; }*)arg2;

- (void)edgeOrientationAnalysisFindModes:(char *)arg1;
- (void)imageStatisticalAnalysis:(unsigned int*)arg1 numCC:(int)arg2;
- (void)lineOverlapHorBW:(struct { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGPoint { float x_2_1_1; float x_2_1_2; } x2; float *x3; float x4; int x5; int x6; float x7; float x8; float x9; float x10; float x11; float x12; struct CGPoint { float x_13_1_1; float x_13_1_2; } x13; struct CGPoint { float x_14_1_1; float x_14_1_2; } x14; float x15; int x16; int x17; int x18; int x19; }*)arg1 numLines:(int)arg2;
- (void)preProcessEdgeCC;
- (void)preProcessEdgeAnglePDF;
- (void)preProcessEdgeCheckNB;
- (void)sceneClassification;
- (void)findHorizon:(id)arg1 horizonLineH:(struct { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1[2]; float x2; BOOL x3; }*)arg2;
- (void)applyLineFilters;
- (void)horizonDetection;
- (void)extractGrayRGBData:(id)arg1;

@end
