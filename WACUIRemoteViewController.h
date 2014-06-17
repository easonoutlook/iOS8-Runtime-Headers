/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
 */

@class EAWiFiUnconfiguredAccessoryBrowserManager;

@interface WACUIRemoteViewController : _UIRemoteViewController <WACUIHostProtocol> {
    EAWiFiUnconfiguredAccessoryBrowserManager *_parent;
}

@property EAWiFiUnconfiguredAccessoryBrowserManager * parent;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (id)parent;
- (void)setParent:(id)arg1;
- (void).cxx_destruct;
- (void)backendFoundNewWACDevices:(id)arg1 andRemovedWACDevices:(id)arg2;
- (void)backendDidStopSearchWithError:(id)arg1;
- (void)backendDidStartSearchWithError:(id)arg1;
- (void)updateState:(int)arg1;
- (void)dismissWithStatus:(long)arg1;

@end
