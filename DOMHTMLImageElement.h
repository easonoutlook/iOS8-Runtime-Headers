/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@class NSURL, NSString;

@interface DOMHTMLImageElement : DOMHTMLElement  {
}

@property(copy) NSString * name;
@property(copy) NSString * align;
@property(copy) NSString * alt;
@property(copy) NSString * border;
@property int height;
@property int hspace;
@property BOOL isMap;
@property(copy) NSString * longDesc;
@property(copy) NSString * src;
@property(copy) NSString * useMap;
@property int vspace;
@property int width;
@property(readonly) BOOL complete;
@property(copy) NSString * lowsrc;
@property(readonly) int naturalHeight;
@property(readonly) int naturalWidth;
@property(readonly) int x;
@property(readonly) int y;
@property(copy,readonly) NSString * altDisplayString;
@property(copy,readonly) NSURL * absoluteImageURL;

+ (float)mf_maxPhotoWidth;
+ (id)mf_edgeToEdgeImageAttachmentStyle;

- (id)altDisplayString;
- (int)naturalWidth;
- (int)naturalHeight;
- (void)setLowsrc:(id)arg1;
- (id)lowsrc;
- (void)setUseMap:(id)arg1;
- (id)useMap;
- (void)setSrcset:(id)arg1;
- (id)srcset;
- (void)setIsMap:(BOOL)arg1;
- (BOOL)isMap;
- (void)setCrossOrigin:(id)arg1;
- (id)crossOrigin;
- (void)setLongDesc:(id)arg1;
- (id)longDesc;
- (void)setSrc:(id)arg1;
- (id)src;
- (void)setVspace:(int)arg1;
- (int)vspace;
- (void)setHspace:(int)arg1;
- (int)hspace;
- (void)setAlt:(id)arg1;
- (id)alt;
- (void)setAlign:(id)arg1;
- (id)align;
- (void)setBorder:(id)arg1;
- (id)border;
- (BOOL)complete;
- (void)setHeight:(int)arg1;
- (void)setWidth:(int)arg1;
- (int)y;
- (int)x;
- (id)absoluteImageURL;
- (id)mimeType;
- (id)dataRepresentation:(BOOL)arg1;
- (int)height;
- (int)width;
- (id)name;
- (void)setName:(id)arg1;
- (BOOL)showsTapHighlight;
- (BOOL)alwaysAttemptToShowTapHighlight;
- (void)mf_applyEdgeToEdgeStyle;
- (BOOL)mf_shouldFormatEdgeToEdge;
- (BOOL)mf_isEdgeToEdgeFormatted;
- (void)recursivelyRemoveMailAttributes;
- (void)mf_unconstrainImageSize;
- (void)mf_constrainImageToSize:(struct CGSize { float x1; float x2; })arg1;

@end