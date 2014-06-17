/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@class UIPDFPageImageCache, NSString, <NSObject><UIPDFDocumentDelegate>;

@interface UIPDFDocument : NSObject  {
    struct CGPDFDocument { } *_cgDocument;
    unsigned int _numberOfPages;
    float _cachedWidth;
    NSString *_documentID;
    NSString *_documentName;
    UIPDFPageImageCache *_pageImageCache;
    unsigned int _imageCacheCount;
    unsigned int _imageCacheLookAhead;
    int _lock;
    int _imageCacheLock;
    UIPDFPageImageCache *_thumbnailCache;
    int _thumbnailLock;
    <NSObject><UIPDFDocumentDelegate> *_delegate;
}

@property(readonly) unsigned int numberOfPages;
@property(retain) UIPDFPageImageCache * pageImageCache;
@property(retain) UIPDFPageImageCache * thumbnailCache;
@property(readonly) struct CGPDFDocument { }* CGDocument;
@property <NSObject><UIPDFDocumentDelegate> * delegate;
@property(readonly) NSString * documentID;

+ (id)documentNamed:(id)arg1;

- (float)maxWidth;
- (float)maxHeight;
- (void)setThumbnailCache:(id)arg1;
- (id)thumbnailCache;
- (void)setPageImageCache:(id)arg1;
- (id)pageImageCache;
- (float)sumHeight;
- (float)sumWidth;
- (BOOL)copyDocumentTo:(id)arg1;
- (BOOL)allowsCopying;
- (void)purgePagesBefore:(unsigned int)arg1;
- (id)copyPageAtIndex:(unsigned int)arg1;
- (struct CGPDFDocument { }*)copyCGPDFDocument;
- (void)setImageCacheCount:(unsigned int)arg1 lookAhead:(unsigned int)arg2;
- (id)documentID;
- (struct CGPDFDocument { }*)CGDocument;
- (id)initWithCGPDFDocument:(struct CGPDFDocument { }*)arg1;
- (id)pageAtIndex:(unsigned int)arg1;
- (unsigned int)numberOfPages;
- (id)initWithURL:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void)setDelegate:(id)arg1;

@end
