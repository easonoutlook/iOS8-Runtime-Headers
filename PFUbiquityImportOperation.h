/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSObject, NSString, NSLock, PFUbiquityLocation, NSPersistentStore;

@interface PFUbiquityImportOperation : NSOperation  {
    NSString *_localPeerID;
    NSString *_storeName;
    NSPersistentStore *_store;
    PFUbiquityLocation *_ubiquityRootLocation;
    NSLock *_delegateLock;
    BOOL _lockedDelegateLock;
    NSObject *_delegate;
}

@property(readonly) NSString * localPeerID;
@property(readonly) NSString * storeName;
@property(readonly) PFUbiquityLocation * ubiquityRootLocation;
@property(readonly) NSPersistentStore * store;
@property NSObject * delegate;


- (id)delegate;
- (void)cancel;
- (id)description;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)init;
- (id)initWithStoreName:(id)arg1 localPeerID:(id)arg2 andUbiquityRootLocation:(id)arg3;
- (void)unlockDelegateLock;
- (void)lockDelegateLock;
- (void)storeWillBeRemoved:(id)arg1;
- (id)retainedDelegate;
- (id)initWithPersistentStore:(id)arg1 localPeerID:(id)arg2 andUbiquityRootLocation:(id)arg3;
- (id)ubiquityRootLocation;
- (id)storeName;
- (id)localPeerID;
- (id)store;

@end