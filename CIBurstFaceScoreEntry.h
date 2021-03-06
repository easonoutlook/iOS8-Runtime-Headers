/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIBurstFaceScoreEntry : NSObject  {
    float maxScore;
    float minScore;
    float sumScores;
    float sumSqScores;
    int numScores;
}

@property float maxScore;
@property float minScore;
@property int numScores;


- (void)setNumScores:(int)arg1;
- (int)numScores;
- (void)setMinScore:(float)arg1;
- (float)minScore;
- (void)setMaxScore:(float)arg1;
- (float)maxScore;
- (float)computeStandardDeviation;
- (void)addScore:(float)arg1;
- (id)initWithScore:(float)arg1;
- (float)computeAverage;

@end
