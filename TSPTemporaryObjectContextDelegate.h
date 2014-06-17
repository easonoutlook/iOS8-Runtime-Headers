/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSError, NSMutableSet, <NSFilePresenter>, NSSet, NSUUID, NSURL;

@interface TSPTemporaryObjectContextDelegate : NSObject <TSPFileCoordinatorDelegate, TSPObjectContextDelegate> {
    NSMutableSet *_persistenceWarnings;
    BOOL _ignoreDocumentSupport;
    NSURL *_packageURL;
    NSError *_error;
}

@property(copy) NSURL * packageURL;
@property(readonly) NSError * error;
@property(readonly) NSSet * persistenceWarnings;
@property BOOL ignoreDocumentSupport;
@property(readonly) <NSFilePresenter> * filePresenter;
@property(readonly) BOOL isDocumentSupportTemporary;
@property(readonly) BOOL areNewExternalReferencesToDataAllowed;
@property(readonly) BOOL canUpgradeDocumentSupport;
@property(readonly) NSUUID * baseUUIDForObjectUUID;
@property(readonly) BOOL preserveDocumentRevisionIdentifierForSequenceZero;


- (id)error;
- (void).cxx_destruct;
- (id)init;
- (void)setIgnoreDocumentSupport:(BOOL)arg1;
- (id)persistenceWarnings;
- (void)setPackageURL:(id)arg1;
- (void)presentPersistenceError:(id)arg1;
- (id)packageURL;
- (id)initWithPackageURL:(id)arg1;
- (id)persistenceWarningsForData:(id)arg1 isReadable:(BOOL)arg2 isExternal:(BOOL)arg3;
- (void)performReadUsingAccessor:(id)arg1;
- (void)addPersistenceWarnings:(id)arg1;
- (BOOL)ignoreDocumentSupport;

@end