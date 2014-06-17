/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPTOCRep : TSWPShapeRep  {
}


- (BOOL)isDraggable;
- (BOOL)isSelectable;
- (id)i_paragraphStyleAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)invalidateSubselection;
- (id)paragraphStylesBetweenCharIndex:(unsigned int)arg1 andCharIndex:(unsigned int)arg2;
- (unsigned int)charIndexAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)p_subSelectionLayers;
- (id)p_selectedParagraphStyles;
- (unsigned int)i_indexOfHitTOCEntryAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)tocInfo;
- (BOOL)canMakePathEditable;
- (BOOL)shouldCreateKnobs;
- (BOOL)handleSingleTapAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)hitRep:(struct CGPoint { float x1; float x2; })arg1;
- (void)addAdditionalChildLayersToArray:(id)arg1;
- (BOOL)shouldShowKnobs;

@end
