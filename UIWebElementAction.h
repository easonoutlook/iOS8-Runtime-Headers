/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString;

@interface UIWebElementAction : NSObject  {
    NSString *_title;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _actionHandler;

    int _type;
}

@property(readonly) int type;

+ (id)standardElementActionWithType:(int)arg1;
+ (id)customElementActionWithTitle:(id)arg1 actionHandler:(id)arg2;
+ (id)standardElementActionWithType:(int)arg1 customTitle:(id)arg2;

- (id)initWithTitle:(id)arg1 actionHandler:(id)arg2 type:(int)arg3;
- (void)_runActionWithElement:(id)arg1 targetURL:(id)arg2 documentView:(id)arg3 interactionLocation:(struct CGPoint { float x1; float x2; })arg4;
- (id)_title;
- (int)type;
- (void)dealloc;

@end
