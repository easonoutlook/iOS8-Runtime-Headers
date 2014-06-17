/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSCH3DGetSelectionKnobsPositionsPipelineDelegate, NSArray, TSCH3DChartRep, NSMutableArray;

@interface TSCH3DGetSelectionKnobsPositionsPipeline : TSCH3DSceneRenderPipeline <TSCH3DSceneObjectDelegator, TSCHUnretainedParent> {
    TSCH3DChartRep *mRep;
    TSCH3DGetSelectionKnobsPositionsPipelineDelegate *mSceneObjectDelegate;
    NSArray *mSelection;
    NSMutableArray *mProjectedPoints;
    float mNormalizedKnobRadius;
}

@property(readonly) NSArray * projectedPoints;

+ (id)pipelineWithRep:(id)arg1 scene:(id)arg2 selection:(id)arg3 normalizedKnobRadius:(float)arg4;

- (BOOL)render;
- (void)dealloc;
- (id)initWithRep:(id)arg1 scene:(id)arg2 selection:(id)arg3 normalizedKnobRadius:(float)arg4;
- (id)projectedPoints;
- (Class)labelsMeshRendererClassForLabelsRenderer:(id)arg1;
- (void)getSelectionKnobsPositions:(id)arg1;
- (id)makeDelegateWithSceneObject:(id)arg1 scene:(id)arg2;
- (id)makeDelegateWithScene:(id)arg1;
- (void)clearParent;

@end