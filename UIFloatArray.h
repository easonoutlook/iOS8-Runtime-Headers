/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIFloatArray : NSObject  {
    int _count;
    int _gapCount;
    int *_gaps;
    float _gapValue;
    float _minValue;
    union { 
        float singleton; 
        float *array; 
    } _values;
    struct { 
        unsigned int valueIsSingleton : 1; 
        unsigned int hideGaps : 1; 
        unsigned int unused : 30; 
    } _floatArrayFlags;
}


- (void)hideGaps:(BOOL)arg1;
- (int)indexForGapIndex:(int)arg1;
- (struct { int x1; int x2; int x3; int x4; BOOL x5; BOOL x6; })indexesFromOffset:(float)arg1 toOffset:(float)arg2;
- (struct { float x1; float x2; })offsetsForGapIndex:(int)arg1;
- (struct { float x1; float x2; })offsetsForIndex:(int)arg1;
- (float)sum;
- (int)valueCount;
- (float)minValue;
- (float)singleValue;
- (BOOL)refreshWithDataProvider:(id)arg1;
- (BOOL)refreshWithDataProvider:(id)arg1 singleValue:(float)arg2;
- (struct { int x1; int x2; int x3; int x4; BOOL x5; BOOL x6; })_indexesViaArrayFromOffset:(float)arg1 toOffset:(float)arg2;
- (struct { int x1; int x2; int x3; int x4; BOOL x5; BOOL x6; })_indexesViaSingletonFromOffset:(float)arg1 toOffset:(float)arg2;
- (BOOL)_setupWithDataProvider:(id)arg1 valueIsSingleton:(BOOL)arg2 singletonValue:(float)arg3 isRefresh:(BOOL)arg4;
- (BOOL)_setupGapIndexesWithCount:(int)arg1 dataProvider:(id)arg2 isRefresh:(BOOL)arg3;
- (BOOL)_setupValuesWithCount:(int)arg1 dataProvider:(id)arg2 isRefresh:(BOOL)arg3;
- (BOOL)_setupValuesWithCount:(int)arg1 singleValue:(float)arg2 isRefresh:(BOOL)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;

@end
