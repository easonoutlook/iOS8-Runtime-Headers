/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSDMutableStroke;

@interface TSDMediaLayout : TSDStyledLayout  {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } mCachedAlignmentFrame;
    struct { 
        unsigned int alignmentFrame : 1; 
    } mMediaInvalidFlags;
    TSDMutableStroke *mDynamicStroke;
    BOOL mShouldRenderFrameStroke;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } mBoundsForStandardKnobs;
}

@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } boundsForStandardKnobs;
@property BOOL shouldRenderFrameStroke;


- (id)mediaInfo;
- (void)setGeometry:(id)arg1;
- (id)stroke;
- (id)initWithInfo:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })computeAlignmentFrameInRoot:(BOOL)arg1;
- (void)setBoundsForStandardKnobs:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setShouldRenderFrameStroke:(BOOL)arg1;
- (BOOL)shouldRenderFrameStroke;
- (void)invalidateAlignmentFrame;
- (void)dynamicStrokeWidthChangeDidEnd;
- (void)dynamicStrokeWidthUpdateToValue:(float)arg1;
- (void)dynamicStrokeWidthChangeDidBegin;
- (BOOL)isStrokeBeingManipulated;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })alignmentFrameInRoot;
- (BOOL)supportsRotation;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })alignmentFrame;
- (void)processChangedProperty:(int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundsForStandardKnobs;

@end
