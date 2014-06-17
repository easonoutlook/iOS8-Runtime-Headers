/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSError, AVAssetReaderInternal, NSArray, AVAsset;

@interface AVAssetReader : NSObject  {
    AVAssetReaderInternal *_priv;
}

@property(retain,readonly) AVAsset * asset;
@property(readonly) int status;
@property(readonly) NSError * error;
@property struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } timeRange;
@property(readonly) NSArray * outputs;
@property(getter=_figAssetReader,readonly) struct OpaqueFigAssetReader { }* figAssetReader;

+ (id)assetReaderWithAsset:(id)arg1 error:(id*)arg2;
+ (void)initialize;
+ (id)_errorForOSStatus:(long)arg1;

- (void)setTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (id)error;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;
- (BOOL)startReading;
- (id)outputs;
- (void)addOutput:(id)arg1;
- (int)status;
- (id)asset;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)description;
- (void)dealloc;
- (void)finalize;
- (id)init;
- (struct OpaqueFigAssetReader { }*)_figAssetReader;
- (void)_handleServerDiedNotification;
- (BOOL)canAddOutput:(id)arg1;
- (void)_transitionToStatus:(int)arg1 failureError:(id)arg2;
- (BOOL)_canAddOutput:(id)arg1 exceptionReason:(id*)arg2;
- (void)_tearDownFigAssetReader;
- (id)initWithAsset:(id)arg1 error:(id*)arg2;
- (void)cancelReading;

@end