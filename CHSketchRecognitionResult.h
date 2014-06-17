/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@class NSString;

@interface CHSketchRecognitionResult : CHRecognitionResult  {
    NSString *_string;
    float _rotation;
}

@property(readonly) NSString * string;
@property(readonly) float rotation;


- (id)initWithString:(id)arg1 score:(double)arg2 rotation:(float)arg3;
- (float)rotation;
- (id)string;
- (void)dealloc;

@end
