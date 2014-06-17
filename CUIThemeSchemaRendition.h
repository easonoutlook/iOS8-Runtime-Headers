/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@class CUIPSDGradient, NSDictionary;

@interface CUIThemeSchemaRendition : CUIThemeRendition  {
    NSDictionary *cuiInfo;
    unsigned long _nimages;
    struct CGImage {} *_image[9];
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _layoutRects[9];
    struct CGSize { 
        float width; 
        float height; 
    } _intrinsicSize;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _elementRect;
    int _columnSlices;
    int _rowSlices;
    struct { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _contentInsets;
    CUIPSDGradient *_gradient;
}

@property(readonly) unsigned long numberOfSlices;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }* sliceRects;
@property(readonly) CUIPSDGradient * gradient;


- (unsigned short)previousState;
- (unsigned short)presentationState;
- (unsigned short)look;
- (id)stringForValue:(unsigned short)arg1;
- (id)scaleLocalizedString;
- (id)lookLocalizedString;
- (id)drawingLayerLocalizedString;
- (id)dimension2LocalizedString;
- (id)dimension1LocalizedString;
- (id)presentationStateLocalizedString;
- (id)sizeLocalizedString;
- (id)previousValueLocalizedString;
- (id)valueLocalizedString;
- (id)directionLocalizedString;
- (id)previousStateLocalizedString;
- (id)stateLocalizedString;
- (id)typeLocalizedString;
- (struct CGPoint { float x1; float x2; })renditionCoordinatesForPartFeatures:(int)arg1;
- (int)rowSlices;
- (int)columnSlices;
- (id)defaultTemplateName;
- (id)coreUIOptions;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })edgeInsets:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })alignmentRectangle;
- (id)initWithCoreUIOptions:(id)arg1 forKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)sliceRects;
- (unsigned short)previousValue;
- (unsigned short)keyScale;
- (unsigned short)drawingLayer;
- (unsigned short)dimension2;
- (unsigned short)dimension1;
- (id)referenceImage;
- (id)initWithCoreUIOptions:(id)arg1 forKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg2 artworkStatus:(int)arg3;
- (unsigned long)numberOfSlices;
- (id)slices;
- (id)gradient;
- (struct { float x1; float x2; float x3; float x4; })contentInsets;
- (id)stringForState:(unsigned short)arg1;
- (id).cxx_construct;
- (unsigned short)direction;
- (unsigned short)value;
- (float)scale;
- (unsigned short)identifier;
- (unsigned short)state;
- (unsigned short)size;
- (id)description;
- (unsigned short)layer;
- (void)dealloc;

@end