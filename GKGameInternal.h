/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class GKStoreItemInternal, NSString, NSDictionary;

@interface GKGameInternal : GKGameDescriptor  {
    NSString *_name;
    NSDictionary *_icons;
    NSString *_defaultLeaderboardIdentifier;
    GKStoreItemInternal *_storeItem;
    union { 
        struct { 
            unsigned int _platform : 8; 
            unsigned int _prerendered : 1; 
            unsigned int _supportsLeaderboards : 1; 
            unsigned int _supportsLeaderboardSets : 1; 
            unsigned int _hasAggregateLeaderboard : 1; 
            unsigned int _supportsAchievements : 1; 
            unsigned int _supportsMultiplayer : 1; 
            unsigned int _valid : 1; 
            unsigned int _unused : 1; 
            unsigned int _supportsTurnBasedMultiplayer : 1; 
            unsigned int _reserved : 13; 
        } ; 
        unsigned int _value; 
    } _flags;
    unsigned short _numberOfLeaderboards;
    unsigned short _numberOfLeaderboardSets;
    unsigned short _numberOfAchievements;
    unsigned short _maxAchievementPoints;
}

@property(retain) NSString * name;
@property(retain) NSDictionary * icons;
@property unsigned char platform;
@property(getter=isPrerendered) BOOL prerendered;
@property BOOL supportsLeaderboards;
@property BOOL hasAggregateLeaderboard;
@property unsigned short numberOfLeaderboards;
@property(retain) NSString * defaultLeaderboardIdentifier;
@property BOOL supportsLeaderboardSets;
@property unsigned short numberOfLeaderboardSets;
@property BOOL supportsAchievements;
@property unsigned short numberOfAchievements;
@property unsigned short maxAchievementPoints;
@property BOOL supportsMultiplayer;
@property BOOL supportsTurnBasedMultiplayer;
@property(getter=isValid) BOOL valid;
@property(retain) GKStoreItemInternal * storeItem;
@property unsigned int flags;

+ (id)secureCodedPropertyKeys;

- (BOOL)isPrerendered;
- (unsigned char)platform;
- (void)setFlags:(unsigned int)arg1;
- (unsigned int)flags;
- (void)setStoreItem:(id)arg1;
- (id)storeItem;
- (BOOL)supportsAchievements;
- (BOOL)supportsLeaderboards;
- (unsigned short)maxAchievementPoints;
- (void)setMaxAchievementPoints:(unsigned short)arg1;
- (void)setNumberOfAchievements:(unsigned short)arg1;
- (void)setNumberOfLeaderboardSets:(unsigned short)arg1;
- (void)setNumberOfLeaderboards:(unsigned short)arg1;
- (unsigned short)numberOfLeaderboards;
- (void)setDefaultLeaderboardIdentifier:(id)arg1;
- (id)defaultLeaderboardIdentifier;
- (void)setSupportsTurnBasedMultiplayer:(BOOL)arg1;
- (void)setSupportsMultiplayer:(BOOL)arg1;
- (void)setSupportsAchievements:(BOOL)arg1;
- (void)setHasAggregateLeaderboard:(BOOL)arg1;
- (void)setSupportsLeaderboardSets:(BOOL)arg1;
- (void)setSupportsLeaderboards:(BOOL)arg1;
- (void)setPrerendered:(BOOL)arg1;
- (id)defaultCategory;
- (BOOL)supportsTurnBasedMultiplayer;
- (unsigned short)numberOfAchievements;
- (unsigned short)numberOfLeaderboardSets;
- (BOOL)hasAggregateLeaderboard;
- (BOOL)supportsMultiplayer;
- (BOOL)supportsLeaderboardSets;
- (id)serverRepresentation;
- (void)setPlatform:(unsigned char)arg1;
- (void)setValid:(BOOL)arg1;
- (unsigned short)numberOfCategories;
- (void)setIcons:(id)arg1;
- (id)icons;
- (BOOL)isValid;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)description;
- (void)dealloc;

@end