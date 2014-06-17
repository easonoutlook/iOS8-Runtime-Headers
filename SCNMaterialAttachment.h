/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@class NSDictionary;

@interface SCNMaterialAttachment : NSObject  {
    unsigned int glID;
    unsigned int target;
    void *context;
    struct CGSize { 
        float width; 
        float height; 
    } size;
    NSDictionary *options;
}

@property unsigned int glID;
@property unsigned int target;
@property void* context;
@property struct CGSize { float x1; float x2; } size;
@property(copy) NSDictionary * options;


- (void)setOptions:(id)arg1;
- (void)setContext:(void*)arg1;
- (void)setSize:(struct CGSize { float x1; float x2; })arg1;
- (unsigned int)target;
- (void)setTarget:(unsigned int)arg1;
- (struct CGSize { float x1; float x2; })size;
- (void)setGlID:(unsigned int)arg1;
- (unsigned int)glID;
- (id)options;
- (void*)context;
- (void)dealloc;

@end