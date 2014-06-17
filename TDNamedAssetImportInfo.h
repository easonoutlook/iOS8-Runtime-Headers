/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@class NSURL, NSString, NSDate;

@interface TDNamedAssetImportInfo : NSObject  {
    NSString *_name;
    int _nameIdentifier;
    NSURL *_fileURL;
    NSDate *_modificationDate;
    int _idiom;
    int _subtype;
    unsigned int _scaleFactor;
    int _renditionType;
    int _resizingMode;
    int _templateRenderingMode;
    int _sizeClassHorizontal;
    int _sizeClassVertical;
    unsigned int _memoryClass;
    unsigned int _graphicsClass;
    struct CGSize { 
        float width; 
        float height; 
    } _resizableSliceSize;
    struct { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _sliceInsets;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _alignmentRect;
}

@property(copy) NSString * name;
@property int nameIdentifier;
@property(copy) NSURL * fileURL;
@property(copy) NSDate * modificationDate;
@property int idiom;
@property int subtype;
@property unsigned int scaleFactor;
@property struct { float x1; float x2; float x3; float x4; } sliceInsets;
@property int renditionType;
@property int resizingMode;
@property struct CGSize { float x1; float x2; } resizableSliceSize;
@property BOOL isTemplate;
@property int templateRenderingMode;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } alignmentRect;
@property int sizeClassHorizontal;
@property int sizeClassVertical;
@property unsigned int memoryClass;
@property unsigned int graphicsClass;


- (id)modificationDate;
- (void)setModificationDate:(id)arg1;
- (unsigned int)graphicsClass;
- (unsigned int)memoryClass;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })alignmentRect;
- (BOOL)isTemplate;
- (void)setIsTemplate:(BOOL)arg1;
- (int)renditionType;
- (int)sizeClassVertical;
- (int)sizeClassHorizontal;
- (void)setResizableSliceSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setSliceInsets:(struct { float x1; float x2; float x3; float x4; })arg1;
- (void)setAlignmentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGSize { float x1; float x2; })resizableSliceSize;
- (struct { float x1; float x2; float x3; float x4; })sliceInsets;
- (void)setGraphicsClass:(unsigned int)arg1;
- (void)setMemoryClass:(unsigned int)arg1;
- (void)setNameIdentifier:(int)arg1;
- (int)nameIdentifier;
- (int)renditionSubtype;
- (void)setRenditionType:(int)arg1;
- (void)setFileURL:(id)arg1;
- (void)setScaleFactor:(unsigned int)arg1;
- (void)setResizingMode:(int)arg1;
- (void)setTemplateRenderingMode:(int)arg1;
- (void)setSizeClassVertical:(int)arg1;
- (void)setSizeClassHorizontal:(int)arg1;
- (id)fileURL;
- (void)setIdiom:(int)arg1;
- (unsigned int)scaleFactor;
- (int)idiom;
- (void)setSubtype:(int)arg1;
- (int)templateRenderingMode;
- (int)resizingMode;
- (int)subtype;
- (id)name;
- (void)setName:(id)arg1;
- (void)dealloc;
- (id)init;

@end
