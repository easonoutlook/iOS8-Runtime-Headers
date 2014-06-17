/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@class NSArray;

@interface FBWorkspaceEvent : BSEventQueueEvent  {
    NSArray *_callStackSymbols;
}

@property(retain) NSArray * callStackSymbols;


- (void)execute;
- (void)setCallStackSymbols:(id)arg1;
- (id)callStackSymbols;
- (id)debugDescription;
- (void)dealloc;
- (id)init;

@end