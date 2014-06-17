/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@class NSString, NSArray;

@interface CHTextRecognitionResult : CHRecognitionResult  {
    BOOL _rare;
    NSString *_string;
    NSArray *_wordRanges;
    NSArray *_wordIDs;
}

@property(readonly) BOOL rare;
@property(readonly) NSString * string;
@property(readonly) NSArray * wordRanges;
@property(readonly) NSArray * wordIDs;


- (id)wordIDs;
- (id)wordRanges;
- (BOOL)rare;
- (id)initWithString:(id)arg1 score:(double)arg2 rare:(BOOL)arg3 wordRanges:(id)arg4 wordIDs:(id)arg5;
- (id)string;
- (void)dealloc;

@end