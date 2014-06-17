/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class MFPGraphicsState;

@interface MFPGraphicsContainer : NSObject  {
    MFPGraphicsState *mParentGraphicsState;
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    } mContainerTransform;
}


- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })containerTransform;
- (id)parentGraphicsState;
- (id)initWithParentGraphicsState:(id)arg1 containerTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg2;
- (id).cxx_construct;
- (void)dealloc;

@end
