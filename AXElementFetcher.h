/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
 */

@class AXElementGroup, <AXElementFetcherDelegate>, NSObject<OS_dispatch_source>, NSObject<OS_dispatch_queue>, NSMapTable, AXVisualElementGrouper, AXElementGroupPruner, AXElement, NSMutableDictionary, NSArray;

@interface AXElementFetcher : NSObject  {
    NSObject<OS_dispatch_queue> *_elementFetchQueue;
    NSObject<OS_dispatch_queue> *_elementAccessQueue;
    struct __AXObserver { } *_axRuntimeNotificationObserver;
    unsigned int _scheduledFetchEvent;
    NSObject<OS_dispatch_source> *_eventCoalesceTimer;
    BOOL _enabled;
    BOOL _eventManagementEnabled;
    BOOL _groupingEnabled;
    BOOL _shouldUsePadInterfaceHeuristics;
    BOOL _fetchingElements;
    <AXElementFetcherDelegate> *_delegate;
    int _fetchPolicy;
    NSMapTable *_fetchObservers;
    unsigned int _activeFetchEvents;
    NSArray *_elementCache;
    AXElementGroup *_rootGroupCache;
    AXElementGroup *_keyboardGroupCache;
    AXElement *_currentApp;
    AXVisualElementGrouper *_visualElementGrouper;
    AXElementGroupPruner *_elementGroupPruner;
    NSMutableDictionary *_postFetchFilters;
}

@property(getter=isEnabled) BOOL enabled;
@property(getter=isFetchingElements) BOOL fetchingElements;
@property(readonly) BOOL willFetchElements;
@property(readonly) NSArray * availableElements;
@property int fetchPolicy;
@property(getter=isEventManagementEnabled) BOOL eventManagementEnabled;
@property(getter=isGroupingEnabled) BOOL groupingEnabled;
@property BOOL shouldUsePadInterfaceHeuristics;
@property(readonly) AXElementGroup * rootGroup;
@property(readonly) AXElementGroup * keyboardGroup;
@property(readonly) AXElementGroup * firstKeyboardRow;
@property(readonly) AXElementGroup * lastKeyboardRow;
@property <AXElementFetcherDelegate> * delegate;
@property(retain) NSMapTable * fetchObservers;
@property unsigned int activeFetchEvents;
@property(retain) AXElement * currentApp;
@property(retain) NSMutableDictionary * postFetchFilters;
@property(retain) NSArray * elementCache;
@property(retain) AXElementGroup * rootGroupCache;
@property(retain) AXElementGroup * keyboardGroupCache;
@property(retain) AXVisualElementGrouper * visualElementGrouper;
@property(retain) AXElementGroupPruner * elementGroupPruner;

+ (id)springBoardElement;
+ (id)currentAppWithPositionHint:(struct CGPoint { float x1; float x2; })arg1;
+ (id)_applicationForElement:(id)arg1;
+ (id)systemWideElement;

