/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@class <IRInterfaceDelegate>, NSArray;

@interface IRInterface : CoreRCInterface  {
    <IRInterfaceDelegate> *_delegate;
}

@property <IRInterfaceDelegate> * delegate;
@property(readonly) NSArray * buttons;
@property(readonly) unsigned int maxStoredCommands;


- (BOOL)resetAllButtons:(id*)arg1;
- (BOOL)setCommand:(id)arg1 forButtonCombination:(id)arg2 delay:(double)arg3 error:(id*)arg4;
- (BOOL)clearAllStoredCommands:(id*)arg1;
- (BOOL)transmitFrame:(id)arg1 error:(id*)arg2;
- (unsigned int)maxStoredCommands;
- (void)receivedHIDEvent:(id)arg1;
- (void)receivedCommand:(id)arg1;
- (BOOL)transmitCommand:(id)arg1 pressDuration:(double)arg2 error:(id*)arg3;
- (void)receivedFrame:(id)arg1;
- (id)buttons;
- (id)delegate;
- (void)setDelegate:(id)arg1;

@end
