/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class UITextView, UILabel;

@interface EKEventDetailNotesCell : EKEventDetailCell  {
    UILabel *_notesTitleView;
    UITextView *_notesView;
    BOOL _isTruncatingNotes;
}

@property(readonly) BOOL isTruncatingNotes;


- (void).cxx_destruct;
- (BOOL)update;
- (BOOL)isTruncatingNotes;
- (id)_notesTitleView;
- (id)_notesView;
- (void)layoutForWidth:(float)arg1 position:(int)arg2;

@end
