/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSPurchasableAppItem : SSPurchasableItem  {
}

+ (id)sortByNameKey;
+ (id)allItemsFromDatabase:(id)arg1 forAccount:(long long)arg2 sortedBy:(id)arg3 sortAscending:(BOOL)arg4;
+ (id)itemsFromDatabase:(id)arg1 forAccount:(long long)arg2 matching:(id)arg3 sortedBy:(id)arg4 sortAscending:(BOOL)arg5;
+ (id)allPropertyKeys;
+ (id)databaseTable;

- (long long)iTunesVersion;
- (id)humanReadableVersion;
- (id)redownloadParams;
- (BOOL)supportsIPhone;
- (BOOL)supportsIPad;
- (unsigned int)minimumOS;
- (id)longTitle;
- (BOOL)isFamilyShareable;
- (id)iconTitle;
- (int)contentRatingFlags;
- (id)iconURL;
- (BOOL)isNewsstand;
- (id)companyName;
- (id)accountIdentifier;
- (id)bundleID;
- (id)category;
- (id)description;

@end
