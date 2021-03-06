/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIClientContext, NSString;

@interface SKUISearchPageDataConsumer : SSVURLDataConsumer  {
    SKUIClientContext *_clientContext;
    NSString *_searchTerm;
}

@property(copy) NSString * searchTerm;

+ (id)consumerWithClientContext:(id)arg1;

- (id)_ageBandFacetWithAgeBands:(id)arg1;
- (id)_sortFacetWithSorts:(id)arg1;
- (id)_categoriesFacetWithCategories:(id)arg1;
- (id)_priceFacet;
- (id)_deviceFacet;
- (id)_newSearchResultGroupWithBubbleDictionary:(id)arg1 platformDictionary:(id)arg2 editorialDictionary:(id)arg3;
- (id)objectForData:(id)arg1 response:(id)arg2 error:(id*)arg3;
- (void).cxx_destruct;
- (void)setSearchTerm:(id)arg1;
- (id)searchTerm;

@end
