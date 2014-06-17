/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADLineEnd : OADProperties <NSCopying> {
    unsigned char mType;
    unsigned char mWidth;
    unsigned char mLength;
    unsigned int mIsTypeOverridden : 1;
    unsigned int mIsWidthOverridden : 1;
    unsigned int mIsLengthOverridden : 1;
}

+ (id)stringForLineEndLength:(int)arg1;
+ (id)stringForLineEndWidth:(int)arg1;
+ (id)stringForLineEndType:(int)arg1;
+ (id)defaultProperties;

- (id)initWithType:(int)arg1 width:(int)arg2 length:(int)arg3;
- (BOOL)isLengthOverridden;
- (id)initWithDefaults;
- (BOOL)isTypeOverridden;
- (BOOL)isWidthOverridden;
- (void)setWidth:(int)arg1;
- (void)setLength:(int)arg1;
- (int)width;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (int)length;
- (id)description;

@end
