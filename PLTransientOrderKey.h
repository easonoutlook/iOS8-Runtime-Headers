/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSManagedObjectID, NSManagedObjectContext;

@interface PLTransientOrderKey : NSObject <PLOrderKeyObject> {
    NSManagedObjectID *_objectID;
    NSManagedObjectContext *_moc;
    long long _orderValue;
}

@property long long orderValue;
@property(retain) NSManagedObjectID * objectID;
@property(retain) NSManagedObjectContext * moc;


- (void)setMoc:(id)arg1;
- (id)moc;
- (id)childManagedObject;
- (id)secondaryOrderSortKey;
- (BOOL)isSpecial;
- (long long)orderValue;
- (void)setObjectID:(id)arg1;
- (void)setOrderValue:(long long)arg1;
- (void)setIsSpecial:(BOOL)arg1;
- (id)objectID;
- (id)description;
- (void)dealloc;

@end