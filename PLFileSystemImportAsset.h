/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSDate, NSObject<PLAlbumProtocol>, NSMutableSet;

@interface PLFileSystemImportAsset : NSObject  {
    NSMutableSet *_urls;
    NSDate *_dateCreated;
    struct NSObject { Class x1; } *_destinationAlbum;
    int assetKind;
}

@property(retain) NSMutableSet * urls;
@property(retain) NSDate * dateCreated;
@property(retain) NSObject<PLAlbumProtocol> * destinationAlbum;
@property int assetKind;


- (int)assetKind;
- (void)setAssetKind:(int)arg1;
- (void)setDestinationAlbum:(struct NSObject { Class x1; }*)arg1;
- (void)setUrls:(id)arg1;
- (BOOL)isCameraKit;
- (struct NSObject { Class x1; }*)destinationAlbum;
- (id)urls;
- (id)initWithURLs:(id)arg1 creationDate:(id)arg2 destinationAlbum:(struct NSObject { Class x1; }*)arg3 assetKind:(int)arg4;
- (void)setDateCreated:(id)arg1;
- (id)dateCreated;
- (int)compare:(id)arg1;
- (id)description;
- (void)dealloc;

@end
