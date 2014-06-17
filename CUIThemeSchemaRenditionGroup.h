/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@class CUIRenditionKey, NSArray;

@interface CUIThemeSchemaRenditionGroup : NSObject  {
    CUIRenditionKey *_baseKey;
    NSArray *_renditions;
    struct { char *x1; char *x2; struct _renditionkeytoken { unsigned short x_3_1_1; unsigned short x_3_1_2; } x3[5]; int x4; int x5; struct { char *x_6_1_1; char *x_6_1_2; int x_6_1_3; unsigned int x_6_1_4; } x6[12]; } *_part;
}

@property(retain) NSArray * renditions;

+ (id)renditionGroupsForRenditions:(id)arg1 part:(struct { char *x1; char *x2; struct _renditionkeytoken { unsigned short x_3_1_1; unsigned short x_3_1_2; } x3[5]; int x4; int x5; struct { char *x_6_1_1; char *x_6_1_2; int x_6_1_3; unsigned int x_6_1_4; } x6[12]; }*)arg2;

- (id)mutablePSDImageRefColumnStyle;
- (id)mutablePSDImageRef;
- (void)addValueOrDim1LayersToPSDLayers:(id)arg1 forPresentationState:(unsigned int)arg2 state:(unsigned int)arg3 drawingLayer:(unsigned int)arg4;
- (void)addStatesAndDrawingLayersToPSDLayers:(id)arg1 forPresentationState:(unsigned int)arg2;
- (id)_layerNameForState:(int)arg1;
- (id)_layerNameForDrawingLayer:(int)arg1;
- (id)_renditionsSortedIntoLayers;
- (id)schemaLayersAndLayerGroups;
- (void)addLayoutMetricsToPSDImageRef:(id)arg1 withRendition:(id)arg2;
- (id)themeSchemaLayers;
- (int)partFeatures;
- (void)setRenditions:(id)arg1;
- (id)renditions;
- (id)initWithRenditions:(id)arg1 part:(struct { char *x1; char *x2; struct _renditionkeytoken { unsigned short x_3_1_1; unsigned short x_3_1_2; } x3[5]; int x4; int x5; struct { char *x_6_1_1; char *x_6_1_2; int x_6_1_3; unsigned int x_6_1_4; } x6[12]; }*)arg2;
- (id)baseKey;
- (id)description;
- (void)dealloc;

@end