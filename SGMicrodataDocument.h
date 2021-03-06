/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary;

@interface SGMicrodataDocument : NSObject  {
    NSMutableDictionary *_htmlIds;
    NSMutableArray *_items;
}

@property(readonly) NSDictionary * htmlIds;
@property(readonly) NSArray * items;


- (id)asJsonLd;
- (id)jsonLdForItem:(id)arg1;
- (void)setHtmlIdItemScope:(id)arg1 forHtmlId:(id)arg2;
- (id)htmlIds;
- (void).cxx_destruct;
- (void)addItem:(id)arg1;
- (id)items;
- (id)init;

@end
