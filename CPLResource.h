/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@class CPLResourceIdentity, NSString;

@interface CPLResource : NSObject <NSSecureCoding, NSCopying> {
    BOOL _generateDerivative;
    CPLResourceIdentity *_identity;
    NSString *_itemIdentifier;
    unsigned int _resourceType;
}

@property(retain) CPLResourceIdentity * identity;
@property(copy) NSString * itemIdentifier;
@property unsigned int resourceType;
@property BOOL generateDerivative;

+ (unsigned int)maxPixelSizeForResourceType:(unsigned int)arg1;
+ (id)descriptionForResourceType:(unsigned int)arg1;
+ (id)shortDescriptionForResourceType:(unsigned int)arg1;
+ (id)normalizedResourcesFromResources:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (void)setItemIdentifier:(id)arg1;
- (void)setGenerateDerivative:(BOOL)arg1;
- (void)setResourceType:(unsigned int)arg1;
- (id)initWithResourceIdentity:(id)arg1 itemIdentifier:(id)arg2 resourceType:(unsigned int)arg3;
- (id)itemIdentifier;
- (unsigned int)resourceType;
- (id)identity;
- (BOOL)generateDerivative;
- (void)setIdentity:(id)arg1;
- (unsigned int)maxPixelSizeForPhotoResource;
- (id)initWithResourceIdentity:(id)arg1 itemIdentifier:(id)arg2;
- (id)bestFileNameForResource;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;

@end
