/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSURL, NSString, NSArray;

@interface SKUISwooshPageComponent : SKUIPageComponent  {
    NSArray *_bricks;
    int _fcKind;
    NSArray *_lockups;
    struct SKUILockupStyle { 
        int artworkSize; 
        int layoutStyle; 
        unsigned int visibleFields; 
    } _lockupStyle;
    NSArray *_mediaComponents;
    int _missingDataCount;
    NSString *_platformKeyProfile;
    int _seeAllStyle;
    NSString *_seeAllTitle;
    NSURL *_seeAllURL;
    BOOL _showsIndexNumbers;
    BOOL _showsItemTitles;
    int _swooshType;
    NSString *_title;
}

@property(readonly) int seeAllStyle;
@property(readonly) NSString * seeAllTitle;
@property(readonly) NSURL * seeAllURL;
@property(readonly) int swooshType;
@property(readonly) NSString * title;
@property(readonly) NSArray * lockups;
@property(readonly) struct SKUILockupStyle { int x1; int x2; unsigned int x3; } lockupStyle;
@property(readonly) NSString * platformKeyProfile;
@property(readonly) BOOL showsIndexNumbers;
@property(readonly) NSArray * bricks;
@property(readonly) BOOL showsBrickTitles;
@property(readonly) NSArray * mediaComponents;
@property(readonly) BOOL showsMediaTitles;


- (id)_lockupWithItemIdentifier:(id)arg1 context:(id)arg2;
- (unsigned int)_defaultVisibleFieldsForItemKind:(int)arg1;
- (BOOL)_isBrickAvailable:(id)arg1 withPageContext:(id)arg2;
- (void)_updateLockup:(id)arg1 withItem:(id)arg2;
- (struct SKUILockupStyle { int x1; int x2; unsigned int x3; })_lockupStyleWithLockups:(id)arg1;
- (id)_lockupsWithChildren:(id)arg1 featuredPageContext:(id)arg2;
- (id)_brickItemsWithChildren:(id)arg1 featuredPageContext:(id)arg2;
- (void)_reloadMissingDataCount;
- (id)_mediaComponentsWithChildren:(id)arg1 context:(id)arg2;
- (id)_lockupsWithChildren:(id)arg1 context:(id)arg2;
- (id)_brickItemsWithChildren:(id)arg1 customPageContext:(id)arg2;
- (void)_setSeeAllValuesWithLinkInfo:(id)arg1;
- (struct SKUILockupStyle { int x1; int x2; unsigned int x3; })_defaultLockupStyleWithSwooshType:(int)arg1;
- (BOOL)showsMediaTitles;
- (id)mediaComponents;
- (id)initWithRelatedContentContext:(id)arg1;
- (id)initWithLockups:(id)arg1 swooshType:(int)arg2 title:(id)arg3;
- (id)platformKeyProfile;
- (id)_updateLockupItemsWithItems:(id)arg1;
- (void)_updateLockupItemsWithLookupResponse:(id)arg1;
- (id)initWithItemList:(id)arg1;
- (int)seeAllStyle;
- (id)seeAllTitle;
- (id)lockups;
- (BOOL)showsBrickTitles;
- (void)_updateBricksWithItems:(id)arg1;
- (id)bricks;
- (id)seeAllURL;
- (BOOL)showsIndexNumbers;
- (struct SKUILockupStyle { int x1; int x2; unsigned int x3; })lockupStyle;
- (id)_newLockupComponentWithItem:(id)arg1 defaultStyle:(struct SKUILockupStyle { int x1; int x2; unsigned int x3; })arg2;
- (id)initWithRoomContext:(id)arg1;
- (int)swooshType;
- (id)metricsElementName;
- (BOOL)isMissingItemData;
- (void)enumerateMissingItemIdentifiersFromIndex:(int)arg1 usingBlock:(id)arg2;
- (id)initWithFeaturedContentContext:(id)arg1 kind:(int)arg2;
- (id)valueForMetricsField:(id)arg1;
- (int)componentType;
- (id)initWithCustomPageContext:(id)arg1;
- (void).cxx_destruct;
- (id)title;

@end
