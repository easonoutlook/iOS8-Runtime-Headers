/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@class NSMutableArray;

@interface _IMLogFileCompressor : NSObject <IMFileCopierDelegate> {
    NSMutableArray *_archivers;
}

+ (id)sharedInstance;

- (void)compressPath:(id)arg1 toPath:(id)arg2;
- (void)fileCopierDidFinish:(id)arg1;
- (void)fileCopierDidStart:(id)arg1;
- (void)dealloc;
- (id)init;

@end
