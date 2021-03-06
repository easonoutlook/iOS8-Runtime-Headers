/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSURL, NSString;

@interface CKAttachmentItem : NSObject <QLPreviewItem> {
    struct CGSize { 
        float width; 
        float height; 
    } _squarePreviewSize;
    struct CGSize { 
        float width; 
        float height; 
    } _posterPreviewSize;
    NSURL *_fileURL;
    NSString *_guid;
    NSURL *_squarePreviewURL;
    NSURL *_posterPreviewURL;
    struct CGSize { 
        float width; 
        float height; 
    } _backingSize;
}

@property(copy) NSURL * fileURL;
@property(copy) NSString * guid;
@property struct CGSize { float x1; float x2; } backingSize;
@property(copy) NSURL * squarePreviewURL;
@property(copy) NSURL * posterPreviewURL;
@property(readonly) NSURL * previewItemURL;
@property(readonly) NSString * previewItemTitle;

+ (id)saveQueue;
+ (struct CGSize { float x1; float x2; })defaultSizeForType:(int)arg1;
+ (id)UTITypes;
+ (id)previewCache;
+ (id)previewQueue;
+ (void)cancelPreviewGeneration;

- (struct CGSize { float x1; float x2; })backingSize;
- (id)imageData;
- (id)guid;
- (void)setFileURL:(id)arg1;
- (id)posterPreviewURL;
- (id)squarePreviewURL;
- (id)_savedPreviewFromURL:(id)arg1;
- (void)setPosterPreviewURL:(id)arg1;
- (void)setSquarePreviewURL:(id)arg1;
- (void)setGuid:(id)arg1;
- (void)setBackingSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_savePreview:(id)arg1 forType:(int)arg2 forSize:(struct CGSize { float x1; float x2; })arg3;
- (id)_generatePreviewURLForType:(int)arg1 withSize:(struct CGSize { float x1; float x2; })arg2;
- (id)initWithFileURL:(id)arg1 size:(struct CGSize { float x1; float x2; })arg2 guid:(id)arg3;
- (id)pasteboardItem;
- (void)generatePreviewForSize:(struct CGSize { float x1; float x2; })arg1 withType:(int)arg2 queue:(id)arg3 completion:(id)arg4;
- (id)UTIType;
- (id)cachedPreviewForType:(int)arg1 withSize:(struct CGSize { float x1; float x2; })arg2;
- (id)fileURL;
- (id)previewItemURL;
- (struct CGSize { float x1; float x2; })size;
- (id)description;
- (void)dealloc;

@end
