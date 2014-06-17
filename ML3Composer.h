/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3Composer : ML3Collection  {
}

+ (id)protocolItemWithProperties:(id)arg1 inLibrary:(id)arg2;
+ (id)artworkCacheIDProperty;
+ (id)propertiesForGroupingKey;
+ (id)foreignPropertyForProperty:(id)arg1 entityClass:(Class)arg2;
+ (id)defaultOrderingTerms;
+ (id)predisambiguatedProperties;
+ (id)countingQueryForBaseQuery:(id)arg1 countProperty:(id)arg2 forIdentifier:(long long)arg3;
+ (BOOL)propertyIsCountProperty:(id)arg1;
+ (id)allProperties;
+ (int)revisionTrackingCode;
+ (id)trackForeignPersistentID;
+ (id)databaseTable;
+ (void)initialize;
+ (id)propertyForMPMediaEntityProperty:(id)arg1;

- (id)protocolItem;
- (id)multiverseIdentifier;
- (void)updateRepresentativeItem:(id)arg1 inLibrary:(id)arg2 withArtworkToken:(id)arg3;
- (void)updateTrackValues:(id)arg1;

@end