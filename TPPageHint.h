/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class <TSDHint>, NSDictionary;

@interface TPPageHint : NSObject <TSWPOffscreenColumn> {
    int _pageKind;
    struct vector<TSWPTargetHint, std::__1::allocator<TSWPTargetHint> > { 
        struct { /* ? */ } *__begin_; 
        struct { /* ? */ } *__end_; 
        struct __compressed_pair<TSWPTargetHint *, std::__1::allocator<TSWPTargetHint> > { 
            struct { /* ? */ } *__first_; 
        } __end_cap_; 
    } _hints;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _footnoteAutoNumberRange;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _footnoteLayoutRange;
    <TSDHint> *_firstChildHint;
    <TSDHint> *_lastChildHint;
    NSDictionary *_anchoredAttachmentPositions;
    struct TSWPTopicNumberHints { 
        struct map<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> >, std::__1::less<const TSWPListStyle *>, std::__1::allocator<std::__1::pair<const TSWPListStyle *const, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > > > > { 
            struct __tree<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::__map_value_compare<const TSWPListStyle *, std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::less<const TSWPListStyle *>, true>, std::__1::allocator<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > > > > { 
                struct __tree_node<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, void *> {} *__begin_node_; 
                struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, void *> > > { 
                    struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                        struct __tree_node_base<void *> {} *__left_; 
                    } __first_; 
                } __pair1_; 
                struct __compressed_pair<unsigned long, std::__1::__map_value_compare<const TSWPListStyle *, std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::less<const TSWPListStyle *>, true> > { 
                    unsigned long __first_; 
                } __pair3_; 
            } __tree_; 
        } _numbersForListStyle; 
        unsigned int _charIndex; 
        unsigned int _validThroughCharIndex; 
    } _topicNumbers;
}

@property int pageKind;
@property struct _NSRange { unsigned int x1; unsigned int x2; } footnoteAutoNumberRange;
@property struct _NSRange { unsigned int x1; unsigned int x2; } footnoteLayoutRange;
@property(retain) NSDictionary * anchoredAttachmentPositions;
@property(retain) <TSDHint> * firstChildHint;
@property(retain) <TSDHint> * lastChildHint;
@property /* Warning: unhandled struct encoding: '{TSWPTopicNumberHints={map<const TSWPListStyle *' */ struct * topicNumbers; /* unknown property attribute:  true> >=L}}}II} */
@property(readonly) unsigned int startCharIndex;
@property(readonly) struct _NSRange { unsigned int x1; unsigned int x2; } range;
@property(readonly) unsigned int startAnchoredCharIndex;
@property(readonly) struct _NSRange { unsigned int x1; unsigned int x2; } anchoredRange;
@property(readonly) unsigned int nextWidowPullsDownFromCharIndex;


