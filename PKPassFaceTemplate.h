/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class PKPassFieldTemplate, NSMutableArray;

@interface PKPassFaceTemplate : NSObject  {
    float _barcodeVerticalInset;
    PKPassFieldTemplate *_defaultFieldTemplate;
    NSMutableArray *_bucketTemplates;
    struct CGSize { 
        float width; 
        float height; 
    } _barcodeMaxSize;
}

@property float barcodeBottomInset;
@property struct CGSize { float x1; float x2; } barcodeMaxSize;
@property(retain) PKPassFieldTemplate * defaultFieldTemplate;
@property(retain) NSMutableArray * bucketTemplates;


- (void)setBucketTemplates:(id)arg1;
- (id)bucketTemplates;
- (void)setDefaultFieldTemplate:(id)arg1;
- (id)templateForBucketAtIndex:(unsigned int)arg1;
- (float)barcodeBottomInset;
- (struct CGSize { float x1; float x2; })barcodeMaxSize;
- (void)addBucketTemplate:(id)arg1;
- (id)defaultFieldTemplate;
- (void)setBarcodeMaxSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setBarcodeBottomInset:(float)arg1;
- (void)dealloc;

@end
