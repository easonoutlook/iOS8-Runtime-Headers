/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@class NSString;

@interface TIPinyinDisambiguationCandidate : TIKeyboardCandidateSingle  {
    NSString *_label;
}

+ (id)candidateWithPinyinSyllable:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (int)type;

- (id)initWithPinyinSyllable:(id)arg1;
- (void)encodeWithCandidateResultSetCoder:(id)arg1;
- (id)initWithCandidateResultSetCoder:(id)arg1;
- (id)label;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end