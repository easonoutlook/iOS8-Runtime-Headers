/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNPreviewExporter : KNSlideExporter <TSKImageExporter> {
}

@property unsigned int width;
@property unsigned int height;
@property BOOL scaleToFit;


- (void)setup;
- (void)setHeight:(unsigned int)arg1;
- (void)setWidth:(unsigned int)arg1;
- (unsigned int)height;
- (unsigned int)width;
- (void)setScaleToFit:(BOOL)arg1;
- (BOOL)scaleToFit;
- (id)p_renderingExporterDelegate;

@end
