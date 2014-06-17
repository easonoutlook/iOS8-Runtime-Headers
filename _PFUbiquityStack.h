/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSString, NSManagedObjectContext, PFUbiquityLocation, PFUbiquityMetadataFactoryEntry;

@interface _PFUbiquityStack : NSObject  {
    NSManagedObjectContext *_metadataMOC;
    PFUbiquityMetadataFactoryEntry *_metadataEntry;
    NSString *_localPeerID;
    PFUbiquityLocation *_ubiquityRootURL;
    NSString *_storeName;
    PFUbiquityLocation *_metadataStoreFileLocation;
}

@property(readonly) NSManagedObjectContext * metadataMOC;
@property(readonly) PFUbiquityMetadataFactoryEntry * metadataEntry;
@property(readonly) NSString * localPeerID;
@property(readonly) PFUbiquityLocation * ubiquityRootURL;
@property(readonly) NSString * storeName;
@property(readonly) PFUbiquityLocation * metadataStoreFileLocation;


- (id)description;
- (void)dealloc;
- (id)init;
- (id)metadataEntry;
- (id)peerForPeerID:(id)arg1 createIfMissing:(BOOL)arg2;
- (id)allPeers;
- (BOOL)purgeMetadataForStoreMetadata:(id)arg1 withError:(id*)arg2;
- (BOOL)purgeAndInitializeMetadataStoreFileWithError:(id*)arg1;
- (id)initWithMetadataEntry:(id)arg1;
- (id)metadataStoreFileLocation;
- (id)createMinMetadataStoreKnowledgeVector:(id*)arg1;
- (id)createMetadataStoreKnowledgeVector:(id*)arg1;
- (id)metadataMOC;
- (id)ubiquityRootURL;
- (id)storeName;
- (id)localPeerID;

@end
