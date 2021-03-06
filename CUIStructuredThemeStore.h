/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@class CUICommonAssetStorage, NSString, NSLock, NSCache, NSMutableDictionary;

@interface CUIStructuredThemeStore : NSObject <CUIStructuredThemeStorage, CUIStructuredThemeStorage2> {
    NSMutableDictionary *_cache;
    CUICommonAssetStorage *_store;
    NSLock *_cacheLock;
    NSLock *_storeLock;
    unsigned int _themeIndex;
    NSString *_bundleID;
    NSCache *_assetExistanceCache;
    NSCache *_assetFPOStatus;
}


- (void)setThemeIndex:(unsigned int)arg1;
- (id)prefilteredAssetDataForKey:(struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (id)convertRenditionKeyToKeyData:(struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (id)themeStore;
- (id)keySignatureForKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (id)baseGradationKeySignatureForKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (unsigned int)authoredWithSchemaVersion;
- (unsigned int)distilledInCoreUIVersion;
- (unsigned int)documentFormatVersion;
- (BOOL)hasPhysicalColorWithName:(id)arg1;
- (BOOL)getPhysicalColor:(struct _colordef { unsigned int x1; unsigned int x2; struct _rgbquad { unsigned int x_3_1_1 : 8; unsigned int x_3_1_2 : 8; unsigned int x_3_1_3 : 8; unsigned int x_3_1_4 : 8; } x3; }*)arg1 withName:(id)arg2;
- (BOOL)_canGetRenditionWithKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1 isFPO:(BOOL*)arg2 lookForSubstitutions:(BOOL)arg3;
- (void)_getKeyForAssetInOtherLookGroupClosestToKey:(struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1 foundAsset:(BOOL*)arg2;
- (id)lookupAssetForKey:(struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (const struct _renditionkeyfmt { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4[0]; }*)renditionKeyFormat;
- (void)_getKeyForAssetClosestToKey:(struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1 foundAsset:(BOOL*)arg2;
- (void)_updateKeyWithCompatibilityMapping:(struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (id)_newRenditionKeyDataFromKey:(struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (id)displayNameForPartID:(int)arg1;
- (id)constantNameForPartID:(int)arg1;
- (id)displayNameForElementID:(int)arg1;
- (id)constantNameForElementID:(int)arg1;
- (float)fontSizeForFontSizeType:(id)arg1;
- (BOOL)getFontName:(id*)arg1 baselineOffset:(float*)arg2 forFontType:(id)arg3;
- (BOOL)assetExistsForKey:(struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (id)debugDescriptionForKeyList:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (id)zeroCodeGlyphList;
- (BOOL)canGetRenditionWithKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1 isFPO:(BOOL*)arg2;
- (const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)renditionKeyForName:(id)arg1 cursorHotSpot:(struct CGPoint { float x1; float x2; }*)arg2;
- (id)allImageNames;
- (BOOL)usesCUISystemThemeRenditionKey;
- (int)maximumRenditionKeyTokenCount;
- (void)clearRenditionCache;
- (id)copyKeySignatureForKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1 withBytesNoCopy:(char *)arg2 length:(unsigned int)arg3;
- (BOOL)canGetRenditionWithKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (const struct _renditionkeyfmt { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4[0]; }*)keyFormat;
- (const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)renditionKeyForName:(id)arg1;
- (id)renditionWithKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (unsigned int)colorSpaceID;
- (id)bundleID;
- (id)imagesWithName:(id)arg1;
- (id)initWithPath:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)debugDescription;
- (void)dealloc;

@end
