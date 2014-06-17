/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@class NSMutableSet;

@interface HAPAccessoryServerBrowserIP : HAPAccessoryServerBrowser  {
    struct BonjourBrowser { } *_bonjourBrowser;
    BOOL _searchInProgress;
    NSMutableSet *_discoveredAccessoryServers;
}

@property(retain) NSMutableSet * discoveredAccessoryServers;
@property BOOL searchInProgress;


- (void)setDiscoveredAccessoryServers:(id)arg1;
- (void)stopDiscoveringAccessoryServers;
- (void)startDiscoveringAccessoryServers;
- (id)discoveredAccessoryServers;
- (long)_server:(id*)arg1 forBonjourDevice:(id)arg2;
- (void)_handleBonjourRemoveWithEventInfo:(id)arg1;
- (void)_handleBonjourAddOrUpdateWithEventInfo:(id)arg1;
- (void)setSearchInProgress:(BOOL)arg1;
- (BOOL)searchInProgress;
- (void)_handleBonjourBrowserEvent:(unsigned int)arg1 eventInfo:(id)arg2;
- (long)_initializeBonjourBrowser;
- (void).cxx_destruct;
- (id)initWithQueue:(id)arg1;
- (void)dealloc;

@end
