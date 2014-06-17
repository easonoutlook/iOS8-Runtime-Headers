/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUMapAnnotationAnimationInfo : NSObject  {
    BOOL _remove;
    id _annotation;
    id _destinationAnnotation;
    int _fadeType;
    id _annotationForCountSwap;
    int _reason;
    struct { 
        double latitude; 
        double longitude; 
    } _sourceCoordinate;
    struct { 
        double latitude; 
        double longitude; 
    } _destinationCoordinate;
}

@property(retain,readonly) id annotation;
@property(retain,readonly) id destinationAnnotation;
@property(readonly) struct { double x1; double x2; } sourceCoordinate;
@property(readonly) struct { double x1; double x2; } destinationCoordinate;
@property(readonly) int fadeType;
@property(readonly) BOOL remove;
@property(retain,readonly) id annotationForCountSwap;
@property(readonly) int reason;


- (id)annotation;
- (void).cxx_destruct;
- (int)reason;
- (BOOL)remove;
- (id)annotationForCountSwap;
- (int)fadeType;
- (struct { double x1; double x2; })destinationCoordinate;
- (struct { double x1; double x2; })sourceCoordinate;
- (id)destinationAnnotation;
- (id)initWithAnnotation:(id)arg1 destinationAnnotation:(id)arg2 sourceCoordinate:(struct { double x1; double x2; })arg3 destinationCoordinate:(struct { double x1; double x2; })arg4 fadeType:(int)arg5 remove:(BOOL)arg6 annotationForCountSwap:(id)arg7 reason:(int)arg8;

@end
