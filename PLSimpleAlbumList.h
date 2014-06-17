/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSOrderedSet;

@interface PLSimpleAlbumList : NSObject <PLAssetContainerList> {
    NSOrderedSet *_containers;
}

@property(retain) NSOrderedSet * containers;
@property(readonly) unsigned int containersCount;


- (void)setContainers:(id)arg1;
- (id)initWithAssetContainer:(id)arg1;
- (unsigned int)containersCount;
- (id)containersRelationshipName;
- (BOOL)canEditContainers;
- (id)containers;
- (id)initWithAssetContainers:(id)arg1;
- (id)photoLibrary;
- (id)managedObjectContext;
- (BOOL)isEmpty;
- (void)dealloc;

@end
