/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString;

@interface UIWKAutocorrectionContext : NSObject  {
    NSString *_contextBeforeSelection;
    NSString *_selectedText;
    NSString *_contextAfterSelection;
    NSString *_markedText;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _rangeInMarkedText;
}

@property(copy) NSString * contextBeforeSelection;
@property(copy) NSString * selectedText;
@property(copy) NSString * contextAfterSelection;
@property(copy) NSString * markedText;
@property struct _NSRange { unsigned int x1; unsigned int x2; } rangeInMarkedText;


- (void)setRangeInMarkedText:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setMarkedText:(id)arg1;
- (void)setContextAfterSelection:(id)arg1;
- (void)setContextBeforeSelection:(id)arg1;
- (void)setSelectedText:(id)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })rangeInMarkedText;
- (id)contextAfterSelection;
- (id)contextBeforeSelection;
- (id)markedText;
- (id)selectedText;
- (void)dealloc;

@end