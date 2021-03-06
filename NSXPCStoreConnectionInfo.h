/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSPersistentStoreCoordinator, NSDictionary;

@interface NSXPCStoreConnectionInfo : NSObject  {
    NSDictionary *_entitlements;
    NSPersistentStoreCoordinator *_coordinator;
    struct { 
        unsigned int val[8]; 
    } _token;
    id _userInfo;
    int _lock;
}


- (id)persistentStoreCoordinator;
- (id)entitlements;
- (struct { unsigned int x1[8]; })auditToken;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initForToken:(struct { unsigned int x1[8]; })arg1 entitlementNames:(id)arg2 coordinator:(id)arg3;

@end
