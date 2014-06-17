/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
 */

@class NSSet, NSString, IndoorProtocolProxy;

@interface ServiceState : NSObject  {
    bool_pausedLocalization;
    bool_updateLocation;
    NSString *_apiKey;
    NSString *_username;
    NSString *_password;
    NSString *_server;
    NSSet *_selectedVenues;
    IndoorProtocolProxy *_delegateProxy;
}

@property(retain) NSString * apiKey;
@property(retain) NSString * username;
@property(retain) NSString * password;
@property(retain) NSString * server;
@property(retain) NSSet * selectedVenues;
@property bool pausedLocalization;
@property bool updateLocation;
@property(retain) IndoorProtocolProxy * delegateProxy;


- (id)username;
- (void)setDelegateProxy:(id)arg1;
- (void)setUpdateLocation:(bool)arg1;
- (bool)updateLocation;
- (void)setPausedLocalization:(bool)arg1;
- (bool)pausedLocalization;
- (void)setSelectedVenues:(id)arg1;
- (id)selectedVenues;
- (void)setApiKey:(id)arg1;
- (id)apiKey;
- (void)setServer:(id)arg1;
- (void)setUsername:(id)arg1;
- (void)setPassword:(id)arg1;
- (void).cxx_destruct;
- (id)server;
- (id)delegateProxy;
- (id)password;

@end
