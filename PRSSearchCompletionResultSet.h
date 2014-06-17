/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Parsec.framework/Parsec
 */

@class PRSDecoder, NSString, NSArray;

@interface PRSSearchCompletionResultSet : NSObject <PRSDecoderDelegate> {
    PRSDecoder *_decoder;
    BOOL _cacheable;
    NSString *_prefix;
    NSString *_completionString;
    NSString *_feedbackQueryIdentifier;
    NSArray *_results;
}

@property(readonly) NSString * prefix;
@property(readonly) NSString * completionString;
@property(readonly) NSString * feedbackQueryIdentifier;
@property(getter=isCacheable,readonly) BOOL cacheable;
@property(readonly) NSArray * results;


- (BOOL)isCacheable;
- (id)feedbackQueryIdentifier;
- (id)completionString;
- (id)prefix;
- (Class)classForObjectsAtPropertyPath:(id)arg1 ofObject:(id)arg2 withValue:(id)arg3 protocol:(id*)arg4;
- (Class)classForObjectsAtPropertyPath:(id)arg1 ofObject:(id)arg2 protocol:(id*)arg3;
- (id)convertedValue:(id)arg1 forPropertyPath:(id)arg2 ofObject:(id)arg3;
- (id)serverKeysForKey:(id)arg1 ofObject:(id)arg2;
- (id)resultForFactory:(id)arg1 resourceProvider:(id)arg2 dictionary:(id)arg3;
- (id)initWithFactory:(id)arg1 resourceProvider:(id)arg2 prefix:(id)arg3 completionString:(id)arg4 resultStatusString:(id)arg5 feedbackQueryIdentifier:(id)arg6 resultDictionaries:(id)arg7;
- (void).cxx_destruct;
- (id)results;
- (id)description;

@end