/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
 */

@interface MusicArtistsViewController : MusicTableViewController  {
    BOOL _allowsActions;
}

@property BOOL allowsActions;

+ (int)containerItemType;
+ (id)actionCellConfigurationClasses;
+ (id)itemPersistentIDProperty;
+ (id)persistentIDProperty;
+ (int)groupingType;

- (void)_appDefaultsDidChangeNotification:(id)arg1;
- (id)_viewControllerForSelectedMediaEntity:(id)arg1;
- (BOOL)music_handleUserActivityContext:(id)arg1 containerItem:(id)arg2;
- (BOOL)music_appendCurrentUserActivityContainerItems:(id)arg1 previousViewController:(id)arg2 nextViewController:(id)arg3;
- (BOOL)shouldShowActionCellConfiguration:(Class)arg1;
- (id)initWithDataSource:(id)arg1 cellConfigurationClass:(Class)arg2;
- (void)defaultsDidChange;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)setAllowsActions:(BOOL)arg1;
- (void)dealloc;
- (BOOL)allowsActions;

@end