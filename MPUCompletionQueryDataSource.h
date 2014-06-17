/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@class <MPUCompletionQueryDataSourceDelegate>, NSMutableDictionary, NSMutableSet;

@interface MPUCompletionQueryDataSource : MPUQueryDataSource  {
    NSMutableDictionary *_tokens;
    NSMutableDictionary *_completions;
    NSMutableSet *_overlayedSectionEntityPIDs;
    NSMutableDictionary *_statuses;
    NSMutableDictionary *_variants;
    BOOL _shouldShowCompletions;
    BOOL _shouldAutomaticallyLoadCompletions;
    <MPUCompletionQueryDataSourceDelegate> *_completionDelegate;
}

@property BOOL shouldShowCompletions;
@property BOOL shouldAutomaticallyLoadCompletions;
@property(readonly) BOOL shouldLoadCompletionArtwork;
@property <MPUCompletionQueryDataSourceDelegate> * completionDelegate;


- (BOOL)shouldAutomaticallyLoadCompletions;
- (BOOL)shouldShowCompletions;
- (BOOL)hasCompletionOfferForSectionAtIndex:(unsigned int)arg1;
- (int)completionOfferStatusForSectionAtIndex:(int)arg1;
- (void)setCompletionOfferStatus:(int)arg1 forSectionAtIndex:(int)arg2;
- (void)overlayCompletionForSectionAtIndex:(unsigned int)arg1;
- (unsigned int)indexOfSectionForCompletionOffering:(id)arg1;
- (void)removeOverlayCompletionForSectionAtIndex:(unsigned int)arg1;
- (BOOL)isShowingCompletionOverlayForSectionAtIndex:(unsigned int)arg1;
- (id)completionOfferingForSectionAtIndex:(unsigned int)arg1;
- (id)sectionEntityAtIndex:(unsigned int)arg1;
- (void)setShouldShowCompletions:(BOOL)arg1;
- (void)loadCompletionOfferings;
- (void)setCompletionDelegate:(id)arg1;
- (id)sectionEntityWithoutOverlayAtIndex:(unsigned int)arg1;
- (id)initWithQuery:(id)arg1 entityType:(int)arg2;
- (void)setVariant:(int)arg1 forSectionAtIndex:(int)arg2;
- (int)variantForSectionAtIndex:(int)arg1;
- (BOOL)hasVariantsForSectionAtIndex:(int)arg1;
- (void)removeAllCompletionOverlays;
- (void)setShouldAutomaticallyLoadCompletions:(BOOL)arg1;
- (long long)_pidForSectionAtIndex:(int)arg1;
- (void)_setToken:(unsigned int)arg1 forSectionAtIndex:(int)arg2;
- (BOOL)shouldLoadCompletionArtwork;
- (void)cancelCompletionOfferingWithToken:(unsigned int)arg1;
- (int)_tokenForSectionAtIndex:(int)arg1;
- (id)completionDelegate;
- (void)_setCompletion:(id)arg1 forSectionAtIndex:(int)arg2;
- (void)loadCompletionOfferingForSectionAtIndex:(unsigned int)arg1;
- (void).cxx_destruct;
- (void)invalidate;

@end
