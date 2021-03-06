/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UILongPressGestureRecognizer, UITapGestureRecognizer, _UITextServiceSession, NSString, UITextChecker;

@interface UIWKTextInteractionAssistant : UITextInteractionAssistant  {
    int _selectionOperation;
    _UITextServiceSession *_definitionSession;
    _UITextServiceSession *_learnSession;
    UITextChecker *_textChecker;
    unsigned int _options;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _caretBeforeTap;
    NSString *_wordBeforeTap;
    UITapGestureRecognizer *_singleTapGesture;
    UILongPressGestureRecognizer *_loupeGesture;
}

@property(retain,readonly) UITapGestureRecognizer * singleTapGesture;
@property(retain,readonly) UILongPressGestureRecognizer * loupeGesture;


- (void)showTextServiceFor:(id)arg1 fromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)hideTextStyleOptions;
- (void)showTextStyleOptions;
- (void)scheduleReplacementsForText:(id)arg1;
- (void)scheduleChineseTransliterationForText:(id)arg1;
- (void)selectWithTapGestureAt:(struct CGPoint { float x1; float x2; })arg1 withGesture:(int)arg2 withState:(int)arg3;
- (void)selectTextForReplacement:(id)arg1 withOptions:(unsigned int)arg2;
- (void)showReplacementsForText:(id)arg1 withOptions:(unsigned int)arg2;
- (BOOL)shouldTryReplacementsForText:(id)arg1 withOptions:(unsigned int)arg2;
- (void)scheduleReplacementsForText:(id)arg1 withOptions:(unsigned int)arg2;
- (void)selectionChangedWithTouchAt:(struct CGPoint { float x1; float x2; })arg1 withSelectionTouch:(int)arg2;
- (void)selectionChangedWithGestureAt:(struct CGPoint { float x1; float x2; })arg1 withGesture:(int)arg2 withState:(int)arg3;
- (void)showDictionaryFor:(id)arg1 fromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)selectionChangedWithTouchAt:(struct CGPoint { float x1; float x2; })arg1 withSelectionTouch:(int)arg2 withFlags:(int)arg3;
- (void)selectionChangedWithGestureAt:(struct CGPoint { float x1; float x2; })arg1 withGesture:(int)arg2 withState:(int)arg3 withFlags:(int)arg4;
- (void)rangeSelectionMoved:(struct CGPoint { float x1; float x2; })arg1 withTouchPoint:(struct CGPoint { float x1; float x2; })arg2;
- (void)rangeSelectionEnded:(struct CGPoint { float x1; float x2; })arg1;
- (void)rangeSelectionStarted:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)containerAllowsSelection;
- (BOOL)containerAllowsSelectionTintOnly;
- (void)updateWithMagnifierTerminalPoint:(BOOL)arg1;
- (void)scrollSelectionToVisible;
- (id)_asText;
- (void)twoFingerRangedSelectGesture:(id)arg1;
- (void)loupeGesture:(id)arg1;
- (void)tapAndAHalf:(id)arg1;
- (void)twoFingerSingleTap:(id)arg1;
- (void)oneFingerTripleTap:(id)arg1;
- (void)oneFingerTap:(id)arg1;
- (void)oneFingerDoubleTap:(id)arg1;
- (BOOL)containerIsPlainStyleAtom;
- (BOOL)containerIsAtom;
- (BOOL)containerIsBrowserView;
- (void)updateSelectionWithPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)singleTapGesture;
- (id)loupeGesture;
- (void)scheduleReplacementsWithOptions:(unsigned int)arg1;
- (void)selectWord;
- (void)selectAll:(id)arg1;
- (id)initWithView:(id)arg1;
- (void)selectionChanged;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)dealloc;

@end
