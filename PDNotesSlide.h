/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class PDNotesMaster;

@interface PDNotesSlide : PDSlideChild  {
    PDNotesMaster *mNotesMaster;
}


- (id)masterGraphicForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3;
- (id)parentShapePropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3;
- (id)parentTextBodyPropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3;
- (id)parentTextStyleForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 defaultTextListStyle:(id)arg3 overrideIndex:(BOOL)arg4;
- (void)setNotesMaster:(id)arg1;
- (id)masterPlaceholderOfType:(int)arg1;
- (id)notesMaster;
- (void)doneWithContent;
- (id)parentSlideBase;
- (void)dealloc;
- (id)init;

@end
