/* Generated by RuntimeBrowser.
   Image: /usr/lib/libmecabra.dylib
 */

@class NSArray, NSMutableDictionary, MecabraDatabaseCacheIdentifierController;

@interface MecabraDatabaseCache : NSObject  {
    NSMutableDictionary *_entryToIdentifierMapping;
    MecabraDatabaseCacheIdentifierController *_identifierController;
    NSMutableDictionary *_identifierToEntryMapping;
    NSArray *_uniqueKeys;
    unsigned int _currentSeed;
}

@property(readonly) NSArray * allIdentifiers;
@property(retain) NSArray * uniqueKeys;
@property(retain) NSMutableDictionary * entryToIdentifierMapping;
@property(retain) MecabraDatabaseCacheIdentifierController * identifierController;
@property(retain) NSMutableDictionary * identifierToEntryMapping;
@property unsigned int currentSeed;


- (void)setUniqueKeys:(id)arg1;
- (void)updateSeedNumber:(unsigned int)arg1;
- (unsigned int)nextSeed;
- (id)entryForIdentifier:(unsigned int)arg1;
- (unsigned int)identifierForEntry:(id)arg1;
- (id)allIdentifiers;
- (void)setCurrentSeed:(unsigned int)arg1;
- (unsigned int)currentSeed;
- (id)identifierController;
- (id)entryToIdentifierMapping;
- (id)partialEntryForEntry:(id)arg1;
- (id)uniqueKeys;
- (id)identifierToEntryMapping;
- (void)setIdentifierToEntryMapping:(id)arg1;
- (void)setIdentifierController:(id)arg1;
- (void)setEntryToIdentifierMapping:(id)arg1;
- (void)deleteEntry:(id)arg1;
- (void)updateEntry:(id)arg1;
- (void)reset;
- (void)dealloc;
- (id)init;

@end