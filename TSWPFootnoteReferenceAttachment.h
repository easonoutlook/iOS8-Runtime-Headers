/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class TSWPStorage, NSString;

@interface TSWPFootnoteReferenceAttachment : TSWPTextualAttachment  {
    TSWPStorage *_containedStorage;
    NSString *_customMarkString;
}

@property(retain) TSWPStorage * containedStorage;
@property(retain) NSString * customMarkString;


- (int)elementKind;
- (BOOL)isSearchable;
- (id)initWithContext:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (void)checkDebug;
- (void)setContainedStorageParentInfoToStorage:(id)arg1;
- (void)setCustomMarkString:(id)arg1;
- (void)applyMark;
- (id)initWithContext:(id)arg1 wpStorage:(id)arg2;
- (BOOL)shouldArchiveStringEquivalent;
- (const struct TextualAttachmentArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x3; int x4; int x5; unsigned int x6[1]; }*)textualAttachmentArchiveFromUnarchiver:(id)arg1;
- (void)setContainedStorage:(id)arg1;
- (id)customMarkString;
- (id)stringEquivalent;
- (void)setParentStorage:(id)arg1;
- (unsigned int)findCharIndex;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (id)containedStorage;
- (id)copyWithContext:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;

@end
