/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class PKImage;

@interface PKPassLogoImageSet : PKPassImageSet  {
    PKImage *_logoImage;
    PKImage *_backgroundImage;
    PKImage *_stripImage;
}

@property(retain) PKImage * logoImage;
@property(retain) PKImage * backgroundImage;
@property(retain) PKImage * stripImage;

+ (int)imageSetType;
+ (BOOL)shouldCache;
+ (BOOL)supportsSecureCoding;

- (id)logoImage;
- (void)setLogoImage:(id)arg1;
- (void)setStripImage:(id)arg1;
- (id)initWithDisplayProfile:(id)arg1 fileURL:(id)arg2 screenScale:(float)arg3 suffix:(id)arg4;
- (id)stripImage;
- (void)preheatImages;
- (void)setBackgroundImage:(id)arg1;
- (id)backgroundImage;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end
