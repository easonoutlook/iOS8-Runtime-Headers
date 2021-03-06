/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class PDPresentation, OAVReadState, <TCCancelDelegate>, OAXDrawingState, CXNamespace, NSMutableDictionary, OAXTableStyleCache;

@interface PXPresentationState : OCXReadState  {
    NSMutableDictionary *mModelObjects;
    OAXDrawingState *mOfficeArtState;
    OAVReadState *mOAVState;
    OAXTableStyleCache *mTableStyleCache;
    NSMutableDictionary *mSlideURLToIndexMap;
    PDPresentation *mTgtPresentation;
    <TCCancelDelegate> *mCancel;
    CXNamespace *_PXPresentationMLNamespace;
}

@property(retain) <TCCancelDelegate> * cancelDelegate;
@property(retain) CXNamespace * PXPresentationMLNamespace;


- (void)setTgtPresentation:(id)arg1;
- (void)setSlideIndex:(int)arg1 forSlideURL:(id)arg2;
- (void)resetOfficeArtState;
- (void)setModelObject:(id)arg1 forLocation:(id)arg2;
- (void)setPXPresentationMLNamespace:(id)arg1;
- (int)slideIndexForSlideURL:(id)arg1;
- (id)modelObjectForLocation:(id)arg1;
- (id)PXPresentationMLNamespace;
- (id)tgtPresentation;
- (id)cancelDelegate;
- (void)setCancelDelegate:(id)arg1;
- (id)officeArtState;
- (id)oavState;
- (id)tableStyleCache;
- (void)setupNSForXMLFormat:(int)arg1;
- (BOOL)isCancelled;
- (void)dealloc;
- (id)init;

@end
