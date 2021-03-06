/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@class NSDate, NSNumber, NSData, NoteBodyObject, NoteStoreObject, NSString, NSURL, NSSet;

@interface NoteObject : NSManagedObject  {
}

@property(retain) NSNumber * externalFlags;
@property(retain) NSNumber * externalServerIntId;
@property(retain) NSNumber * deletedFlag;
@property(retain) NSNumber * externalSequenceNumber;
@property(retain) NSString * summary;
@property(retain) NSString * author;
@property(retain) NSDate * modificationDate;
@property(retain) NSDate * creationDate;
@property(retain) NSString * title;
@property(retain) NSNumber * contentType;
@property(retain) NSNumber * containsCJK;
@property(retain) NoteBodyObject * body;
@property(retain) NSSet * attachments;
@property(retain) NoteStoreObject * store;
@property(retain) NSNumber * integerId;
@property(retain) NSString * content;
@property(readonly) NSString * contentAsPlainText;
@property BOOL isPlainText;
@property(readonly) NSURL * noteId;
@property(readonly) BOOL isMarkedForDeletion;
@property(readonly) BOOL isBeingMarkedForDeletion;
@property(retain) NSNumber * isBookkeepingEntry;
@property(retain) NSString * serverId;
@property(readonly) BOOL hasValidServerIntId;
@property long long serverIntId;
@property(retain,readonly) NSString * guid;
@property unsigned long long flags;
@property(retain) NSData * externalRepresentation;
@property(retain) NSString * externalContentRef;
@property unsigned long long sequenceNumber;


- (BOOL)containsAttachments;
- (void)setFlags:(unsigned long long)arg1;
- (BOOL)belongsToCollection:(id)arg1;
- (id)noteId;
- (BOOL)isBeingMarkedForDeletion;
- (void)setExternalContentRef:(id)arg1;
- (id)externalContentRef;
- (id)contentAsPlainTextPreservingNewlines;
- (void)markForDeletion;
- (void)setIsPlainText:(BOOL)arg1;
- (void)setSequenceNumber:(unsigned long long)arg1;
- (unsigned long long)flags;
- (BOOL)isMarkedForDeletion;
- (void)setServerIntId:(long long)arg1;
- (long long)serverIntId;
- (BOOL)hasValidServerIntId;
- (void)setExternalRepresentation:(id)arg1;
- (id)contentAsPlainText;
- (BOOL)isPlainText;
- (id)externalRepresentation;
- (id)content;
- (void)setContent:(id)arg1;
- (unsigned long long)sequenceNumber;

@end
