/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VUSocialUpload.framework/VUSocialUpload
 */

@class NSURL, NSFileHandle;

@interface VUDataReader : NSObject  {
    NSFileHandle *_readHandle;
    NSURL *_URL;
}

@property(retain) NSFileHandle * readHandle;
@property(retain) NSURL * URL;

+ (id)dataReaderWithURL:(id)arg1 error:(id*)arg2;

- (void)setReadHandle:(id)arg1;
- (id)dataWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (BOOL)_openFileIfNeededWithError:(id*)arg1;
- (void).cxx_destruct;
- (void)setURL:(id)arg1;
- (id)URL;
- (unsigned int)length;
- (void)dealloc;
- (id)readHandle;

@end
