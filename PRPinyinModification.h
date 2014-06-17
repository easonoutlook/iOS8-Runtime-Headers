/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
 */

@class NSString;

@interface PRPinyinModification : PRModification  {
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _range;
    NSString *_replacementString;
    unsigned int _modificationType;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _syllableRange;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _additionalSyllableRange;
    double _modificationScore;
    unsigned int _syllableCountScore;
    unsigned char _letters[7];
    BOOL _producesPartialSyllable;
    BOOL _isTemporary;
}

+ (id)finalModificationsForInputString:(id)arg1;
+ (id)modificationsForInputString:(id)arg1;

- (struct _NSRange { unsigned int x1; unsigned int x2; })additionalSyllableRange;
- (double)modificationScore;
- (struct _NSRange { unsigned int x1; unsigned int x2; })syllableRange;
- (unsigned int)modificationType;
- (id)initWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 replacementString:(id)arg2 modificationType:(unsigned int)arg3 syllableRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4 modificationScore:(double)arg5;
- (id)initWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 replacementString:(id)arg2 modificationType:(unsigned int)arg3 syllableRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4 modificationScore:(double)arg5 isTemporary:(BOOL)arg6;
- (id)initWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 replacementString:(id)arg2 modificationType:(unsigned int)arg3 syllableRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4 modificationScore:(double)arg5 syllableCountScore:(unsigned int)arg6 syllableLetters:(const char *)arg7 producesPartialSyllable:(BOOL)arg8 isTemporary:(BOOL)arg9;
- (id)initWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 replacementString:(id)arg2 modificationType:(unsigned int)arg3 syllableRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4 additionalSyllableRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg5 modificationScore:(double)arg6;
- (id)initWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 replacementString:(id)arg2 modificationType:(unsigned int)arg3 syllableRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4 additionalSyllableRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg5 modificationScore:(double)arg6 syllableCountScore:(unsigned int)arg7 syllableLetters:(const char *)arg8 producesPartialSyllable:(BOOL)arg9 isTemporary:(BOOL)arg10;
- (BOOL)_shouldAppendLetter:(unsigned char)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })combinedSyllableRange;
- (id)initWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 replacementString:(id)arg2 modificationType:(unsigned int)arg3 syllableRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4 modificationScore:(double)arg5 syllableCountScore:(unsigned int)arg6 syllableLetters:(const char *)arg7 producesPartialSyllable:(BOOL)arg8;
- (BOOL)producesPartialSyllable;
- (unsigned int)syllableCountScore;
- (id)initWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 replacementString:(id)arg2 modificationType:(unsigned int)arg3 syllableRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4 additionalSyllableRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg5 modificationScore:(double)arg6 syllableCountScore:(unsigned int)arg7 syllableLetters:(const char *)arg8 producesPartialSyllable:(BOOL)arg9;
- (struct _NSRange { unsigned int x1; unsigned int x2; })range;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)replacementString;
- (BOOL)isTemporary;

@end
