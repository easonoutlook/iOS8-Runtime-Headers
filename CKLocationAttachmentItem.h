/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKLocationAttachmentItem : CKAttachmentItem  {
    struct { 
        double latitude; 
        double longitude; 
    } _coordinate;
}

@property struct { double x1; double x2; } coordinate;

+ (id)UTITypes;

- (void)setCoordinate:(struct { double x1; double x2; })arg1;
- (struct { double x1; double x2; })coordinate;
- (BOOL)isDroppedPin;
- (id)vCardURLProperties;
- (id)pin;
- (id)_generateThumbnailFillToSize:(struct CGSize { float x1; float x2; })arg1;
- (id)initWithFileURL:(id)arg1 size:(struct CGSize { float x1; float x2; })arg2 guid:(id)arg3;
- (void)generatePreviewForSize:(struct CGSize { float x1; float x2; })arg1 withType:(int)arg2 queue:(id)arg3 completion:(id)arg4;

@end