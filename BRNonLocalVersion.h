/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@class NSString, GSPermanentStorage, NSDate, <NSCopying><NSSecureCoding>, NSURL;

@interface BRNonLocalVersion : NSObject  {
    NSURL *_url;
    NSString *_displayName;
    NSString *_etag;
    unsigned long long _size;
    NSDate *_modificationDate;
    NSString *_lastEditorDeviceName;
    BOOL _hasThumbnail;
    GSPermanentStorage *_versionsStore;
}

@property(readonly) NSURL * url;
@property(readonly) NSString * etag;
@property(readonly) <NSCopying><NSSecureCoding> * persistentIdentifier;
@property(readonly) NSString * displayName;
@property(readonly) unsigned long long size;
@property(readonly) NSDate * modificationDate;
@property(readonly) NSString * lastEditorDeviceName;
@property(readonly) BOOL hasThumbnail;
@property(readonly) BOOL isLatestVersion;

+ (id)listVersionsOfDocumentAtURL:(id)arg1;

- (BOOL)hasThumbnail;
- (id)modificationDate;
- (id)persistentIdentifier;
- (id)lastEditorDeviceName;
- (id)etag;
- (id)initWithURL:(id)arg1 physicalURL:(id)arg2 etag:(id)arg3 lastEditorDeviceName:(id)arg4 versionsStore:(id)arg5;
- (id)displayName;
- (id)url;
- (unsigned long long)size;
- (id)description;
- (void)dealloc;
- (BOOL)isLatestVersion;

@end
