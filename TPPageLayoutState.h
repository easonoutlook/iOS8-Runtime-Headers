/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TPPageIndexPath, TSWPStorage, TPSection;

@interface TPPageLayoutState : NSObject  {
    TPPageIndexPath *_pageIndexPath;
    unsigned int _documentPageIndex;
    TSWPStorage *_bodyStorage;
    void *_bodyLayoutState;
    unsigned int _bodyCharIndex;
    unsigned int _footnoteIndex;
    BOOL _doingLayout;
    BOOL _onLastSection;
    unsigned int _lastLaidOutSectionIndex;
}

@property(readonly) TPPageIndexPath * pageIndexPath;
@property(readonly) unsigned int sectionIndex;
@property(readonly) unsigned int pageIndex;
@property(readonly) unsigned int documentPageIndex;
@property(readonly) unsigned int lastLaidOutDocumentPageIndex;
@property(readonly) unsigned int lastLaidOutSectionIndex;
@property void* bodyLayoutState;
@property unsigned int bodyCharIndex;
@property unsigned int footnoteIndex;
@property BOOL doingLayout;
@property(readonly) TPSection * section;
@property(readonly) struct _NSRange { unsigned int x1; unsigned int x2; } sectionCharRange;
@property(readonly) BOOL onLastSection;
@property(readonly) BOOL isLayoutComplete;


- (void)setSectionIndex:(unsigned int)arg1;
- (unsigned int)sectionIndex;
- (void)setPageIndex:(unsigned int)arg1;
- (unsigned int)pageIndex;
- (id)section;
- (void)dealloc;
- (id)init;
- (void)restartLayoutFromFirstPage;
- (unsigned int)lastLaidOutSectionIndex;
- (void)advanceSectionIndex;
- (BOOL)onLastSection;
- (struct _NSRange { unsigned int x1; unsigned int x2; })sectionCharRange;
- (unsigned int)footnoteIndex;
- (id)pageIndexPath;
- (void)advancePageIndex;
- (void)setDoingLayout:(BOOL)arg1;
- (unsigned int)bodyCharIndex;
- (void)backUpPageIndex;
- (void)setBodyLayoutState:(void*)arg1;
- (void*)bodyLayoutState;
- (void)restartLayoutFromPageIndexPath:(id)arg1 documentPageIndex:(unsigned int)arg2;
- (unsigned int)lastLaidOutDocumentPageIndex;
- (void)setDocumentPageIndex:(unsigned int)arg1;
- (BOOL)doingLayout;
- (void)setFootnoteIndex:(unsigned int)arg1;
- (void)setBodyCharIndex:(unsigned int)arg1;
- (BOOL)isLayoutCompleteUpToDocumentPageIndex:(unsigned int)arg1;
- (BOOL)isLayoutCompleteThroughDocumentPageIndex:(unsigned int)arg1;
- (unsigned int)documentPageIndex;
- (id)initWithBodyStorage:(id)arg1;
- (BOOL)isLayoutComplete;

@end
