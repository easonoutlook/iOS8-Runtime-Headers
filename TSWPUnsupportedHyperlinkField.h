/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString;

@interface TSWPUnsupportedHyperlinkField : TSWPPlaceholderSmartField  {
    NSString *_href;
}

@property(copy) NSString * href;


- (void)setHref:(id)arg1;
- (id)href;
- (void)dealloc;
- (const struct PlaceholderSmartFieldArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct SmartFieldArchive {} *x3; boolx4; int x5; unsigned int x6[1]; }*)placeholderSmartFieldArchiveFromUnarchiver:(id)arg1;
- (BOOL)allowsPasteAsSmartField;
- (int)smartFieldKind;
- (id)copyWithContext:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;

@end
