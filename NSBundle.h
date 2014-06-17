/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSArray, NSString, NSDictionary, NSURL;

@interface NSBundle : NSObject  {
    unsigned int _flags;
    id _cfBundle;
    unsigned int _reserved2;
    Class _principalClass;
    id _initialPath;
    id _resolvedPath;
    id _reserved3;
    id _lock;
}

@property(getter=isLoaded,readonly) BOOL loaded;
@property(copy,readonly) NSURL * bundleURL;
@property(copy,readonly) NSURL * resourceURL;
@property(copy,readonly) NSURL * executableURL;
@property(copy,readonly) NSURL * privateFrameworksURL;
@property(copy,readonly) NSURL * sharedFrameworksURL;
@property(copy,readonly) NSURL * sharedSupportURL;
@property(copy,readonly) NSURL * builtInPlugInsURL;
@property(copy,readonly) NSURL * appStoreReceiptURL;
@property(copy,readonly) NSString * bundlePath;
@property(copy,readonly) NSString * resourcePath;
@property(copy,readonly) NSString * executablePath;
@property(copy,readonly) NSString * privateFrameworksPath;
@property(copy,readonly) NSString * sharedFrameworksPath;
@property(copy,readonly) NSString * sharedSupportPath;
@property(copy,readonly) NSString * builtInPlugInsPath;
@property(copy,readonly) NSString * bundleIdentifier;
@property(copy,readonly) NSDictionary * infoDictionary;
@property(copy,readonly) NSDictionary * localizedInfoDictionary;
@property(readonly) Class principalClass;
@property(copy,readonly) NSArray * preferredLocalizations;
@property(copy,readonly) NSArray * localizations;
@property(copy,readonly) NSString * developmentLocalization;
@property(copy,readonly) NSArray * executableArchitectures;

+ (id)pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2;
+ (id)preferredLocalizationsFromArray:(id)arg1 forPreferences:(id)arg2;
+ (id)bundleWithURL:(id)arg1;
+ (id)bundleWithPath:(id)arg1;
+ (id)pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3;
+ (id)bundleWithIdentifier:(id)arg1;
+ (id)bundleForClass:(Class)arg1;
+ (id)mainBundle;
+ (id)debugDescription;
+ (void)setSystemLanguages:(id)arg1;
+ (id)URLsForResourcesWithExtension:(id)arg1 subdirectory:(id)arg2 inBundleWithURL:(id)arg3;
+ (id)URLForResource:(id)arg1 withExtension:(id)arg2 subdirectory:(id)arg3 inBundleWithURL:(id)arg4;
+ (id)findBundleResourceURLsCallingMethod:(SEL)arg1 baseURL:(id)arg2 passingTest:(id)arg3;
+ (id)findBundleResources:(id)arg1 callingMethod:(SEL)arg2 directory:(id)arg3 languages:(id)arg4 name:(id)arg5 types:(id)arg6 limit:(unsigned int)arg7;
+ (id)preferredLocalizationsFromArray:(id)arg1;
+ (id)loadedBundles;
+ (id)allFrameworks;
+ (id)allBundles;
+ (id)__geoBundle;
+ (id)currentNibLoadingBundle;
+ (id)currentNibPath;
+ (void)popNibLoadingBundle;
+ (void)popNibPath;
+ (void)pushNibPath:(id)arg1;
+ (void)pushNibLoadingBundle:(id)arg1;
+ (id)_typologyBundle;
+ (id)pathForITunesStoreResource:(id)arg1 ofType:(id)arg2;
+ (id)mediaPlayerBundle;
+ (BOOL)mainBundleIsXcode;
+ (id)_gkLocalizedMessageFromDictionary:(id)arg1;
+ (id)_gkBundleWithIdentifier:(id)arg1;
+ (id)_gkLocalizedMessageFromDictionary:(id)arg1 forBundleID:(id)arg2;
+ (id)__vkBundle;
+ (id)_mapkitBundle;
+ (id)pathForITunesResource:(id)arg1 ofType:(id)arg2;
+ (id)blj_localizedString:(id)arg1;
+ (id)pu_PhotosUIFrameworkBundle;
+ (id)afui_assistantUIFrameworkBundle;
+ (id)_coreroutineBundle;
+ (id)_coreroutine_LocalizedStringForKey:(id)arg1;
+ (id)mediaPlayerUIBundle;
+ (id)radioUIBundle;
+ (id)musicUIBundle;
+ (BOOL)doesBrailleTableSupportEightDot:(id)arg1;
+ (BOOL)doesBrailleTableSupportContractions:(id)arg1;
+ (id)nameForBrailleTableIdentifier:(id)arg1;
+ (long)bundleIndexForBrailleDriverIdentifier:(id)arg1;
+ (id)brailleTableIdentifiers;
+ (id)_brailleTableDictionaryForBrailleTableIdentifier:(id)arg1;
+ (id)languageIdentifiersForBrailleTableIdentifier:(id)arg1;
+ (id)brailleTableBundleWithTableIdentifier:(id)arg1;
+ (id)_brailleTableBundles;
+ (id)brailleDriverBundles;
+ (id)brailleDriverDeviceDetectionInfo;
+ (id)brailleDriverBundleWithIdentifier:(id)arg1;
+ (id)tableIdentifiersForLanguageIdentifier:(id)arg1;
+ (BOOL)doesBrailleTableSupportEightDot:(id)arg1;
+ (BOOL)doesBrailleTableSupportContractions:(id)arg1;
+ (id)nameForBrailleTableIdentifier:(id)arg1;
+ (long)bundleIndexForBrailleDriverIdentifier:(id)arg1;
+ (id)brailleTableIdentifiers;
+ (id)_brailleTableDictionaryForBrailleTableIdentifier:(id)arg1;
+ (id)languageIdentifiersForBrailleTableIdentifier:(id)arg1;
+ (id)brailleTableBundleWithTableIdentifier:(id)arg1;
+ (id)_brailleTableBundles;
+ (id)brailleDriverBundles;
+ (id)brailleDriverDeviceDetectionInfo;
+ (id)brailleDriverBundleWithIdentifier:(id)arg1;
+ (id)tableIdentifiersForLanguageIdentifier:(id)arg1;
+ (id)accessibilityLocalBundleWithLastPathComponent:(id)arg1;
+ (id)accessibilityBundleWithLastPathComponent:(id)arg1;
+ (id)safari_safariSharedBundle;
+ (id)bundleForBinaryImagePath:(id)arg1;
+ (id)frameworkBundleForBinaryImagePath:(id)arg1;

