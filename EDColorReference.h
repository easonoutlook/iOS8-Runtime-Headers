/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDResources;

@interface EDColorReference : NSObject <NSCopying> {
    EDResources *mResources;
    int mSystemColorID;
    unsigned int mColorIndex;
    unsigned int mThemeIndex;
    double mTint;
}

+ (id)colorReferenceWithColorIndex:(unsigned int)arg1 resources:(id)arg2;
+ (id)colorReferenceWithSystemColorID:(int)arg1 resources:(id)arg2;
+ (id)colorReferenceWithThemeIndex:(unsigned int)arg1 tint:(double)arg2 resources:(id)arg3;
+ (id)colorReferenceWithColor:(id)arg1 resources:(id)arg2;
+ (id)colorReferenceWithResources:(id)arg1;

- (unsigned int)colorIndex;
- (double)tint;
- (unsigned int)themeIndex;
- (BOOL)isEqualToColorReference:(id)arg1;
- (id)initWithColor:(id)arg1 resources:(id)arg2;
- (id)initWithResources:(id)arg1;
- (int)systemColorID;
- (id)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)isValid;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end
