/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

@class NSString;

@interface FTRegConnectionHandler : NSObject  {
    int _serviceType;
    unsigned int _caps;
    NSString *_name;
    NSString *_listenerID;
    NSString *_logName;
    struct { 
        unsigned int listeningForNotifications : 1; 
    } _handlerFlags;
}

@property unsigned int caps;
@property int serviceType;
@property(copy) NSString * name;
@property(retain,readonly) NSString * _serviceName;
@property(retain) NSString * _logName;
@property(setter=_setListenerID:,copy) NSString * _listenerID;


- (void)setCaps:(unsigned int)arg1;
- (unsigned int)caps;
- (void)_setListenerID:(id)arg1;
- (id)_listenerID;
- (void)_disconnectFromDaemon;
- (int)serviceType;
- (void)setServiceType:(int)arg1;
- (BOOL)connectToDaemon:(BOOL)arg1;
- (BOOL)_isServiceSupported;
- (void)_handleDaemonDisconnected:(id)arg1;
- (id)initWithServiceType:(int)arg1 name:(id)arg2 capabilities:(unsigned int)arg3;
- (void)set_logName:(id)arg1;
- (void)_stopListeningForNotifications;
- (void)_handleDaemonConnected:(id)arg1;
- (BOOL)isConnectedToDaemon;
- (id)initWithServiceType:(int)arg1 name:(id)arg2;
- (id)_logName;
- (BOOL)connectToDaemon;
- (id)_serviceName;
- (id)name;
- (void)setName:(id)arg1;
- (void)dealloc;
- (void)_startListeningForNotifications;

@end
