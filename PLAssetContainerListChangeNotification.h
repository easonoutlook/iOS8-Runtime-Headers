/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class <PLAssetContainerList>, NSObject<PLAlbumContainer>, NSDictionary;

@interface PLAssetContainerListChangeNotification : PLContainerChangeNotification  {
    NSDictionary *_userInfo;
}

@property(retain,readonly) <PLAssetContainerList> * assetContainerList;
@property(retain,readonly) NSObject<PLAlbumContainer> * albumList;

+ (id)notificationWithSimulatedReloadRequestForContainerList:(id)arg1;
+ (id)notificationWithContainerList:(id)arg1 snapshot:(id)arg2 changedContainers:(id)arg3;

- (id)assetContainerList;
- (id)_contentRelationshipName;
- (struct NSObject { Class x1; }*)albumList;
- (id)userInfo;
- (id)name;
- (id)description;
- (void)dealloc;

@end