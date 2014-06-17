/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPBaseCompatibilityDelegate : NSObject <TSKCompatibilityDelegate> {
}


- (id)epubExportCategories;
- (id)newExportableDocumentTypesForFlag:(unsigned int)arg1;
- (id)unsupportedExportMessageStringForType:(id)arg1;
- (id)backwardsCompatibleTypeForType:(id)arg1;
- (BOOL)isExportSupportedForType:(id)arg1 documentRoot:(id)arg2;
- (id)needNewerVersionIndexXmlContentString;
- (id)indexXmlFilename;
- (BOOL)isTCMessageExceptionErrorDomain:(id)arg1;
- (id)exportableTypes;
- (Class)exportOptionsControllerClass;
- (Class)importerClassForType:(id)arg1;
- (BOOL)isSageDocumentType:(id)arg1;
- (Class)exporterClassForType:(id)arg1 options:(id)arg2;
- (id)nestedDocumentFilename;

@end
