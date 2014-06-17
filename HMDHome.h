/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@class HMDAccessoryManager, HMDLocation, NSObject<OS_dispatch_queue>, HMDHomeManager, HMMessageDispatcher, NSMutableArray, NSUUID, NSString, HMDRoom, NSMutableDictionary;

@interface HMDHome : NSObject <HMDAccessoryManagerDelegate, HMMessageReceiver, NSSecureCoding> {
    BOOL _primary;
    NSString *_name;
    HMDHomeManager *_homeManager;
    NSUUID *_uuid;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMMessageDispatcher *_msgDispatcher;
    HMDAccessoryManager *_accessoryManager;
    NSMutableArray *_rooms;
    NSMutableArray *_zones;
    NSMutableArray *_accessories;
    NSMutableArray *_services;
    NSMutableArray *_serviceGroups;
    NSMutableArray *_actionSets;
    NSMutableArray *_triggers;
    NSMutableDictionary *_objectNames;
    HMDLocation *_location;
    HMDRoom *_roomForEntireHome;
}

@property(retain) NSString * name;
@property HMDHomeManager * homeManager;
@property(readonly) NSUUID * uuid;
@property(getter=isPrimary) BOOL primary;
@property(retain) NSObject<OS_dispatch_queue> * workQueue;
@property(retain) HMMessageDispatcher * msgDispatcher;
@property(retain) HMDAccessoryManager * accessoryManager;
@property(retain) NSMutableArray * rooms;
@property(retain) NSMutableArray * zones;
@property(retain) NSMutableArray * accessories;
@property(retain) NSMutableArray * services;
@property(retain) NSMutableArray * serviceGroups;
@property(retain) NSMutableArray * actionSets;
@property(retain) NSMutableArray * triggers;
@property(retain) NSMutableDictionary * objectNames;
@property(retain) HMDLocation * location;
@property(retain) HMDRoom * roomForEntireHome;
@property(readonly) NSUUID * messageTargetUUID;
@property(readonly) NSObject<OS_dispatch_queue> * messageReceiveQueue;

+ (BOOL)supportsSecureCoding;

- (void)setLocation:(id)arg1;
- (void)configure:(id)arg1;
- (void)setPrimary:(BOOL)arg1;
- (id)services;
- (id)workQueue;
- (void)setRoomForEntireHome:(id)arg1;
- (void)setObjectNames:(id)arg1;
- (void)setTriggers:(id)arg1;
- (void)setActionSets:(id)arg1;
- (void)setServiceGroups:(id)arg1;
- (void)setZones:(id)arg1;
- (void)setRooms:(id)arg1;
- (id)isValidNameInHome:(id)arg1;
- (void)removeObjectNameFromHome:(id)arg1;
- (void)addObjectNameToHome:(id)arg1 type:(Class)arg2;
- (void)removeAllAccessoriesWithCompletionHandler:(id)arg1 queue:(id)arg2;
- (void)removeActionFromTriggers:(id)arg1;
- (void)currentLocationHasChanged:(id)arg1;
- (BOOL)isAtLocation:(id)arg1;
- (id)accessoryWithName:(id)arg1;
- (void)addAccessoryToCollection:(id)arg1;
- (void)accessoryManager:(id)arg1 didRemovePairedAccessories:(id)arg2 fromBridgeAccessory:(id)arg3;
- (void)accessoryManager:(id)arg1 didAddPairedAccessories:(id)arg2 toBridgeAccessory:(id)arg3;
- (id)initWithName:(id)arg1 homeManager:(id)arg2;
- (void)_removeAccessories:(id)arg1 message:(id)arg2;
- (id)_addAccessory:(id)arg1 configurationApp:(id)arg2;
- (void)_addNewAccessories:(id)arg1 message:(id)arg2;
- (id)accessoryWithUUID:(id)arg1;
- (id)triggerWithUUID:(id)arg1;
- (id)triggerWithName:(id)arg1;
- (void)removeActionSetFromTriggers:(id)arg1;
- (id)actionSetWithName:(id)arg1;
- (id)ServiceGroupWithUUID:(id)arg1;
- (id)ServiceGroupWithName:(id)arg1;
- (id)zoneWithUUID:(id)arg1;
- (id)zoneWithName:(id)arg1;
- (id)roomWithUUID:(id)arg1;
- (id)roomWithName:(id)arg1;
- (void)_handleRemoveAccessory:(id)arg1;
- (void)_handleAddAccessory:(id)arg1;
- (void)_handleRemoveTrigger:(id)arg1;
- (void)_handleAddTimerTrigger:(id)arg1;
- (void)_handleAddTrigger:(id)arg1;
- (void)_handleExecuteActionSet:(id)arg1;
- (void)_handleRemoveActionSet:(id)arg1;
- (void)_handleAddActionSet:(id)arg1;
- (void)_handleRemoveServiceGroup:(id)arg1;
- (void)_handleAddServiceGroup:(id)arg1;
- (void)_handleRemoveZone:(id)arg1;
- (void)_handleAddZone:(id)arg1;
- (void)_handleRemoveRoom:(id)arg1;
- (void)_handleAddRoom:(id)arg1;
- (void)_handleRename:(id)arg1;
- (id)objectNames;
- (void)_removeAllAccessoriesWithCompletionHandler:(id)arg1 queue:(id)arg2;
- (id)triggers;
- (id)serviceGroups;
- (id)zones;
- (id)rooms;
- (id)roomForEntireHome;
- (id)homeManager;
- (void)setHomeManager:(id)arg1;
- (id)accessoryManager;
- (void)setAccessoryManager:(id)arg1;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (void)addObjectName:(id)arg1 type:(Class)arg2;
- (void)removeObjectName:(id)arg1;
- (id)isValidName:(id)arg1;
- (id)actionSetWithUUID:(id)arg1;
- (void)_registerForMessages;
- (void)setMsgDispatcher:(id)arg1;
- (id)msgDispatcher;
- (id)actionSets;
- (void)setWorkQueue:(id)arg1;
- (id)accessories;
- (void)setAccessories:(id)arg1;
- (void)setServices:(id)arg1;
- (id)uuid;
- (void).cxx_destruct;
- (id)location;
- (void)save;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)description;
- (void)dealloc;
- (BOOL)isPrimary;

@end