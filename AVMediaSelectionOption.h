/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSArray, NSString, AVMediaSelectionOptionInternal, NSLocale, AVAssetTrack;

@interface AVMediaSelectionOption : NSObject <NSCopying> {
    AVMediaSelectionOptionInternal *_mediaSelectionOption;
}

@property(readonly) NSString * localizedDisplayName;
@property(readonly) BOOL mpIsAC3;
@property(readonly) BOOL mpIsSDH;
@property(readonly) NSString * mediaType;
@property(readonly) NSArray * mediaSubTypes;
@property(getter=isPlayable,readonly) BOOL playable;
@property(readonly) NSString * extendedLanguageTag;
@property(readonly) NSLocale * locale;
@property(readonly) NSArray * commonMetadata;
@property(readonly) NSArray * availableMetadataFormats;
@property(readonly) NSString * displayName;
@property(readonly) AVAssetTrack * track;
@property(readonly) int trackID;

+ (id)mediaSelectionOptionForAsset:(id)arg1 group:(id)arg2 dictionary:(id)arg3 hasUnderlyingTrack:(BOOL)arg4;

- (id)outOfBandSource;
- (id)outOfBandIdentifier;
- (id)extendedLanguageTag;
- (id)commonMetadata;
- (int)trackID;
- (BOOL)hasMediaCharacteristic:(id)arg1;
- (id)mediaType;
- (id)group;
- (id)displayName;
- (id)locale;
- (id)_title;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionary;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)displayNameWithLocale:(id)arg1;
- (id)displayNameWithLocale:(id)arg1 fallingBackToMatchingUndeterminedAndMultilingual:(BOOL)arg2;
- (id)_preferredMetadataTitleAccordingToPreferredLanguages:(id)arg1 fallingBackToMatchingEmptyLocale:(BOOL)arg2;
- (id)associatedExtendedLanguageTag;
- (id)associatedPersistentIDs;
- (id)optionID;
- (BOOL)displaysNonForcedSubtitles;
- (id)propertyList;
- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)arg1;
- (BOOL)_isDesignatedDefault;
- (id)mediaSubTypes;
- (id)_ancillaryDescription;
- (id)track;
- (id)_groupID;
- (id)_groupMediaType;
- (BOOL)isPlayable;
- (id)metadataForFormat:(id)arg1;
- (id)availableMetadataFormats;
- (BOOL)mpIsAC3;
- (BOOL)mpIsSDH;
- (id)_extendedLanguageTagOrUndetermined;
- (BOOL)_isAC3;
- (int)_caseInsensitiveCompare:(id)arg1;
- (id)localizedDisplayName;

@end
