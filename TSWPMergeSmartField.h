/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString;

@interface TSWPMergeSmartField : TSWPPlaceholderSmartField  {
    NSString *_property;
    NSString *_label;
    NSString *_key;
    int _category;
    BOOL _requiresFollowingWhitespace;
    NSString *_whitespace;
    NSString *_guid;
    NSString *_tableField;
}

@property(copy) NSString * property;
@property(copy) NSString * label;
@property(copy) NSString * key;
@property int category;
@property BOOL requiresFollowingWhitespace;
@property(copy) NSString * whitespace;
@property(copy) NSString * guid;
@property(copy) NSString * tableField;


- (void)setProperty:(id)arg1;
- (id)property;
- (id)guid;
- (void)setGuid:(id)arg1;
- (void)setKey:(id)arg1;
- (id)key;
- (void)setCategory:(int)arg1;
- (int)category;
- (void)setLabel:(id)arg1;
- (id)label;
- (void)dealloc;
- (id)tableField;
- (id)whitespace;
- (BOOL)requiresFollowingWhitespace;
- (void)setTableField:(id)arg1;
- (void)setWhitespace:(id)arg1;
- (void)setRequiresFollowingWhitespace:(BOOL)arg1;
- (const struct PlaceholderSmartFieldArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct SmartFieldArchive {} *x3; boolx4; int x5; unsigned int x6[1]; }*)placeholderSmartFieldArchiveFromUnarchiver:(id)arg1;
- (BOOL)allowsPasteAsSmartField;
- (int)smartFieldKind;
- (id)copyWithContext:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;

@end