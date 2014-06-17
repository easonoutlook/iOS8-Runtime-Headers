/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIProductPageTableExpandableHeaderView, NSDateFormatter, SKUIClientContext, SKUIColorScheme, NSMutableIndexSet, SKUILayoutCache, NSArray;

@interface SKUIProductPageTableUpdateHistorySection : SKUIProductPageTableSection  {
    SKUIClientContext *_clientContext;
    NSMutableIndexSet *_expandedIndexSet;
    int _firstStringIndex;
    SKUIProductPageTableExpandableHeaderView *_headerView;
    NSArray *_releaseNotes;
    SKUILayoutCache *_textLayoutCache;
    SKUIColorScheme *_colorScheme;
    NSDateFormatter *_dateFormatter;
}

@property int firstStringIndex;
@property(copy) NSArray * releaseNotes;
@property(retain) SKUILayoutCache * textLayoutCache;
@property(retain) SKUIColorScheme * colorScheme;


- (int)firstStringIndex;
- (id)selectionActionForTableView:(id)arg1 indexPath:(id)arg2;
- (void)_reloadHeaderView;
- (void)setReleaseNotes:(id)arg1;
- (void)setFirstStringIndex:(int)arg1;
- (id)releaseNotes;
- (void)setTextLayoutCache:(id)arg1;
- (id)textLayoutCache;
- (id)headerViewForTableView:(id)arg1;
- (id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2;
- (int)numberOfRowsInSection;
- (float)heightForCellInTableView:(id)arg1 indexPath:(id)arg2;
- (void)setColorScheme:(id)arg1;
- (id)colorScheme;
- (id)initWithClientContext:(id)arg1;
- (void).cxx_destruct;
- (void)setExpanded:(BOOL)arg1;

@end
