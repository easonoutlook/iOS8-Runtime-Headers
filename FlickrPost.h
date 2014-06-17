/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VUSocialUpload.framework/VUSocialUpload
 */

@class NSArray, NSString, NSData, <FlickrPostDelegate>, NSURL;

@interface FlickrPost : FlickrRequest <NSURLConnectionDelegate> {
    BOOL _hidden;
    NSURL *_assetURL;
    NSData *_photoData;
    NSString *_title;
    NSString *_postDescription;
    NSArray *_tags;
    unsigned int _visibility;
    int _safetyLevel;
    int _contentType;
    <FlickrPostDelegate> *_delegate;
    long long _photoSetID;
}

@property(retain) NSURL * assetURL;
@property(retain) NSData * photoData;
@property(retain) NSString * title;
@property(retain) NSString * postDescription;
@property(retain) NSArray * tags;
@property long long photoSetID;
@property unsigned int visibility;
@property int safetyLevel;
@property int contentType;
@property BOOL hidden;
@property <FlickrPostDelegate> * delegate;

+ (BOOL)supportsSecureCoding;

- (int)contentType;
- (void)setContentType:(int)arg1;
- (void)setVisibility:(unsigned int)arg1;
- (unsigned int)visibility;
- (BOOL)hidden;
- (void)setSafetyLevel:(int)arg1;
- (int)safetyLevel;
- (BOOL)uploadToAccount:(id)arg1;
- (void)_uploadData:(id)arg1 toAccount:(id)arg2;
- (id)postDescription;
- (void)setPostDescription:(id)arg1;
- (void)setAssetURL:(id)arg1;
- (void)setPhotoSetID:(long long)arg1;
- (long long)photoSetID;
- (id)serializedDictionary;
- (id)assetURL;
- (id)photoData;
- (void)setPhotoData:(id)arg1;
- (void)setTags:(id)arg1;
- (void).cxx_destruct;
- (id)tags;
- (id)title;
- (id)initWithDictionary:(id)arg1;
- (id)delegate;
- (void)setTitle:(id)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setDelegate:(id)arg1;

@end
