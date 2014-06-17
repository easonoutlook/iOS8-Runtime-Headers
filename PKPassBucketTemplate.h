/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class PKPassFieldTemplate, NSMutableArray;

@interface PKPassBucketTemplate : NSObject  {
    BOOL _sitsOnStripImage;
    int _bucketAlignment;
    float _minFieldPadding;
    PKPassFieldTemplate *_defaultFieldTemplate;
    unsigned int _maxFields;
    NSMutableArray *_fieldTemplates;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _bucketRect;
}

@property int bucketAlignment;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } bucketRect;
@property float minFieldPadding;
@property(retain) PKPassFieldTemplate * defaultFieldTemplate;
@property unsigned int maxFields;
@property BOOL sitsOnStripImage;
@property(retain) NSMutableArray * fieldTemplates;


- (void)setSitsOnStripImage:(BOOL)arg1;
- (BOOL)sitsOnStripImage;
- (void)setFieldTemplates:(id)arg1;
- (id)fieldTemplates;
- (float)minFieldPadding;
- (int)bucketAlignment;
- (id)templateForFieldAtIndex:(unsigned int)arg1;
- (unsigned int)maxFields;
- (void)setDefaultFieldTemplate:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bucketRect;
- (void)addFieldTemplate:(id)arg1;
- (void)setMaxFields:(unsigned int)arg1;
- (void)setMinFieldPadding:(float)arg1;
- (void)setBucketRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setBucketAlignment:(int)arg1;
- (id)defaultFieldTemplate;
- (void)dealloc;

@end
