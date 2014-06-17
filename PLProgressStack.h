/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSMutableArray, NSString;

@interface PLProgressStack : NSObject  {
    BOOL notifyUsingAssetsdNotificationCenter;
    id delegate;
    float currentMultiplier;
    NSMutableArray *multipliers;
    float currentTotal;
    NSString *mediaPathString;
}

@property id delegate;
@property float currentMultiplier;
@property(retain) NSMutableArray * multipliers;
@property float currentTotal;
@property BOOL notifyUsingAssetsdNotificationCenter;
@property(retain) NSString * mediaPathString;

+ (id)unarchiveFromDictionary:(id)arg1;

- (id)archiveToDictionary;
- (void)popAndUpdate;
- (void)push:(float)arg1;
- (void)setNotifyUsingAssetsdNotificationCenter:(BOOL)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)mediaPathString;
- (BOOL)notifyUsingAssetsdNotificationCenter;
- (float)totalProgress:(float)arg1;
- (void)setMediaPathString:(id)arg1;
- (void)setCurrentTotal:(float)arg1;
- (float)currentMultiplier;
- (float)currentTotal;
- (id)multipliers;
- (void)setMultipliers:(id)arg1;
- (void)setCurrentMultiplier:(float)arg1;
- (void)setCurrentMediaPath:(id)arg1;
- (void)updateProgress:(float)arg1;
- (void)pop;
- (id)delegate;
- (void)dealloc;
- (void)setDelegate:(id)arg1;

@end