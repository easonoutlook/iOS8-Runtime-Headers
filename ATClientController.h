/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

@class NSDictionary;

@interface ATClientController : NSObject  {
    NSDictionary *_clientMap;
    struct __CFDictionary { } *_queueMap;
}

+ (id)controllerForDataclasses:(id)arg1;
+ (id)sharedInstance;

- (id)allClients;
- (void)waitToDrain;
- (BOOL)_loadClientsForDataclasses:(id)arg1;
- (void)resetQueues;
- (id)queueForClient:(id)arg1;
- (id)clientForDataclass:(id)arg1;
- (void).cxx_destruct;
- (void)dealloc;

@end
