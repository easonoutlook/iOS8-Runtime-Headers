/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSString;

@interface PLPhotoEffect : NSObject  {
    NSString *_filterIdentifier;
    NSString *_displayName;
    NSString *_CIFilterName;
}

@property(copy,readonly) NSString * filterIdentifier;
@property(copy,readonly) NSString * displayName;
@property(copy,readonly) NSString * CIFilterName;

+ (unsigned int)indexOfEffectWithIdentifier:(id)arg1;
+ (id)allEffects;
+ (id)_effectWithIdentifier:(id)arg1 CIFilterName:(id)arg2 displayName:(id)arg3;
+ (id)effectWithCIFilterName:(id)arg1;
+ (id)effectWithIdentifier:(id)arg1;

- (id)CIFilterName;
- (id)filterIdentifier;
- (id)newEffectFilter;
- (id)displayName;
- (id)description;

@end
