/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@class NSSet, NSMutableArray, NSArray;

@interface SGMicrodataItem : SGMicrodataItemScope  {
    NSMutableArray *_itemRef;
    NSSet *_itemType;
}

@property(readonly) NSSet * itemType;
@property(readonly) NSArray * itemRef;


- (id)itemType;
- (id)itemRef;
- (id)initWithItemType:(id)arg1 itemRef:(id)arg2;
- (void)resolveItemRefsWithDocument:(id)arg1;
- (void).cxx_destruct;

@end
