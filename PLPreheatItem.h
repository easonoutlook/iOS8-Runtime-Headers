/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPreheatItem : NSObject  {
    int _format;
    int _imageType;
    struct CGSize { 
        float width; 
        float height; 
    } _optimalSourcePixelSize;
    int _prefetchCount;
    BOOL _heated;
    int _bestFormat;
}

@property(readonly) int format;
@property(readonly) struct CGSize { float x1; float x2; } optimalSourcePixelSize;
@property int bestFormat;
@property BOOL heated;
@property(readonly) int imageType;


- (int)imageType;
- (void)setHeated:(BOOL)arg1;
- (BOOL)heated;
- (void)setBestFormat:(int)arg1;
- (int)bestFormat;
- (int)decrementPrefetchCount;
- (int)incrementPrefetchCount;
- (void)cancelPreheatRequest;
- (BOOL)addImageHandler:(id)arg1;
- (id)cachedImageIfAvailable;
- (id)cachedImage;
- (struct CGSize { float x1; float x2; })optimalSourcePixelSize;
- (void)startPreheatRequestWithCompletionHandler:(id)arg1;
- (int)format;
- (BOOL)isCancelled;

@end
