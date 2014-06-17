/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class QLPreviewThumbnailGenerator, NSMutableArray, NSOperation, UIImage, NSString, NSURL, UIDocumentInteractionController;

@interface QLPreviewArchiveItem : NSObject <QLPreviewUIItem> {
    UIDocumentInteractionController *_archiveController;
    QLPreviewThumbnailGenerator *_thumbnailGenerator;
    NSString *_path;
    NSURL *_unarchivedURL;
    NSOperation *_unarchiveOperation;
    NSMutableArray *_completionBlocks;
    int _previewItemIndex;
    int _UIItemIndex;
    int _level;
}

@property(readonly) NSString * path;
@property(readonly) BOOL unarchived;
@property int previewItemIndex;
@property int UIItemIndex;
@property int level;
@property(readonly) NSURL * previewItemURL;
@property(readonly) NSString * previewItemTitle;
@property(readonly) UIImage * icon;
@property(readonly) BOOL isFolder;


- (BOOL)isFolder;
- (void)cleanup;
- (id)previewItemURL;
- (id)initWithPath:(id)arg1;
- (int)level;
- (void)setLevel:(int)arg1;
- (void)setUIItemIndex:(int)arg1;
- (int)UIItemIndex;
- (void)setPreviewItemIndex:(int)arg1;
- (BOOL)unarchived;
- (id)initWithArchiveController:(id)arg1 path:(id)arg2;
- (void)unarchiveWithCompletionBlock:(id)arg1;
- (int)previewItemIndex;
- (void)cancelIconUpdate;
- (void)updateIconWithSize:(struct CGSize { float x1; float x2; })arg1 completionBlock:(id)arg2;
- (id)path;
- (void)dealloc;
- (id)icon;

@end
