/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSULogarithmicRegressionModel : TSURegressionModel  {
    double *mCoefficients;
    int mNumCoefficients;
    BOOL mAffine;
    double mIntercept;
    double mRSquared;
}


- (void)dealloc;
- (id)getEquationStringAndBuildSuperscriptRangesArray;
- (double)estimateForX:(double*)arg1;
- (double)rSquared;
- (double)coefficientAtIndex:(int)arg1;
- (int)numCoefficients;
- (int)regressionType;
- (id)initNonAffineWithMappings:(int)arg1 xs:(double*)arg2 ys:(double*)arg3 xDimension:(int)arg4 desiredIntercept:(double)arg5;
- (id)initAffineWithMappings:(int)arg1 xs:(double*)arg2 ys:(double*)arg3 xDimension:(int)arg4;
- (id)initWithMappings:(int)arg1 xs:(double*)arg2 ys:(double*)arg3 xDimension:(int)arg4 makeAffine:(BOOL)arg5 desiredIntercept:(double)arg6;

@end
