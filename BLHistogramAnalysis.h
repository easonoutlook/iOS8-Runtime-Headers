/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLHistogramAnalysis : NSObject  {
    float _blackPoint;
    float _whitePoint;
    float _blackPointRed;
    float _whitePointRed;
    float _blackPointGreen;
    float _whitePointGreen;
    float _blackPointBlue;
    float _whitePointBlue;
    float _averageLinearRed;
    float _averageLinearBlue;
    float _averageLinearGreen;
}

@property float blackPoint;
@property float whitePoint;
@property float blackPointRed;
@property float whitePointRed;
@property float blackPointGreen;
@property float whitePointGreen;
@property float blackPointBlue;
@property float whitePointBlue;
@property float averageLinearRed;
@property float averageLinearBlue;
@property float averageLinearGreen;


- (void)setAverageLinearGreen:(float)arg1;
- (float)averageLinearGreen;
- (void)setAverageLinearBlue:(float)arg1;
- (float)averageLinearBlue;
- (void)setAverageLinearRed:(float)arg1;
- (float)averageLinearRed;
- (void)setWhitePointBlue:(float)arg1;
- (float)whitePointBlue;
- (void)setBlackPointBlue:(float)arg1;
- (float)blackPointBlue;
- (void)setWhitePointGreen:(float)arg1;
- (float)whitePointGreen;
- (void)setBlackPointGreen:(float)arg1;
- (float)blackPointGreen;
- (void)setWhitePointRed:(float)arg1;
- (float)whitePointRed;
- (void)setBlackPointRed:(float)arg1;
- (float)blackPointRed;
- (void)setWhitePoint:(float)arg1;
- (float)whitePoint;
- (void)setBlackPoint:(float)arg1;
- (float)blackPoint;
- (id)initWithAnalysisDictionary:(id)arg1;
- (id)analysisDictionary;
- (id)initWithBLImage:(id)arg1;
- (id)description;
- (void)dealloc;

@end
