/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

@class NSString, NSFileManager;

@interface ATAirlock : NSObject  {
    NSFileManager *_fm;
    NSString *_basePath;
}

+ (id)sharedInstance;

- (void)handleCompletedAsset:(id)arg1;
- (void)purgeAssetWithIdentifier:(id)arg1 dataclass:(id)arg2;
- (void)evacuate;
- (void)evacuateDataclasses:(id)arg1;
- (void)createAirlockForDataclasses:(id)arg1;
- (id)pathForDataclass:(id)arg1;
- (id)geniusPathForDataclass:(id)arg1 geniusIdentifier:(id)arg2;
- (id)artworkPathForDataclass:(id)arg1 artworkIdentifier:(id)arg2;
- (void)copyAssetToAirlock:(id)arg1;
- (void).cxx_destruct;
- (id)init;

@end
