/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@class NSString;

@interface BSPlatform : NSObject  {
    NSString *_productVersion;
    NSString *_productBuildVersion;
    NSString *_productHardwareModel;
    NSString *_productType;
    NSString *_productClass;
    NSString *_uniqueDeviceIdentifier;
    NSString *_localizedProductName;
    BOOL _hasGasGauge;
    BOOL _isInternalInstall;
    BOOL _isMultiCore;
}

@property(copy,readonly) NSString * productVersion;
@property(copy,readonly) NSString * productBuildVersion;
@property(copy,readonly) NSString * productType;
@property(copy,readonly) NSString * productHardwareModel;
@property(copy,readonly) NSString * productClass;
@property(copy,readonly) NSString * localizedProductName;
@property(copy,readonly) NSString * uniqueDeviceIdentifier;
@property(getter=isInternalInstall,readonly) BOOL internalInstall;
@property(getter=isMultiCore,readonly) BOOL multiCore;
@property(readonly) BOOL hasGasGauge;

+ (id)sharedInstance;

- (BOOL)isInternalInstall;
- (id)productType;
- (id)productBuildVersion;
- (id)uniqueDeviceIdentifier;
- (id)productVersion;
- (BOOL)isMultiCore;
- (BOOL)hasGasGauge;
- (id)localizedProductName;
- (id)productClass;
- (id)productHardwareModel;
- (void)dealloc;
- (id)init;

@end
