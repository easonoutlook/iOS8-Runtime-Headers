/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADPresetPattern : OADPattern  {
    int mType;
    BOOL mIsTypeOverridden;
}

+ (id)namedBitmapDataForPresetPatternType:(int)arg1;
+ (id)nameForPresetPatternType:(int)arg1;
+ (id)defaultProperties;

- (id)initWithDefaults;
- (BOOL)isTypeOverridden;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end