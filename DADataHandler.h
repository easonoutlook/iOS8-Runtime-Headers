/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSString;

@interface DADataHandler : NSObject  {
    void *_container;
    NSString *_changeTrackingID;
}

@property void* container;
@property(copy) NSString * changeTrackingID;

+ (id)newDataHandlerForDataclass:(int)arg1 container:(void*)arg2 changeTrackingID:(id)arg3;

- (id)changeTrackingID;
- (int)dataclass;
- (id)getDAObjectWithLocalItem:(void*)arg1 serverId:(id)arg2 account:(id)arg3;
- (BOOL)closeDBAndSave:(BOOL)arg1;
- (void)openDB;
- (BOOL)wipeServerIds;
- (void)drainContainer;
- (id)copyOfAllLocalObjectsInContainer;
- (BOOL)saveContainer;
- (void*)copyLocalObjectFromId:(int)arg1;
- (int)getIdFromLocalObject:(void*)arg1;
- (id)initWithContainer:(void*)arg1 changeTrackingID:(id)arg2;
- (void)setChangeTrackingID:(id)arg1;
- (void).cxx_destruct;
- (void*)container;
- (void)setContainer:(void*)arg1;
- (void)dealloc;

@end
