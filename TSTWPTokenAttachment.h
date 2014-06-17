/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class TSTExpressionNode;

@interface TSTWPTokenAttachment : TSWPUIGraphicalAttachment  {
    TSTExpressionNode *mExpressionNode;
    BOOL mActive;
    BOOL mSelected;
    BOOL mNeverShowsMenu;
    struct CGSize { 
        float width; 
        float height; 
    } mTextSize;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } mMenuRect;
    struct CGImage { } *mCachedImage;
    float mCachedImageScreenScale;
    BOOL mInInvalidate;
}

@property(retain) TSTExpressionNode * expressionNode;
@property(getter=isActive) BOOL active;
@property(getter=isSelected) BOOL selected;
@property(getter=neverShowsMenu) BOOL neverShowsMenu;
@property struct CGImage { }* cachedImage;
@property float cachedImageScreenScale;


- (struct CGImage { }*)cachedImage;
- (id).cxx_construct;
- (void)setActive:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (BOOL)isSelected;
- (BOOL)isActive;
- (void)invalidate;
- (id)description;
- (void)dealloc;
- (void)setCachedImageScreenScale:(float)arg1;
- (float)cachedImageScreenScale;
- (void)setNeverShowsMenu:(BOOL)arg1;
- (BOOL)neverShowsMenu;
- (void)requestRedraw;
- (id)copyIntoContext:(id)arg1;
- (void)setCachedImage:(struct CGImage { }*)arg1;
- (void)setExpressionNode:(id)arg1;
- (id)formulaPlainText;
- (id)detokenizedText;
- (id)copyIntoContext:(id)arg1 bakeModes:(BOOL)arg2;
- (id)initWithContext:(id)arg1 expressionNode:(id)arg2;
- (id)expressionNode;
- (id)initFromArchive:(const struct TokenAttachmentArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct UIGraphicalAttachment {} *x3; struct Reference {} *x4; int x5; unsigned int x6[1]; }*)arg1 unarchiver:(id)arg2;
- (void)saveToArchive:(struct TokenAttachmentArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct UIGraphicalAttachment {} *x3; struct Reference {} *x4; int x5; unsigned int x6[1]; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;

@end
