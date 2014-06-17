/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
 */

@class NSString;

@interface RKLexicalEntity : NSObject  {
    NSString *_string;
    NSString *_tokenType;
    NSString *_partOfSpeech;
    NSString *_lemma;
    NSString *_language;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _tokenRange;
}

@property(retain) NSString * string;
@property(retain) NSString * tokenType;
@property(retain) NSString * partOfSpeech;
@property(retain) NSString * lemma;
@property(retain) NSString * language;
@property struct _NSRange { unsigned int x1; unsigned int x2; } tokenRange;
@property(readonly) NSString * word;


- (void)setTokenType:(id)arg1;
- (id)word;
- (void)setPartOfSpeech:(id)arg1;
- (id)partOfSpeech;
- (void)setTokenRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setLemma:(id)arg1;
- (id)lemma;
- (struct _NSRange { unsigned int x1; unsigned int x2; })tokenRange;
- (id)tokenType;
- (void)setLanguage:(id)arg1;
- (id)language;
- (void).cxx_destruct;
- (void)setString:(id)arg1;
- (id)string;
- (id)description;

@end
