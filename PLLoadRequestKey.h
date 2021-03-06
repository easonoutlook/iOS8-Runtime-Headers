/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSManagedObjectID;

@interface PLLoadRequestKey : NSObject <NSCopying> {
    unsigned short _sourceID;
    NSManagedObjectID *_objectID;
    unsigned int _hash;
}

+ (id)keyWithSource:(id)arg1 asset:(id)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;

@end
