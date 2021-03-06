/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSMutableArray, TSCH3DGLStatisticsData;

@interface TSCH3DGLStatistics : NSObject  {
    unsigned int mLifespan;
    NSMutableArray *mFrames;
}

@property(readonly) TSCH3DGLStatisticsData * allFramesStatistics;
@property(readonly) TSCH3DGLStatisticsData * currentFrameStatistics;


- (void)beginFrame;
- (void)endFrame;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)currentFrameStatistics;
- (id)allFramesStatistics;
- (void)pushStatistics;
- (void)drawGeometry:(id)arg1;
- (void)activateShader:(id)arg1;

@end
