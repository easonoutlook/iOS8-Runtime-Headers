/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSNumber, NSMutableArray, NSString;

@interface UISubTest : NSObject  {
    NSNumber *_startTime;
    NSNumber *_startFrame;
    NSMutableArray *_time;
    NSMutableArray *_fps;
    NSString *_testName;
    BOOL _showTime;
    BOOL _showFps;
}


- (void).cxx_destruct;
- (id)outputData;
- (void)stopWithFrameCount:(id)arg1;
- (void)startWithFrameCount:(id)arg1;
- (id)initWithName:(id)arg1 metrics:(id)arg2;

@end
