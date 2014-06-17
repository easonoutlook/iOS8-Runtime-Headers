/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@class BRCItemID, NSString, NSData, BRCLocalContainer, NSNumber;

@interface BRCDesiredAddition : NSObject  {
    id _versionOrThumbData;
    NSData *_thumbnailData;
    BOOL _needsInsert;
    BRCItemID *_itemID;
    unsigned int _type;
    NSNumber *_stagedFileID;
    NSString *_etag;
    BRCLocalContainer *_container;
    NSString *_key;
}

@property(readonly) BRCItemID * itemID;
@property(retain) NSNumber * stagedFileID;
@property(readonly) BRCLocalContainer * container;
@property(retain) NSString * key;
@property BOOL needsInsert;
@property(retain) id versionOrThumbData;
@property unsigned int type;
@property(readonly) NSString * etag;

+ (id)fetchFromContainer:(id)arg1 itemID:(id)arg2 etag:(id)arg3 type:(unsigned int)arg4;
+ (BOOL)dumpContainer:(id)arg1 type:(unsigned int)arg2 name:(id)arg3 toContext:(id)arg4 error:(id*)arg5;
+ (BOOL)dumpContainer:(id)arg1 toContext:(id)arg2 error:(id*)arg3;

- (void)setVersionOrThumbData:(id)arg1;
- (void)setNeedsInsert:(BOOL)arg1;
- (void)setStagedFileID:(id)arg1;
- (BOOL)deleteFromDB;
- (BOOL)moveToStageFromDownloadPath:(id)arg1;
- (id)initWithItemID:(id)arg1 container:(id)arg2 etag:(id)arg3 type:(unsigned int)arg4;
- (id)versionOrThumbData;
- (id)initFromPQLResultSet:(id)arg1 container:(id)arg2 error:(id*)arg3;
- (BOOL)needsInsert;
- (id)stagedFileID;
- (BOOL)saveToDB;
- (id)itemID;
- (id)etag;
- (void).cxx_destruct;
- (void)setKey:(id)arg1;
- (id)key;
- (id)container;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (id)description;

@end