- (id)URLForResource:(id)arg1 withExtension:(id)arg2;
- (id)URLForResource:(id)arg1 withExtension:(id)arg2 subdirectory:(id)arg3;
- (id)pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2;
- (BOOL)unload;
- (id)URLsForResourcesWithExtension:(id)arg1 subdirectory:(id)arg2;
- (id)resourcePath;
- (id)pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 forLocalization:(id)arg4;
- (id)localizedInfoDictionary;
- (id)initWithPath:(id)arg1;
- (BOOL)load;
- (BOOL)isLoaded;
- (id)objectForInfoDictionaryKey:(id)arg1;
- (id)localizations;
- (Class)principalClass;
- (Class)classNamed:(id)arg1;
- (BOOL)loadAndReturnError:(id*)arg1;
- (id)pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3;
- (id)initWithURL:(id)arg1;
- (id)pathForResource:(id)arg1 ofType:(id)arg2;
- (id)bundlePath;
- (id)executablePath;
- (id)bundleURL;
- (id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;
- (id)bundleIdentifier;
- (id)infoDictionary;
- (id)description;
- (void)dealloc;
- (void)finalize;
- (id)executableArchitectures;
- (BOOL)preflightAndReturnError:(id*)arg1;
- (id)developmentLocalization;
- (id)preferredLocalizations;
- (id)pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2 forLanguage:(id)arg3;
- (id)pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 forLanguage:(id)arg4;
- (id)_pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2 forRegion:(id)arg3;
- (id)_pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 forRegion:(id)arg4;
- (id)_regionsArray;
- (void)__static;
- (void)invalidateResourceCache;
- (id)bundleLanguages;
- (unsigned int)versionNumber;
- (id)builtInPlugInsURL;
- (id)builtInPlugInsPath;
- (id)sharedSupportURL;
- (id)sharedSupportPath;
- (id)sharedFrameworksURL;
- (id)sharedFrameworksPath;
- (id)privateFrameworksURL;
- (id)privateFrameworksPath;
- (id)URLForAuxiliaryExecutable:(id)arg1;
- (id)pathForAuxiliaryExecutable:(id)arg1;
- (id)appStoreReceiptURL;
- (id)executableURL;
- (id)resourceURL;
- (id)URLsForResourcesWithExtension:(id)arg1 subdirectory:(id)arg2 localization:(id)arg3;
- (id)findBundleResourceURLsCallingMethod:(SEL)arg1 passingTest:(id)arg2;
- (id)pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2 forLocalization:(id)arg3;
- (id)URLForResource:(id)arg1 withExtension:(id)arg2 subdirectory:(id)arg3 localization:(id)arg4;
- (struct __CFBundle { }*)_cfBundle;
- (id)_cachedMainBundleResourcePath;
- (id)dataForResourceName:(id)arg1;
- (id)loadNibNamed:(id)arg1 owner:(id)arg2 options:(id)arg3;
- (id)imageForResource:(id)arg1 size:(struct CGSize { float x1; float x2; })arg2;
- (id)_gkFrameworkVersionDescription;
- (id)_gkPreferredLanguage;
- (id)_gkPathForChallengeSound;
- (id)_gkPathForInviteSound;
- (BOOL)_gkIsBadgingEnabled;
- (id)_gkPathForSoundWithName:(id)arg1;
- (BOOL)_gkIsGameCenterUIService;
- (BOOL)_gkIsGameCenter;
- (id)_gkLocalizedStringForKey:(id)arg1 defaultValue:(id)arg2 arguments:(id)arg3;
- (id)_gkLocalizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 language:(id)arg4;
- (id)_gkLocalizedName;
- (id)_gkBundleVersion;
- (id)PKSanitizedBundleIdentifier;
- (id)newDataURLForResource:(id)arg1 ofType:(id)arg2 withMIMEType:(id)arg3;
- (id)siriUILocalizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;
- (id)siriUILocalizedStringForKey:(id)arg1;
- (id)siriUILocalizedStringForKey:(id)arg1 table:(id)arg2;
- (id)assistantUILocalizedStringForKey:(id)arg1 table:(id)arg2;
- (id)assistantUILocalizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;
- (id)tableIdentifierForBundleSpecificTableIdentifier:(id)arg1;
- (id)bundleSpecificTableIdentifierForTableIdentifier:(id)arg1;
- (id)tableIdentifierForBundleSpecificTableIdentifier:(id)arg1;
- (id)bundleSpecificTableIdentifierForTableIdentifier:(id)arg1;
- (void)_accessibilityInitializeContainerLogic;
- (id)accessibilityBundlePath;
- (id)webui_localizedDisplayName;
- (BOOL)safari_primaryLocalizationIsEnglish;
- (id)XPCServiceBundles;

@end
