/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@class NSString, AXDialectMap, NSArray;

@interface AXLangMap : NSObject  {
    BOOL _western;
    BOOL _ambiguous;
    AXDialectMap *userLocaleDialect;
    NSArray *_dialects;
    NSString *_generalLanguageID;
    AXDialectMap *_userPreferredDialect;
    NSArray *_alternateLanguageIDs;
    NSArray *_associatedAmbiguousLanguages;
}

@property(getter=isWestern) BOOL western;
@property(getter=isAmbiguous) BOOL ambiguous;
@property(copy) NSString * generalLanguageID;
@property(retain) NSArray * alternateLanguageIDs;
@property(retain) NSArray * dialects;
@property(retain) NSArray * associatedAmbiguousLanguages;
@property(readonly) AXDialectMap * defaultDialect;
@property(readonly) AXDialectMap * userLocaleDialect;
@property(readonly) NSArray * alternativeVoiceIdentifiers;
@property AXDialectMap * userPreferredDialect;


- (id)associatedAmbiguousLanguages;
- (id)alternativeVoiceIdentifiers;
- (id)dialectWithLocaleIdentifier:(id)arg1;
- (id)defaultDialect;
- (id)initWithLanguageID:(id)arg1 isWestern:(BOOL)arg2 isAmbiguous:(BOOL)arg3 dialects:(id)arg4 alternateLanguageIDs:(id)arg5 associatedAmbiguousLanguages:(id)arg6;
- (id)userLocaleDialect;
- (id)userPreferredDialect;
- (id)alternateLanguageIDs;
- (id)basicDescription;
- (void)setUserPreferredDialect:(id)arg1;
- (id)dialects;
- (id)generalLanguageID;
- (void)setAssociatedAmbiguousLanguages:(id)arg1;
- (void)setDialects:(id)arg1;
- (void)setAlternateLanguageIDs:(id)arg1;
- (void)setGeneralLanguageID:(id)arg1;
- (void)setAmbiguous:(BOOL)arg1;
- (void)setWestern:(BOOL)arg1;
- (BOOL)isWestern;
- (BOOL)isAmbiguous;
- (id)debugDescription;
- (id)description;
- (void)dealloc;

@end
