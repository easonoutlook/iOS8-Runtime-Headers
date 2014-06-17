/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSArray, <TSKAnnotation>, TSCHSearchSelection, TSCHChartDrawableInfo;

@interface TSCHSearchReference : NSObject <TSKSearchReference> {
    TSCHSearchSelection *mSelection;
    BOOL _autohideHighlight;
    BOOL _pulseHighlight;
    NSArray *_findHighlights;
    <TSKAnnotation> *annotation;
    struct CGPoint { 
        float x; 
        float y; 
    } searchReferencePoint;
}

@property(readonly) TSCHChartDrawableInfo * chartInfo;
@property(readonly) TSCHSearchSelection * selection;
@property struct CGPoint { float x1; float x2; } searchReferencePoint;
@property(retain) NSArray * findHighlights;
@property BOOL pulseHighlight;
@property BOOL autohideHighlight;
@property(retain) <TSKAnnotation> * annotation;


- (id)initWithSelection:(id)arg1;
- (void)setAnnotation:(id)arg1;
- (id)annotation;
- (id)model;
- (id)selection;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (void)setAutohideHighlight:(BOOL)arg1;
- (BOOL)autohideHighlight;
- (void)setPulseHighlight:(BOOL)arg1;
- (BOOL)pulseHighlight;
- (id)findHighlights;
- (BOOL)isReplaceable;
- (id)searchReferenceEnd;
- (id)searchReferenceStart;
- (id)searchReferenceForReplacingWithString:(id)arg1 options:(unsigned int)arg2 authorCreatedWithCommand:(id*)arg3;
- (id)commandForReplacingWithString:(id)arg1 options:(unsigned int)arg2;
- (struct CGPoint { float x1; float x2; })searchReferencePoint;
- (void)setSearchReferencePoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setFindHighlights:(id)arg1;
- (id)chartInfo;

@end
