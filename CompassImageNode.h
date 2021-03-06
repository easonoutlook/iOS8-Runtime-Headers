/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CompassUI.framework/CompassUI
 */

@class CompassImageNode, NSString;

@interface CompassImageNode : NSObject  {
    CompassImageNode *_leftChild;
    CompassImageNode *_rightChild;
    NSString *_imageKey;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _rect;
}

@property(retain) CompassImageNode * leftChild;
@property(retain) CompassImageNode * rightChild;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } rect;
@property(copy) NSString * imageKey;


- (id)imageKey;
- (void)setRightChild:(id)arg1;
- (id)rightChild;
- (void)setLeftChild:(id)arg1;
- (id)leftChild;
- (void)setImageKey:(id)arg1;
- (id)insertImageWithSize:(struct CGSize { float x1; float x2; })arg1 key:(id)arg2;
- (id).cxx_construct;
- (void)setRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rect;
- (void)dealloc;

@end