- (void)setPostFetchFilters:(id)arg1;
- (void)setFetchingElements:(BOOL)arg1;
- (void)setShouldUsePadInterfaceHeuristics:(BOOL)arg1;
- (void)setGroupingEnabled:(BOOL)arg1;
- (void)setFetchObservers:(id)arg1;
- (void)setFetchPolicy:(int)arg1;
- (void)_debugLogElementCache;
- (void)updateKeyboardGroup:(id)arg1;
- (id)findGroupableMatchingBlock:(id)arg1;
- (id)previousSiblingOfGroupable:(id)arg1 didWrap:(BOOL*)arg2;
- (id)nextSiblingOfGroupable:(id)arg1 didWrap:(BOOL*)arg2;
- (id)previousSiblingOfElement:(id)arg1 didWrap:(BOOL*)arg2;
- (id)nextSiblingOfElement:(id)arg1 didWrap:(BOOL*)arg2;
- (id)lastElement;
- (id)firstElement;
- (id)closestElementToElement:(id)arg1;
- (id)findElementsMatchingBlock:(id)arg1;
- (id)findElementMatchingBlock:(id)arg1;
- (void)removeAllPostFetchFilters;
- (void)removePostFetchFilterWithIdentifier:(id)arg1;
- (void)addPostFetchFilter:(id)arg1 withIdentifier:(id)arg2;
- (void)fetchEventOccurred:(unsigned int)arg1;
- (void)removeFetchEvents:(unsigned int)arg1;
- (void)unregisterFetchObserver:(id)arg1;
- (void)registerFetchObserver:(id)arg1 targetQueue:(id)arg2;
- (id)lastKeyboardRow;
- (id)firstKeyboardRow;
- (id)rootGroup;
- (id)availableElements;
- (BOOL)willFetchElements;
- (id)initWithDelegate:(id)arg1 fetchEvents:(unsigned int)arg2 fetchPolicy:(int)arg3 enableEventManagement:(BOOL)arg4 enableGrouping:(BOOL)arg5 beginEnabled:(BOOL)arg6;
- (void)setElementGroupPruner:(id)arg1;
- (id)elementGroupPruner;
- (void)setVisualElementGrouper:(id)arg1;
- (BOOL)shouldUsePadInterfaceHeuristics;
- (id)visualElementGrouper;
- (id)_filterGroup:(id)arg1 withFilter:(id)arg2;
- (id)_groupWithDictionary:(id)arg1 currentPid:(int)arg2;
- (id)_groupWithItems:(id)arg1 groupTraits:(int)arg2 label:(id)arg3 currentPid:(int)arg4;
- (id)_findGroupableMatchingBlock:(id)arg1 inElementGroup:(id)arg2;
- (id)_findGroupableMatchingGroupable:(id)arg1 inElementGroup:(id)arg2;
- (id)_siblingOfGroupable:(id)arg1 forDirection:(BOOL)arg2 didWrap:(BOOL*)arg3;
- (id)findGroupableMatchingGroupable:(id)arg1;
- (id)closestElementToPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)findElementMatchingElement:(id)arg1;
- (id)_findElementsMatchingBlock:(id)arg1 internalRequest:(BOOL)arg2;
- (BOOL)_shouldConsiderCacheAsInvalid;
- (void)setKeyboardGroupCache:(id)arg1;
- (void)setRootGroupCache:(id)arg1;
- (void)setElementCache:(id)arg1;
- (id)_filterElements:(id)arg1 withFilter:(id)arg2;
- (id)postFetchFilters;
- (void)_sendFakeScreenChangeIfNecessaryForGroup:(id)arg1 orElements:(id)arg2 appDidChange:(BOOL)arg3;
- (id)_fetchFirstElements;
- (id)_fetchVisibleElements;
- (void)setEventManagementEnabled:(BOOL)arg1;
- (id)_axNotificationsForManagedEvents;
- (void)_notifyObserversDidFetchElementsForEvent:(unsigned int)arg1 foundNewElements:(BOOL)arg2;
- (BOOL)_fetchElements:(BOOL)arg1;
- (BOOL)_fetchGroups:(BOOL)arg1;
- (void)_notifyObserversWillFetchElementsForEvent:(unsigned int)arg1;
- (double)_delayForFetchEvent:(unsigned int)arg1;
- (void)_notifyObserversDidScheduleFetchEvent:(unsigned int)arg1;
- (void)_scheduleFetchEvent:(unsigned int)arg1;
- (int)_priorityForFetchEvent:(unsigned int)arg1;
- (BOOL)_fetchEventCanBeManaged:(unsigned int)arg1;
- (BOOL)isEventManagementEnabled;
- (void)_fetchEventOccurred:(unsigned int)arg1;
- (void)setActiveFetchEvents:(unsigned int)arg1;
- (id)fetchObservers;
- (id)keyboardGroup;
- (id)keyboardGroupCache;
- (id)rootGroupCache;
- (id)elementCache;
- (void)setCurrentApp:(id)arg1;
- (BOOL)_updateCurrentApp;
- (BOOL)isGroupingEnabled;
- (id)currentApp;
- (BOOL)isFetchingElements;
- (id)_debugStringForFetchEvents:(unsigned int)arg1;
- (unsigned int)activeFetchEvents;
- (id)_debugStringForPolicy:(int)arg1;
- (int)fetchPolicy;
- (void)unregisterAllFetchObservers;
- (void)disableEventManagement;
- (void)_tearDownEventCoalesceTimer;
- (void)enableEventManagement;
- (void)addFetchEvents:(unsigned int)arg1;
- (BOOL)isEnabled;
- (void)setEnabled:(BOOL)arg1;
- (id)delegate;
- (id)description;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)refresh;

@end
