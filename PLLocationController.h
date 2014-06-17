/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSString, CLLocationManager, NSDictionary, NSMutableArray;

@interface PLLocationController : NSObject <CLLocationManagerDelegate> {
    CLLocationManager *_locationManager;
    NSMutableArray *_locationPendingAssets;
    NSDictionary *_exifDictionary;
    NSString *_locationStr;
    BOOL _isEnabled;
    BOOL _isUpdating;
    BOOL _isHeadingEnabled;
}

+ (void)setUsesEffectiveBundleIdentifier:(BOOL)arg1;
+ (BOOL)usesEffectiveBundleIdentifier;
+ (id)sharedInstance;

- (void)addLocationToMediaWithAssetURLWhenAvailable:(id)arg1 deviceOrientation:(int)arg2 cameraWasRearFacing:(BOOL)arg3;
- (void)setHeadingEnabled:(BOOL)arg1;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)_updatePendingAssets;
- (BOOL)_addLocationToAsset:(id)arg1;
- (id)locationDictionaryForImageWithDeviceOrientation:(int)arg1 rearFacingCamera:(BOOL)arg2;
- (id)locationString;
- (void)_startUpdating;
- (void)_stopUpdating;
- (void)_updateLocationRunState;
- (void)_assetContainerChanged:(id)arg1;
- (void)_applicationStateChanged:(id)arg1;
- (id)location;
- (void)setEnabled:(BOOL)arg1;
- (void)dealloc;
- (id)init;

@end
