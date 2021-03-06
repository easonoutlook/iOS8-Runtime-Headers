/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray;

@interface OADPath : NSObject  {
    struct CGSize { 
        float width; 
        float height; 
    } mSize;
    NSMutableArray *mElements;
    int mFillMode;
    BOOL mStroked;
}


- (int)fillMode;
- (void)setStroked:(BOOL)arg1;
- (BOOL)stroked;
- (id)elementAtIndex:(unsigned int)arg1;
- (unsigned int)elementCount;
- (void)addElement:(id)arg1;
- (id).cxx_construct;
- (void)setSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })size;
- (void)setFillMode:(int)arg1;
- (void)dealloc;
- (id)init;

@end
