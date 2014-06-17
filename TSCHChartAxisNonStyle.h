/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSSPropertyMap;

@interface TSCHChartAxisNonStyle : TSCHBaseStyle  {
}

@property(copy) TSSPropertyMap * overrideMapForSameAsSource;

+ (id)properties;
+ (int)muxDefaultPropertyForSpecificProperty:(int)arg1;
+ (id)imageFillProperties;
+ (float)defaultFloatValueForProperty:(int)arg1;
+ (int)defaultIntValueForProperty:(int)arg1;
+ (id)defaultValueForProperty:(int)arg1;
+ (id)defaultStyleWithContext:(id)arg1;

- (void)setOverrideMapForSameAsSource:(id)arg1;
- (void)updateAfterPasteForDocumentRoot:(id)arg1 pasteboardCustomFormatList:(id)arg2;
- (id)overrideMapForSameAsSource;
- (id)initFromPreUFFArchiveWithUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1 name:(id)arg2 overridePropertyMap:(id)arg3 isVariation:(BOOL)arg4;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;

@end
