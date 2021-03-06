/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSMutableDictionary, TSCH3DTextureAtlas;

@interface TSCH3DLabelResources : TSCH3DStringIndexedResources  {
    NSMutableDictionary *mCache;
    TSCH3DTextureAtlas *mAtlas;
}

@property(readonly) TSCH3DTextureAtlas * atlas;


- (id)atlas;
- (id)initWithSize:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg1;
- (void)dealloc;
- (id)prepareTextureAtlasWithSamples:(float)arg1;
- (id)paragraphStyleForKey:(unsigned int)arg1 defaultStyle:(id)arg2;
- (id)resourceAtIndex:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg1 string:(id)arg2 bitmapContextInfo:(id)arg3 labelWidth:(float)arg4;
- (void)setParagraphStyle:(id)arg1 forKey:(unsigned int)arg2 atIndex:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg3;
- (void)setParagraphStyle:(id)arg1 atIndex:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg2;

@end
