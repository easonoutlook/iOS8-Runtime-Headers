/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADPresetDash : OADDash  {
    unsigned char mType;
    unsigned int mIsTypeOverridden : 1;
}

+ (id)defaultProperties;

- (id)initWithDefaults;
- (BOOL)isTypeOverridden;
- (id)equivalentCustomDash;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end