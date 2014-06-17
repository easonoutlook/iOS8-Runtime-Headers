/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Parsec.framework/Parsec
 */

@class NSString, NSArray;

@interface PRSSearchResponse : NSObject  {
    int _status;
    NSString *_errorCodeString;
    NSArray *_completionResultSets;
    double _backOff;
    double _maxAge;
}

@property(readonly) int status;
@property(readonly) NSString * errorCodeString;
@property(readonly) double backOff;
@property(readonly) double maxAge;
@property(readonly) NSArray * completionResultSets;


- (id)completionResultSets;
- (id)errorCodeString;
- (double)backOff;
- (double)maxAge;
- (id)initWithFactory:(id)arg1 resourceProvider:(id)arg2 array:(id)arg3;
- (int)status;
- (void).cxx_destruct;
- (id)description;

@end