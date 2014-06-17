/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSArray;

@interface TPAppDelegate : TSABaseApplicationDelegate  {
    BOOL _newDocumentOnLaunch;
    BOOL _appDoneLaunching;
    BOOL _cachedBidiIsSupported;
}

@property(readonly) NSArray * wordDocumentTypes;

+ (id)sharedDelegate;

- (id)applicationName;
- (void)dealloc;
- (id)init;
- (id)wordDocumentTypes;
- (void)p_localeChanged:(id)arg1;
- (id)previewImageNameForEncryptedNativeDocument;
- (id)previewImageNameForNativeDocument;
- (id)previewImageNameForDocumentType:(id)arg1;
- (void)p_inputMethodsChanged:(id)arg1;
- (BOOL)textInspectorShowsMoreSubpane;
- (BOOL)tableHeaderInspectorShowsRepeatHeaderRowsSwitch;
- (BOOL)supportsScrollingInPhoneCommentUI;
- (BOOL)supportsRTL;
- (id)templateTypeDisplayName;
- (id)documentTypeDisplayName;
- (id)createCompatibilityDelegate;
- (id)appChartPropertyOverrides;
- (Class)documentRootClass;
- (id)applicationTemplateVariantsForLocale:(struct __CFLocale { }*)arg1;
- (id)importableDocumentTypes;
- (id)nativeSFFDocumentType;
- (id)tangierEditingFormatDocumentType;
- (id)templateSFFDocumentType;
- (id)templateDocumentType;
- (id)nativeDocumentType;

@end
