/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UITouch;

@interface UITouchData : NSObject  {
    struct CGPoint { 
        float x; 
        float y; 
    } startTouchDownLocation;
    unsigned int lastTapCount;
    double lastTouchUpTimestamp;
    double lastTouchDownTimestamp;
    BOOL touchIsValidTap;
    UITouch *lastTouch;
}



@end
