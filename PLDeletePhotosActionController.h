/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, PLPhotoLibrary, UIActionSheet, <PLDeletePhotosActionControllerDelegate>;

@interface PLDeletePhotosActionController : NSObject <UIActionSheetDelegate> {
    UIActionSheet *_actionSheet;
    NSArray *_additionalAssetsToDelete;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _willDeleteHandler;

    int _actionSheetStyle;
    int _action;
    BOOL _handlesDuplicates;
    PLPhotoLibrary *_photoLibrary;
    NSArray *_assets;
    <PLDeletePhotosActionControllerDelegate> *_delegate;
}

@property(readonly) PLPhotoLibrary * photoLibrary;
@property(readonly) NSArray * assets;
@property(readonly) int action;
@property(readonly) BOOL handlesDuplicates;
@property <PLDeletePhotosActionControllerDelegate> * delegate;
@property int actionSheetStyle;

+ (id)_usedElsewhereWarningTextForAssetCount:(int)arg1 inPhotoStreamCount:(int)arg2 iniPhotoCount:(int)arg3 inSomeAlbumCount:(int)arg4 affectedLocalAlbumsCount:(int)arg5 itemKindSuffix:(id)arg6 actualDeletionCount:(int)arg7;
+ (id)allUsedElsewhereMessageCombinations;

- (id)photoLibrary;
- (id)assets;
- (BOOL)handlesDuplicates;
- (void)_setupActionSheet;
- (void)_getDeleteActionSheetTitle:(id*)arg1 destructiveButtonTitle:(id*)arg2 cancelButtonTitle:(id*)arg3 forAssets:(id)arg4 additionalPhotoStreamAssets:(id)arg5;
- (id)_usedElsewhereWarningTextForAssets:(id)arg1 additionalPhotoStreamAssets:(id)arg2 actualDeletionCount:(int)arg3;
- (id)_avalancheDeleteWarningForAssets:(id)arg1 actualDeletionCount:(int*)arg2;
- (id)_cloudSharedWarningTextForAssets:(id)arg1;
- (void)redisplayFromObject:(id)arg1 animated:(BOOL)arg2;
- (void)showInView:(id)arg1 willDeleteHandler:(id)arg2 completionHandler:(id)arg3;
- (int)actionSheetStyle;
- (void)setActionSheetStyle:(int)arg1;
- (void)dismissAnimated:(BOOL)arg1;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)actionSheet:(id)arg1 willDismissWithButtonIndex:(int)arg2;
- (int)action;
- (id)delegate;
- (void)showFromObject:(id)arg1 animated:(BOOL)arg2 willDeleteHandler:(id)arg3 completionHandler:(id)arg4;
- (id)initWithPhotoLibrary:(id)arg1 assets:(id)arg2 action:(int)arg3 handleDuplicates:(BOOL)arg4;
- (void)dealloc;
- (void)setDelegate:(id)arg1;

@end
