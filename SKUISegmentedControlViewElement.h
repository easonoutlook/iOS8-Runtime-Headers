/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, NSArray;

@interface SKUISegmentedControlViewElement : SKUIViewElement  {
    int _maximumNumberOfVisibleItems;
    NSString *_moreListTitle;
}

@property(readonly) int initialSelectedItemIndex;
@property(readonly) int maximumNumberOfVisibleItems;
@property(readonly) NSString * moreListTitle;
@property(readonly) NSArray * segmentItemTitles;


- (void)_enumerateItemElementsUsingBlock:(id)arg1;
- (int)maximumNumberOfVisibleItems;
- (int)initialSelectedItemIndex;
- (id)moreListTitle;
- (id)segmentItemTitles;
- (void)dispatchEventOfType:(unsigned int)arg1 forItemAtIndex:(int)arg2;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (int)pageComponentType;
- (void).cxx_destruct;

@end