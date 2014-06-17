/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSPointerArray, NSString, NSOrderedSet, PUPhotoSelectionManager, NSObject<PLAlbumProtocol>;

@interface PUSessionInfo : NSObject <PUPhotoSelectionManagerDelegate> {
    NSPointerArray *_observers;
    BOOL _selectingAssets;
    BOOL _selectingTargetAlbum;
    BOOL _targetAlbumIsNewLocalAlbum;
    int _status;
    PUPhotoSelectionManager *_photoSelectionManager;
    struct NSObject { Class x1; } *_sourceAlbum;
    NSOrderedSet *_transferredAssets;
    struct NSObject { Class x1; } *_targetAlbum;
    NSString *_localizedPrompt;
    int _promptLocation;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _bannerGenerator;

}

@property int status;
@property(getter=isSelectingAssets,readonly) BOOL selectingAssets;
@property(getter=isSelectingTargetAlbum,readonly) BOOL selectingTargetAlbum;
@property(retain) PUPhotoSelectionManager * photoSelectionManager;
@property(retain) NSObject<PLAlbumProtocol> * sourceAlbum;
@property(copy) NSOrderedSet * transferredAssets;
@property(retain) NSObject<PLAlbumProtocol> * targetAlbum;
@property BOOL targetAlbumIsNewLocalAlbum;
@property(copy) NSString * localizedPrompt;
@property int promptLocation;
@property(copy) id bannerGenerator;


- (void)setStatus:(int)arg1;
- (int)status;
- (void).cxx_destruct;
- (void)setLocalizedPrompt:(id)arg1;
- (void)setTargetAlbumIsNewLocalAlbum:(BOOL)arg1;
- (BOOL)targetAlbumIsNewLocalAlbum;
- (void)setTargetAlbum:(struct NSObject { Class x1; }*)arg1;
- (void)setTransferredAssets:(id)arg1;
- (id)transferredAssets;
- (void)setSourceAlbum:(struct NSObject { Class x1; }*)arg1;
- (struct NSObject { Class x1; }*)sourceAlbum;
- (BOOL)isSelectingTargetAlbum;
- (void)_enumerateObserversWithBlock:(id)arg1;
- (void)photoSelectionManagerSelectionDidChange:(id)arg1;
- (void)setPhotoSelectionManager:(id)arg1;
- (void)setBannerGenerator:(id)arg1;
- (void)setPromptLocation:(int)arg1;
- (struct NSObject { Class x1; }*)targetAlbum;
- (id)localizedPrompt;
- (int)promptLocation;
- (id)photoSelectionManager;
- (id)bannerGenerator;
- (void)addSessionInfoObserver:(id)arg1;
- (void)removeSessionInfoObserver:(id)arg1;
- (BOOL)isSelectingAssets;
- (id)init;

@end
