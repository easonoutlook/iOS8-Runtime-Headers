/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSString, NSDictionary, NSNumber, NSDate;

@interface AssetCollectionInfo : NSObject <NSSecureCoding> {
    BOOL _isMine;
    BOOL _hasVideoAsset;
    BOOL _isDeletable;
    NSString *_GUID;
    NSString *_personID;
    NSDictionary *_metaData;
    NSNumber *_width;
    NSNumber *_height;
    NSDate *_timestamp;
}

@property(retain,readonly) NSString * GUID;
@property(retain,readonly) NSString * personID;
@property(readonly) BOOL isMine;
@property(readonly) BOOL hasVideoAsset;
@property(readonly) BOOL isDeletable;
@property(retain,readonly) NSDictionary * metaData;
@property(retain,readonly) NSNumber * width;
@property(retain,readonly) NSNumber * height;
@property(retain,readonly) NSDate * timestamp;

+ (BOOL)supportsSecureCoding;

- (id)metaData;
- (id)initWithAssetCollection:(id)arg1;
- (BOOL)isDeletable;
- (BOOL)hasVideoAsset;
- (BOOL)isMine;
- (id)GUID;
- (id)personID;
- (id)height;
- (id)width;
- (id)timestamp;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)dealloc;

@end
