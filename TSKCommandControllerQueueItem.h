/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSKCommand, TSKCommandSelectionBehavior;

@interface TSKCommandControllerQueueItem : NSObject  {
    TSKCommand *_command;
    int _phase;
    TSKCommandSelectionBehavior *_selectionBehavior;
}

@property(readonly) TSKCommand * command;
@property(readonly) int phase;
@property(readonly) TSKCommandSelectionBehavior * selectionBehavior;


- (int)phase;
- (void)dealloc;
- (id)command;
- (id)selectionBehavior;
- (id)initWithCommand:(id)arg1 phase:(int)arg2 selectionBehavior:(id)arg3;

@end
