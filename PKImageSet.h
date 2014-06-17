/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class NSURL;

@interface PKImageSet : NSObject <NSSecureCoding> {
    NSURL *_originCacheURL;
    int _version;
}

@property(copy) NSURL * originCacheURL;
@property int version;

+ (int)currentVersion;
+ (id)imageSetForType:(int)arg1 displayProfile:(id)arg2 fileURL:(id)arg3 cacheURL:(id)arg4;
+ (id)archiveName;
+ (id)_archiveURL:(id)arg1;
+ (id)_archivedImageSet:(id)arg1;
+ (Class)classForImageSetType:(int)arg1;
+ (Class)_classForDisplayProfileType:(int)arg1;
+ (int)imageSetType;
+ (id)imageSetForType:(int)arg1 screenScale:(float)arg2 suffix:(id)arg3 displayProfile:(id)arg4 fileURL:(id)arg5 cacheURL:(id)arg6;
+ (BOOL)shouldCache;
+ (BOOL)supportsSecureCoding;

- (void)saveCache:(id)arg1;
- (id)originCacheURL;
- (void)setOriginCacheURL:(id)arg1;
- (id)initWithDisplayProfile:(id)arg1 fileURL:(id)arg2 screenScale:(float)arg3 suffix:(id)arg4;
- (void)preheatImages;
- (int)version;
- (void)setVersion:(int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end