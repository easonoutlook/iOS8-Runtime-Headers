/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSURL;

@interface KNEmptyMovieFileGenerator : NSObject  {
    NSURL *mGeneratedFileURL;
    double mDuration;
}

@property(readonly) NSURL * generatedFileURL;


- (void)dealloc;
- (id)init;
- (void)generateFileWithCompletionHandler:(id)arg1;
- (id)generatedFileURL;
- (id)initWithGeneratedFileURL:(id)arg1 duration:(double)arg2;

@end
