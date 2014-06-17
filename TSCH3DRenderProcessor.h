/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DRenderProcessor : NSObject  {
}

+ (id)processor;

- (void)pushState;
- (void)popState;
- (id)effects;
- (BOOL)canRenderPrefilteredLines;
- (int)texture:(id)arg1;
- (void)texcoords:(id)arg1;
- (void)normals:(id)arg1;
- (void)setRenderHints:(const struct RenderHints { struct TextureSizeHint { int x_1_1_1; struct tvec2<int> { union { int x_1_3_1; int x_1_3_2; int x_1_3_3; } x_2_2_1; union { int x_2_3_1; int x_2_3_2; int x_2_3_3; } x_2_2_2; } x_1_1_2; } x1; }*)arg1;
- (struct RenderHints { struct TextureSizeHint { int x_1_1_1; struct tvec2<int> { union { int x_1_3_1; int x_1_3_2; int x_1_3_3; } x_2_2_1; union { int x_2_3_1; int x_2_3_2; int x_2_3_3; } x_2_2_2; } x_1_1_2; } x1; })renderHints;
- (void)setRenderState:(const struct RenderState { boolx1; int x2; boolx3; boolx4; boolx5; boolx6; boolx7; float x8; float x9; struct EnableClipDistances { struct array<signed char, 8> { BOOL x_1_2_1[8]; } x_10_1_1; } x10; }*)arg1;
- (struct RenderState { boolx1; int x2; boolx3; boolx4; boolx5; boolx6; boolx7; float x8; float x9; struct EnableClipDistances { struct array<signed char, 8> { BOOL x_1_2_1[8]; } x_10_1_1; } x10; })renderState;
- (void)popRenderState;
- (void)pushRenderState;
- (void)updateRenderState;
- (void)geometry:(id)arg1;

@end
