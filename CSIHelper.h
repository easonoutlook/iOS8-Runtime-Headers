/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@class NSString, NSData, _CSIRenditionBlockData, _CUIThemePixelRendition;

@interface CSIHelper : NSObject  {
    struct _slice { 
        unsigned int x; 
        unsigned int y; 
        unsigned int width; 
        unsigned int height; 
    } slice;
    unsigned long rowbytes;
    NSData *csiData;
    struct _csibitmap { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned char x5[0]; } *bmp;
    int renditionLock;
    _CUIThemePixelRendition *rendition;
    _CSIRenditionBlockData *sharedBlockDataBGRX;
    _CSIRenditionBlockData *sharedBlockDataRGBX;
    NSString *blockDataCacheKeyBGRX;
    NSString *blockDataCacheKeyRGBX;
}



@end
