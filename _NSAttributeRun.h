/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@class NSTextStorage, NSMutableArray;

@interface _NSAttributeRun : NSObject <NSCopying> {
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _range;
    NSTextStorage *_textStorage;
    NSMutableArray *_attributesArray;
}


- (void)restoreAttributesOfTextStorage:(id)arg1;
- (id)initWithTextStorage:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })range;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;

@end
