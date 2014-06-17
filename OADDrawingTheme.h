/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADDefaultProperties, OADColorMap, OADFontScheme, OADColorScheme, <OADColorPalette>, OADStyleMatrix;

@interface OADDrawingTheme : NSObject  {
    OADDefaultProperties *mShapeDefaults;
    OADDefaultProperties *mLineDefaults;
    OADDefaultProperties *mTextDefaults;
    OADStyleMatrix *mStyleMatrix;
    OADFontScheme *mFontScheme;
    OADColorScheme *mColorScheme;
    OADColorMap *mColorMap;
    <OADColorPalette> *mColorPalette;
}

@property(readonly) OADDefaultProperties * shapeDefaults;
@property(readonly) OADDefaultProperties * lineDefaults;
@property(readonly) OADDefaultProperties * textDefaults;
@property(readonly) OADStyleMatrix * styleMatrix;
@property(readonly) OADFontScheme * fontScheme;
@property(retain) OADColorScheme * colorScheme;
@property(readonly) OADColorMap * colorMap;
@property(retain) <OADColorPalette> * colorPalette;


- (void)applyThemeOverrides:(id)arg1 colorMapOverride:(id)arg2;
- (id)initWithTheme:(id)arg1 colorMap:(id)arg2 colorPalette:(id)arg3;
- (id)initWithStyleMatrix:(id)arg1 fontScheme:(id)arg2 colorScheme:(id)arg3 colorMap:(id)arg4 colorPalette:(id)arg5;
- (id)textDefaults;
- (id)lineDefaults;
- (id)shapeDefaults;
- (void)setColorPalette:(id)arg1;
- (id)colorPalette;
- (id)fontScheme;
- (id)colorMap;
- (id)styleMatrix;
- (void)setColorScheme:(id)arg1;
- (id)colorScheme;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end