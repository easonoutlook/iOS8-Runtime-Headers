/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString;

@interface _EditScriptRangedAtom : NSObject  {
    NSString *_replacementText;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _editRange;
}

@property struct _NSRange { unsigned int x1; unsigned int x2; } editRange;
@property(retain) NSString * replacementText;

+ (id)atomWithEditRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 replacementText:(id)arg2;

- (id)replacementText;
- (struct _NSRange { unsigned int x1; unsigned int x2; })editRange;
- (id)initWithEditRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 replacementText:(id)arg2;
- (void)setReplacementText:(id)arg1;
- (void)setEditRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)description;
- (void)dealloc;

@end
