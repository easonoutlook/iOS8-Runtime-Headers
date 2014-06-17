/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@class NSMutableArray, UIActionSheet;

@interface MCDActionSheetController : NSObject <UIActionSheetDelegate> {
    UIActionSheet *_actionSheet;
    NSMutableArray *_titles;
    NSMutableArray *_handlers;
}

@property(readonly) UIActionSheet * actionSheet;


- (void)addActionWithTitle:(id)arg1 handler:(id)arg2;
- (id)_handlerAtIndex:(int)arg1;
- (id)actionSheet;
- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;

@end
