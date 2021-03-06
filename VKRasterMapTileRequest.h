/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSLocale;

@interface VKRasterMapTileRequest : NSObject <NSCopying> {
    int _mapType;
    unsigned int _scale;
    NSLocale *_locale;
    unsigned int _tileGroupID;
    struct VKRasterTileKey { 
        unsigned int x; 
        unsigned int y; 
        unsigned int z; 
        unsigned int pointSize; 
    } _tileKey;
}

@property struct VKRasterTileKey { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; } tileKey;
@property int mapType;
@property unsigned int scale;
@property(retain) NSLocale * locale;
@property unsigned int tileGroupID;
@property(readonly) const struct VKRasterTileKey { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; }* tileKeyPtr;
@property(readonly) BOOL isInvalid;
@property(readonly) struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; } tk;
@property(readonly) struct VKCacheKey { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; } cacheKey;


- (void)setTileGroupID:(unsigned int)arg1;
- (unsigned int)tileGroupID;
- (struct VKRasterTileKey { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })tileKey;
- (void)isReallyInvalid:(id)arg1;
- (struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; })tk;
- (const struct VKRasterTileKey { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; }*)tileKeyPtr;
- (BOOL)isInvalid;
- (void)setTileKey:(struct VKRasterTileKey { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })arg1;
- (void)setMapType:(int)arg1;
- (int)mapType;
- (struct VKCacheKey { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })cacheKey;
- (id)locale;
- (void)setLocale:(id)arg1;
- (void)setScale:(unsigned int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)scale;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)init;

@end
