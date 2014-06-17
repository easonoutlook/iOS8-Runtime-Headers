/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSString;

@interface TSDMediaInfo : TSDStyledInfo  {
    struct CGSize { 
        float width; 
        float height; 
    } mOriginalSize;
    struct { 
        unsigned int isPlaceholder : 1; 
        unsigned int wasMediaReplaced : 1; 
    } mFlags;
}

@property struct CGSize { float x1; float x2; } originalSize;
@property(readonly) struct CGSize { float x1; float x2; } defaultOriginalSize;
@property BOOL isPlaceholder;
@property BOOL wasMediaReplaced;
@property unsigned int flags;
@property(readonly) NSString * mediaDisplayName;
@property(readonly) NSString * mediaFileType;
@property(readonly) struct CGSize { float x1; float x2; } rawDataSize;


- (void)setFlags:(unsigned int)arg1;
- (void)setIsPlaceholder:(BOOL)arg1;
- (BOOL)isPlaceholder;
- (unsigned int)flags;
- (void)setGeometry:(id)arg1;
- (id)mediaFileType;
- (void)takePropertiesFromReplacedMediaInfo:(id)arg1;
- (void)setWasMediaReplaced:(BOOL)arg1;
- (BOOL)wasMediaReplaced;
- (void)updateGeometryToReplaceMediaInfo:(id)arg1;
- (struct CGPoint { float x1; float x2; })centerForReplacingWithNewMedia;
- (struct CGSize { float x1; float x2; })rawDataSize;
- (id)mediaDisplayName;
- (struct CGSize { float x1; float x2; })originalSize;
- (void)setOriginalSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })defaultOriginalSize;
- (id)commandForSettingBoxedValue:(id)arg1 forProperty:(int)arg2;
- (id)initWithContext:(id)arg1 geometry:(id)arg2;
- (id)copyWithContext:(id)arg1;

@end
