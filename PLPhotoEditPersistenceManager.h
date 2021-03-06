/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSString;

@interface PLPhotoEditPersistenceManager : NSObject  {
}

@property(readonly) NSString * latestFormatIdentifier;
@property(readonly) NSString * latestFormatVersion;


- (id)_allImporterClasses;
- (Class)_latestExporterClass;
- (id)_allConverterClasses;
- (id)debugDescriptionForPhotoEditData:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3;
- (BOOL)loadPhotoEditData:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3 intoModel:(id)arg4 baseOrientation:(int)arg5;
- (BOOL)canInterpretDataWithFormatIdentifier:(id)arg1 formatVersion:(id)arg2;
- (id)dataFromPhotoEditModel:(id)arg1 imageWidth:(unsigned int)arg2 imageHeight:(unsigned int)arg3 exifOrientation:(int)arg4;
- (id)latestFormatVersion;
- (id)latestFormatIdentifier;

@end
