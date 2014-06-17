/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray;

@interface UIWheelEvent : UIInternalEvent  {
    NSMutableArray *_recentScrollTimestamps;
}


- (BOOL)_canHaveVelocity;
- (float)_wheelVelocity;
- (void)_sendEventToResponder:(id)arg1;
- (void)_setHIDEvent:(struct __IOHIDEvent { }*)arg1;
- (int)subtype;
- (int)type;
- (void)dealloc;

@end
