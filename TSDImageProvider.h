/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSUFlushingManager, TSPData;

@interface TSDImageProvider : NSObject  {
    int mLoadState;
    TSPData *mImageData;
    int mRetainCount;
    int mOwnerCount;
    TSUFlushingManager *mFlushingManager;
    int mInterest;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (BOOL)isError;
- (BOOL)hasFlushableContent;
- (void)setFlushingManager:(id)arg1;
- (id)imageData;
- (struct CGSize { float x1; float x2; })naturalSize;
- (BOOL)isValid;
- (unsigned int)retainCount;
- (void)flush;
- (void)dealloc;
- (id)retain;
- (oneway void)release;
- (void)ownerAccess;
- (void)removeOwner;
- (void)addOwner;
- (void)removeInterest;
- (void)addInterest;
- (int)interest;
- (void)i_commonInit;
- (struct CGSize { float x1; float x2; })dpiAdjustedNaturalSize;
- (id)initWithImageData:(id)arg1;
- (void)drawImageInContext:(struct CGContext { }*)arg1 rect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;

@end
