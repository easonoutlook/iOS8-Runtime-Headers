/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FamilyNotification.framework/FamilyNotification
 */

@class NSString, NSData, NSDictionary, NSNumber, NSURL;

@interface FAFamilyNotification : NSObject <NSSecureCoding> {
    BOOL _shouldPersistWhenActivated;
    BOOL _shouldPersistWhenDismissed;
    BOOL _hasActionButton;
    NSString *_identifier;
    NSString *_title;
    NSString *_informativeText;
    NSNumber *_familyMemberDSID;
    unsigned int _displayStyle;
    NSString *_actionButtonLabel;
    NSString *_otherButtonLabel;
    NSString *_unlockActionLabel;
    NSURL *_activateActionURL;
    NSURL *_dismissActionlURL;
    NSURL *_clearActionURL;
    NSURL *_launchActionURL;
    NSData *_launchActionArguments;
    NSDictionary *_userInfo;
    NSString *_uuid;
    NSString *_clientIdentifier;
    NSString *_delegateMachServiceName;
}

@property(copy) NSString * identifier;
@property(copy) NSString * title;
@property(copy) NSString * informativeText;
@property(copy) NSNumber * familyMemberDSID;
@property unsigned int displayStyle;
@property BOOL shouldPersistWhenActivated;
@property BOOL shouldPersistWhenDismissed;
@property(copy) NSString * actionButtonLabel;
@property(copy) NSString * otherButtonLabel;
@property BOOL hasActionButton;
@property(copy) NSString * unlockActionLabel;
@property(copy) NSURL * activateActionURL;
@property(copy) NSURL * dismissActionlURL;
@property(copy) NSURL * clearActionURL;
@property(copy) NSURL * launchActionURL;
@property(copy) NSData * launchActionArguments;
@property(copy) NSDictionary * userInfo;
@property(copy) NSString * uuid;
@property(copy) NSString * clientIdentifier;
@property(copy) NSString * delegateMachServiceName;

+ (BOOL)supportsSecureCoding;

- (unsigned int)displayStyle;
- (id)clientIdentifier;
- (void)setDisplayStyle:(unsigned int)arg1;
- (void)setUuid:(id)arg1;
- (id)delegateMachServiceName;
- (void)setLaunchActionArguments:(id)arg1;
- (id)launchActionArguments;
- (void)setLaunchActionURL:(id)arg1;
- (id)launchActionURL;
- (void)setClearActionURL:(id)arg1;
- (id)clearActionURL;
- (void)setDismissActionlURL:(id)arg1;
- (id)dismissActionlURL;
- (void)setActivateActionURL:(id)arg1;
- (id)activateActionURL;
- (void)setHasActionButton:(BOOL)arg1;
- (BOOL)hasActionButton;
- (void)setOtherButtonLabel:(id)arg1;
- (id)otherButtonLabel;
- (void)setActionButtonLabel:(id)arg1;
- (id)actionButtonLabel;
- (void)setShouldPersistWhenDismissed:(BOOL)arg1;
- (BOOL)shouldPersistWhenDismissed;
- (void)setShouldPersistWhenActivated:(BOOL)arg1;
- (BOOL)shouldPersistWhenActivated;
- (void)setInformativeText:(id)arg1;
- (id)initWithCacheDictionaryRepresentation:(id)arg1;
- (id)cacheDictionaryRepresentation;
- (id)informativeText;
- (void)setDelegateMachServiceName:(id)arg1;
- (id)unlockActionLabel;
- (void)setUnlockActionLabel:(id)arg1;
- (id)familyMemberDSID;
- (void)setFamilyMemberDSID:(id)arg1;
- (id)uuid;
- (void).cxx_destruct;
- (void)setClientIdentifier:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (id)title;
- (id)identifier;
- (void)setTitle:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)init;

@end