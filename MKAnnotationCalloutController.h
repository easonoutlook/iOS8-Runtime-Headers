/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class <MKAnnotationCalloutControllerDelegate>, MKAnnotationView;

@interface MKAnnotationCalloutController : NSObject  {
    <MKAnnotationCalloutControllerDelegate> *_delegate;
    MKAnnotationView *_annotationView;
    unsigned int _mapDisplayStyle;
}

@property Class calloutViewClass;
@property <MKAnnotationCalloutControllerDelegate> * delegate;
@property(retain) MKAnnotationView * annotationView;
@property unsigned int mapDisplayStyle;


- (void)setMapDisplayStyle:(unsigned int)arg1;
- (unsigned int)mapDisplayStyle;
- (void)_setTitle:(id)arg1;
- (void).cxx_destruct;
- (id)delegate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)hideCalloutAnimated:(BOOL)arg1;
- (void)showCalloutForAnnotationView:(id)arg1 animated:(BOOL)arg2 scrollToFit:(BOOL)arg3 avoid:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_visibleCenteringRectInView:(id)arg1;
- (void)_removeAccessoryTargets;
- (BOOL)_isShowingCallout;
- (float)defaultCalloutHeight;
- (void)_addAccessoryTargetForView:(id)arg1;
- (void)_setSubtitle:(id)arg1 animated:(BOOL)arg2;
- (void)_setDetailAccessoryView:(id)arg1 animated:(BOOL)arg2;
- (void)_setRightAccessoryView:(id)arg1 animated:(BOOL)arg2;
- (void)_setLeftAccessoryView:(id)arg1 animated:(BOOL)arg2;
- (id)_subtitle;
- (void)_removeAccessoryTargetForView:(id)arg1;
- (id)annotationView;
- (void)_calloutAccessoryControlTapped:(id)arg1;
- (void)_updateCallout;
- (void)_updateCalloutAnimated:(BOOL)arg1;
- (void)setAnnotationView:(id)arg1;
- (BOOL)isCalloutExpanded;
- (BOOL)calloutContainsPoint:(struct CGPoint { float x1; float x2; })arg1;
- (Class)calloutViewClass;
- (void)setCalloutViewClass:(Class)arg1;

@end
