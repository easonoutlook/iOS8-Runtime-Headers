/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHBaseStyle : TSSStyle <TSCHCustomFormatPasteSupport, TSCHStyleActAlike> {
}


- (id)properties;
- (id)shortDescription;
- (void)g_splitProperty:(int)arg1 outStyleOwner:(id*)arg2 outSpecifier:(id*)arg3 outKeyName:(id*)arg4;
- (id)g_objectTypeForSpecific:(int)arg1;
- (id)g_specificToGenericPropertyMap;
- (void)updateAfterPasteForDocumentRoot:(id)arg1 pasteboardCustomFormatList:(id)arg2;
- (void)updateAfterPasteForProperties:(id)arg1 documentRoot:(id)arg2 pasteboardCustomFormatList:(id)arg3;
- (id)boxedDefaultValueForProperty:(int)arg1;
- (float)defaultFloatValueForProperty:(int)arg1;
- (int)defaultIntValueForProperty:(int)arg1;
- (id)defaultValueForProperty:(int)arg1;
- (id)initFromPreUFFArchiveWithUnarchiver:(id)arg1;

@end