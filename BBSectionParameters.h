/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@class NSString, BBSectionSubtypeParameters, NSLock, BBSectionIcon, NSMutableDictionary;

@interface BBSectionParameters : NSObject <BBUniquableObject, NSSecureCoding> {
    NSLock *_lock;
    NSString *_uniqueIdentifier;
    BOOL _showsSubtitle;
    BOOL _usesVariableLayout;
    BOOL _orderSectionUsingRecencyDate;
    BOOL _showsDateInFloatingLockScreenAlert;
    BOOL _displaysCriticalBulletins;
    unsigned int _messageNumberOfLines;
    BBSectionSubtypeParameters *_defaultSubtypeParameters;
    NSMutableDictionary *_allSubtypeParameters;
    NSString *_displayName;
    BBSectionIcon *_icon;
}

@property BOOL showsSubtitle;
@property BOOL usesVariableLayout;
@property unsigned int messageNumberOfLines;
@property BOOL orderSectionUsingRecencyDate;
@property BOOL showsDateInFloatingLockScreenAlert;
@property(copy) NSString * displayName;
@property(retain) BBSectionIcon * icon;
@property BOOL displaysCriticalBulletins;
@property(retain) BBSectionSubtypeParameters * defaultSubtypeParameters;
@property(retain) NSMutableDictionary * allSubtypeParameters;

+ (id)copyCachedSectionParametersWithIdentifier:(id)arg1;
+ (void)removeSectionParametersFromCache:(id)arg1;
+ (id)addSectionParametersToCache:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (id)parametersForSubtype:(int)arg1;
- (BOOL)showsDateInFloatingLockScreenAlert;
- (BOOL)orderSectionUsingRecencyDate;
- (BOOL)usesVariableLayout;
- (unsigned int)messageNumberOfLines;
- (BOOL)showsSubtitle;
- (id)allSubtypeParameters;
- (id)defaultSubtypeParameters;
- (void)setShowsDateInFloatingLockScreenAlert:(BOOL)arg1;
- (void)setOrderSectionUsingRecencyDate:(BOOL)arg1;
- (void)setUsesVariableLayout:(BOOL)arg1;
- (void)setShowsSubtitle:(BOOL)arg1;
- (void)setAllSubtypeParameters:(id)arg1;
- (void)setDefaultSubtypeParameters:(id)arg1;
- (void)setMessageNumberOfLines:(unsigned int)arg1;
- (void)setDisplaysCriticalBulletins:(BOOL)arg1;
- (BOOL)displaysCriticalBulletins;
- (id)displayName;
- (void)setIcon:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)uniqueIdentifier;
- (void)dealloc;
- (id)init;
- (void)setDisplayName:(id)arg1;
- (id)icon;

@end
