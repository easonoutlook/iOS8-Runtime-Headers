/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@class UIImage, NSString, NSFileWrapper, NSData, UITextAttachmentView, UIView;

@interface NSTextAttachment : NSObject <NSTextAttachmentContainer, NSCoding> {
    NSData *_data;
    NSString *_uti;
    NSString *_cacheKey;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _bounds;
    NSFileWrapper *_fileWrapper;
    UIImage *_image;
    UITextAttachmentView *_wrapperView;
}

@property(retain) NSData * contents;
@property(retain) NSString * fileType;
@property(retain) NSFileWrapper * fileWrapper;
@property(retain) UIImage * image;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } bounds;
@property(retain) UIView * contentView;

+ (void)initialize;
+ (id)imageCache;

- (id)initWithFileWrapper:(id)arg1;
- (id)fileWrapper;
- (void)setFileWrapper:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 glyphPosition:(struct CGPoint { float x1; float x2; })arg3 characterIndex:(unsigned int)arg4;
- (id)imageForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 textContainer:(id)arg2 characterIndex:(unsigned int)arg3;
- (id)attachmentCell;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })drawingBounds;
- (void)setDrawingBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithData:(id)arg1 ofType:(id)arg2;
- (void)setFileType:(id)arg1;
- (id)fileType;
- (void)setContentView:(id)arg1;
- (id)contentView;
- (id)image;
- (id)_image;
- (void)setImage:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)contents;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (void)dealloc;
- (void)setContents:(id)arg1;
- (id)_cacheKey;

@end
