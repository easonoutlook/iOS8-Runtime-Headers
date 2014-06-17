/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDConnectionLineEditor : TSDShapeEditor  {
}

+ (id)commandForSettingConnectionLineLayout:(id)arg1 toType:(int)arg2;

- (void)endChangingConnectionOutset;
- (void)didChangeConnectionRightOutset:(float)arg1;
- (void)didChangeConnectionLeftOutset:(float)arg1;
- (void)beginChangingConnectionOutset;
- (float)rightOutset;
- (float)leftOutset;
- (void)p_didChangeConnectionOutset:(float)arg1 onLeft:(BOOL)arg2;
- (float)p_outsetOnLeft:(BOOL)arg1;
- (void)setConnectionLineType:(int)arg1;
- (void)toggleLineType:(id)arg1;
- (id)selectedObjectsSupportingConnectionLineAttributes;
- (int)canPerformEditorAction:(SEL)arg1 withSender:(id)arg2;

@end
