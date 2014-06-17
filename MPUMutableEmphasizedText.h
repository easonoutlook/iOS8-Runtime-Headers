/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@class NSArray, NSMutableString;

@interface MPUMutableEmphasizedText : MPUEmphasizedText  {
}

@property(readonly) NSMutableString * mutableString;
@property(copy) NSArray * emphasisRanges;


- (id)initWithString:(id)arg1 emphasisRanges:(id)arg2;
- (void)removeEmphasisRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)addEmphasisRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setEmphasisRanges:(id)arg1;
- (id)mutableString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
