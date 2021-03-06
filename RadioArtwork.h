/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@class NSURL;

@interface RadioArtwork : NSObject <NSCopying> {
    NSURL *_URL;
    struct CGSize { 
        float width; 
        float height; 
    } _pixelSize;
}

@property(readonly) struct CGSize { float x1; float x2; } pixelSize;
@property(readonly) struct CGSize { float x1; float x2; } pointSize;
@property(readonly) NSURL * URL;


- (id)initWithArtworkDictionary:(id)arg1;
- (id)initWithArtworkURL:(id)arg1 pixelSize:(struct CGSize { float x1; float x2; })arg2;
- (struct CGSize { float x1; float x2; })pixelSize;
- (void).cxx_destruct;
- (struct CGSize { float x1; float x2; })pointSize;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)URL;
- (id)description;

@end
