/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@class NSString;

@interface SLFacebookAlbum : NSObject <NSSecureCoding> {
    BOOL _canUpload;
    BOOL _isDefaultAlbum;
    NSString *_identifier;
    NSString *_name;
    NSString *_coverPhotoIdentifier;
    int _count;
}

@property(retain) NSString * identifier;
@property(retain) NSString * name;
@property(retain) NSString * coverPhotoIdentifier;
@property int count;
@property BOOL canUpload;
@property BOOL isDefaultAlbum;

+ (BOOL)supportsSecureCoding;
+ (id)albumWithDataDictionary:(id)arg1;
+ (id)albumsWithAlbumDataDictionaries:(id)arg1;

- (void).cxx_destruct;
- (void)setIdentifier:(id)arg1;
- (void)setCount:(int)arg1;
- (id)identifier;
- (void)setCanUpload:(BOOL)arg1;
- (void)setCoverPhotoIdentifier:(id)arg1;
- (BOOL)isDefaultAlbum;
- (id)coverPhotoIdentifier;
- (void)setIsDefaultAlbum:(BOOL)arg1;
- (BOOL)canUpload;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)description;
- (int)count;

@end
