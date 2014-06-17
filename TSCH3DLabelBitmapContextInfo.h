/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DLabelBitmapContextInfo : NSObject <NSCopying> {
    BOOL mIsPrinting;
    BOOL mIsPDF;
    BOOL mHasSuppressedBackgrounds;
}

@property(readonly) BOOL isPDF;
@property(readonly) BOOL isPrinting;
@property(readonly) BOOL hasSuppressedBackgrounds;

+ (id)context;
+ (id)contextInfoWithIsPrinting:(BOOL)arg1 isPDF:(BOOL)arg2 hasSuppressedBackgrounds:(BOOL)arg3;
+ (void)setIsPrinting:(BOOL)arg1 isPDF:(BOOL)arg2 hasSuppressedBackgrounds:(BOOL)arg3 forScene:(id)arg4;
+ (id)contextInfoForScene:(id)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (id)initWithIsPrinting:(BOOL)arg1 isPDF:(BOOL)arg2 hasSuppressedBackgrounds:(BOOL)arg3;
- (BOOL)isPDF;
- (BOOL)isPrinting;
- (void)setTSDCGContextInfoForCGContext:(struct CGContext { }*)arg1;
- (BOOL)hasSuppressedBackgrounds;

@end
