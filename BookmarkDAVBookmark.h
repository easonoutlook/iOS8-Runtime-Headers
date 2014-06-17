/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/BookmarkDAV.framework/BookmarkDAV
 */

@class NSURL, NSMutableString, NSDictionary, CoreDAVErrorItem, NSString, NSData, NSArray;

@interface BookmarkDAVBookmark : NSObject <CoreDAVLeafDataPayload, NSXMLParserDelegate> {
    NSURL *_bookmarkURL;
    NSURL *_serverID;
    NSString *_name;
    NSString *_syncKey;
    NSMutableString *_appleAttributeString;
    NSDictionary *_appleAttributes;
    int _parseState;
    int _ignoreLevel;
    CoreDAVErrorItem *_bulkUploadErrorItem;
}

@property(retain,readonly) NSURL * bookmarkURL;
@property(retain,readonly) NSString * name;
@property(retain,readonly) NSDictionary * appleAttributes;
@property(retain) CoreDAVErrorItem * bulkUploadErrorItem;
@property(retain) NSURL * serverID;
@property(readonly) NSData * dataPayload;
@property(readonly) NSString * syncKey;
@property(readonly) NSArray * childrenOrder;


- (id)syncKey;
- (id)serverID;
- (void)setServerID:(id)arg1;
- (id)dataPayload;
- (id)initWithURL:(id)arg1 eTag:(id)arg2 dataPayload:(id)arg3 inContainerWithURL:(id)arg4 withAccountInfoProvider:(id)arg5;
- (void)setBulkUploadErrorItem:(id)arg1;
- (id)bulkUploadErrorItem;
- (id)appleAttributes;
- (id)bookmarkURL;
- (id)initWithBookmarkURL:(id)arg1 serverID:(id)arg2 name:(id)arg3 syncKey:(id)arg4 appleAttributes:(id)arg5;
- (void)setPropertiesFromXBEL:(id)arg1;
- (id)name;
- (void)dealloc;
- (void)parser:(id)arg1 foundCDATA:(id)arg2;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;

@end
