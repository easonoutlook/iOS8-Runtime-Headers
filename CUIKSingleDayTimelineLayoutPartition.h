/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
 */

@class NSMutableArray, NSArray;

@interface CUIKSingleDayTimelineLayoutPartition : NSObject  {
    NSMutableArray *_stackOfOccurrences;
    float _initialLeftBoundary;
    float _rightBoundary;
    double _topBoundaryTime;
}

@property double topBoundaryTime;
@property float initialLeftBoundary;
@property float rightBoundary;
@property(readonly) NSArray * stackedOccurrences;
@property(readonly) float freeSpaceLeftBoundary;
@property(readonly) float freeSpaceWidth;


- (float)initialLeftBoundary;
- (float)freeSpaceLeftBoundary;
- (float)freeSpaceWidth;
- (float)rightBoundary;
- (double)topBoundaryTime;
- (id)stackedOccurrences;
- (void)setInitialLeftBoundary:(float)arg1;
- (void)pushOccurrence:(id)arg1;
- (void)setRightBoundary:(float)arg1;
- (void)setTopBoundaryTime:(double)arg1;
- (void)popOccurrence;
- (id)peekOccurrence;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
