/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@class NSData;

@interface SBWallpaperImage : UIImage  {
    int _variant;
    NSData *_data;
}

@property(readonly) int variant;
@property(readonly) NSData * data;

+ (void)preheatWallpaperDataForVariant:(int)arg1;
+ (struct CGImage { }*)_newBlackWallpaperImage;
+ (id)cachedWallpaperDataForVariant:(int)arg1;

- (int)variant;
- (id)initWithVariant:(int)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)data;
- (void)dealloc;

@end