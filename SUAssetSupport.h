/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@interface SUAssetSupport : NSObject  {
}

+ (id)assetDownloadOptionsFromMetadata:(id)arg1 descriptor:(id)arg2 priority:(int)arg3;
+ (id)assetDownloadOptionsForDocumentation;
+ (void)purgeMSUUpdate:(id)arg1;
+ (void)cleanupAllSoftwareUpdateAndRelatedAssets;
+ (void)cleanupAllSoftwareUpdateAssets;
+ (id)tryCreateDescriptorFromSoftwareUpdateAsset:(id)arg1;
+ (id)defaultAssetDownloadOptionsWithPriority:(int)arg1;
+ (id)findAssetWithMatcher:(id)arg1 localSearch:(BOOL)arg2 error:(id*)arg3;
+ (id)getLocalDefaultSoftwareUpdateAssetIfExists;
+ (void)_cleanupAllAssetsOfType:(id)arg1;
+ (id)tryCreateDocumentationFromDocumentationAsset:(id)arg1;
+ (id)getInstalledDocumentationAssetFromSoftwareUpdateAssetIfExists:(id)arg1;


@end
