/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CorePrediction.framework/CorePrediction
 */

@class CPMLModelEvaluate, NSString;

@interface CPMLModel : NSObject  {
    NSString *_savedPlistPath;
    NSString *_modelPath;
    CPMLModelEvaluate *cpModelEvaluate;
}

@property(retain) CPMLModelEvaluate * cpModelEvaluate;


- (id)cpModelEvaluate;
- (BOOL)updateModelWithCPDB:(id)arg1;
- (BOOL)updateModelWithDB:(id)arg1;
- (id)initWithModelPath:(id)arg1 withConfiguration:(id)arg2;
- (void)boundResult:(id)arg1;
- (id)evalDict:(id)arg1;
- (id)evalArray:(id)arg1;
- (id)evalNSObjectV:(id)arg1;
- (id)evalString:(id)arg1;
- (id)getPropertyList;
- (id)initWithModelPath:(id)arg1 withPropertyListPath:(id)arg2;
- (void)setCpModelEvaluate:(id)arg1;
- (void).cxx_destruct;
- (BOOL)reset;

@end
