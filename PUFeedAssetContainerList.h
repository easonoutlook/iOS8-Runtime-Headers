/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class NSString, NSOrderedSet;

@interface PUFeedAssetContainerList : NSObject <PLAssetContainerList> {
    NSString *_transientIdentifier;
    NSOrderedSet *_sectionInfos;
}

@property(retain) NSOrderedSet * sectionInfos;
@property(readonly) NSString * transientIdentifier;
@property(readonly) unsigned int containersCount;


- (unsigned int)containersCount;
- (id)containersRelationshipName;
- (BOOL)canEditContainers;
- (id)containers;
- (id)photoLibrary;
- (id)managedObjectContext;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (id)transientIdentifier;
- (id)sectionInfos;
- (void)setSectionInfos:(id)arg1;

@end
