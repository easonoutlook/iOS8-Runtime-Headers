/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class UIView, NSString, NSObject<TSSPreset>, TSKDocumentRoot;

@interface TSDSwatchRenderingOperation : NSOperation  {
    UIView *mView;
    NSObject<TSSPreset> *mPreset;
    struct CGSize { 
        float width; 
        float height; 
    } mImageSize;
    float mImageScale;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } mSwatchFrame;
    TSKDocumentRoot *mDocumentRoot;
    struct CGImage { } *mDeliveredImage;
    unsigned int mInsertPopoverPageType;
    unsigned int mInsertPopoverPageNumber;
    NSString *mIdentifier;
}

@property(retain) UIView * view;
@property(readonly) NSObject<TSSPreset> * preset;
@property(readonly) struct CGSize { float x1; float x2; } imageSize;
@property(readonly) float imageScale;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } swatchFrame;
@property(readonly) TSKDocumentRoot * documentRoot;
@property unsigned int insertPopoverPageType;
@property unsigned int insertPopoverPageNumber;
@property(copy) NSString * identifier;
@property(readonly) struct CGImage { }* deliveredImage;


- (float)imageScale;
- (id)preset;
- (id)documentRoot;
- (void)main;
- (void)setIdentifier:(id)arg1;
- (struct CGSize { float x1; float x2; })imageSize;
- (void)setView:(id)arg1;
- (id)identifier;
- (id)view;
- (void)dealloc;
- (void)setInsertPopoverPageNumber:(unsigned int)arg1;
- (unsigned int)insertPopoverPageNumber;
- (void)setInsertPopoverPageType:(unsigned int)arg1;
- (unsigned int)insertPopoverPageType;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })swatchFrame;
- (struct CGImage { }*)deliveredImage;
- (void)deliverCGImage:(struct CGImage { }*)arg1;
- (id)initWithPreset:(id)arg1 imageSize:(struct CGSize { float x1; float x2; })arg2 imageScale:(float)arg3 swatchFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4 documentRoot:(id)arg5;
- (void)doWorkWithReadLock;
- (void)p_deliverResultOnMainThread:(id)arg1;
- (struct CGImage { }*)p_newSwatchPressedStateBackgroundFromCGImage:(struct CGImage { }*)arg1;
- (void)p_animateSwatchIn;
- (BOOL)needsPressedStateBackground;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })swatchEdgeInsets;

@end