- (id)firstColumn;
- (id)lastColumn;
- (struct vector<TSWPTargetHint, std::__1::allocator<TSWPTargetHint> > { struct { /* ? */ } *x1; struct { /* ? */ } *x2; struct __compressed_pair<TSWPTargetHint *, std::__1::allocator<TSWPTargetHint> > { struct { /* ? */ } *x_3_1_1; } x3; })hints;
- (void)setHints:(const struct vector<TSWPTargetHint, std::__1::allocator<TSWPTargetHint> > { struct { /* ? */ } *x1; struct { /* ? */ } *x2; struct __compressed_pair<TSWPTargetHint *, std::__1::allocator<TSWPTargetHint> > { struct { /* ? */ } *x_3_1_1; } x3; }*)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
- (struct _NSRange { unsigned int x1; unsigned int x2; })range;
- (void)dealloc;
- (id)init;
- (void)setTopicNumbers:(struct TSWPTopicNumberHints { struct map<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> >, std::__1::less<const TSWPListStyle *>, std::__1::allocator<std::__1::pair<const TSWPListStyle *const, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > > > > { struct __tree<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::__map_value_compare<const TSWPListStyle *, std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::less<const TSWPListStyle *>, true>, std::__1::allocator<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > > > > { struct __tree_node<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, void *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<const TSWPListStyle *, std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::less<const TSWPListStyle *>, true> > { unsigned long x_3_3_1; } x_1_2_3; } x_1_1_1; } x1; unsigned int x2; unsigned int x3; }*)arg1;
- (BOOL)syncsWithEndOfPageHint:(id)arg1 storage:(id)arg2;
- (void)setFootnoteAutoNumberRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })footnoteAutoNumberRange;
- (void)setAnchoredAttachmentPositions:(id)arg1;
- (void)setLastChildHint:(id)arg1;
- (void)setFirstChildHint:(id)arg1;
- (struct TSWPTopicNumberHints { struct map<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> >, std::__1::less<const TSWPListStyle *>, std::__1::allocator<std::__1::pair<const TSWPListStyle *const, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > > > > { struct __tree<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::__map_value_compare<const TSWPListStyle *, std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::less<const TSWPListStyle *>, true>, std::__1::allocator<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > > > > { struct __tree_node<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, void *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<const TSWPListStyle *, std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::less<const TSWPListStyle *>, true> > { unsigned long x_3_3_1; } x_1_2_3; } x_1_1_1; } x1; unsigned int x2; unsigned int x3; }*)topicNumbers;
- (void)setFootnoteLayoutRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })footnoteLayoutRange;
- (void)setPageKind:(int)arg1;
- (id)anchoredAttachmentPositions;
- (void)offsetStartCharIndexBy:(int)arg1 charIndex:(unsigned int)arg2;
- (int)pageKind;
- (struct { struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_1_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_1_1_2; } x1; struct _NSRange { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; unsigned int x3; struct _NSRange { unsigned int x_4_1_1; unsigned int x_4_1_2; } x4; unsigned int x5; }*)lastHint;
- (struct { struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_1_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_1_1_2; } x1; struct _NSRange { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; unsigned int x3; struct _NSRange { unsigned int x_4_1_1; unsigned int x_4_1_2; } x4; unsigned int x5; }*)firstHint;
- (void)saveToArchive:(struct PageHintArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct RepeatedPtrField<TP::TargetHintArchive> { void **x_3_1_1; int x_3_1_2; int x_3_1_3; int x_3_1_4; } x3; struct Range {} *x4; struct Range {} *x5; struct Reference {} *x6; int x7; unsigned int x8; struct Reference {} *x9; struct RepeatedPtrField<TP::AnchorPosArchive> { void **x_10_1_1; int x_10_1_2; int x_10_1_3; int x_10_1_4; } x10; struct TopicNumberHintsArchive {} *x11; unsigned int x12; int x13; unsigned int x14[1]; }*)arg1 archiver:(id)arg2 context:(id)arg3;
- (unsigned int)nextWidowPullsDownFromCharIndex;
- (unsigned int)startAnchoredCharIndex;
- (unsigned int)startCharIndex;
- (void)trimToCharIndex:(unsigned int)arg1 inTarget:(id)arg2 removeAutoNumberFootnoteCount:(unsigned int)arg3;
- (struct _NSRange { unsigned int x1; unsigned int x2; })anchoredRange;
- (id)copyForArchiving;
- (id)lastChildHint;
- (id)firstChildHint;
- (id)initWithArchive:(const struct PageHintArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct RepeatedPtrField<TP::TargetHintArchive> { void **x_3_1_1; int x_3_1_2; int x_3_1_3; int x_3_1_4; } x3; struct Range {} *x4; struct Range {} *x5; struct Reference {} *x6; int x7; unsigned int x8; struct Reference {} *x9; struct RepeatedPtrField<TP::AnchorPosArchive> { void **x_10_1_1; int x_10_1_2; int x_10_1_3; int x_10_1_4; } x10; struct TopicNumberHintsArchive {} *x11; unsigned int x12; int x13; unsigned int x14[1]; }*)arg1 unarchiver:(id)arg2;

@end
