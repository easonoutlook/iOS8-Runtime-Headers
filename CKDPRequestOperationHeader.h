/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSString, CKDPIdentifier, NSData, CKDPLocale;

@interface CKDPRequestOperationHeader : PBCodable <NSCopying> {
    unsigned long long _applicationConfigVersion;
    unsigned long long _deviceFlowControlBudget;
    unsigned long long _deviceFlowControlBudgetCap;
    unsigned long long _deviceProtocolVersion;
    unsigned long long _globalConfigVersion;
    NSString *_applicationBundle;
    NSString *_applicationContainer;
    int _applicationContainerEnvironment;
    NSString *_applicationVersion;
    NSData *_clientChangeToken;
    NSString *_deviceAssignedName;
    NSString *_deviceFlowControlKey;
    float _deviceFlowControlRegeneration;
    NSString *_deviceHardwareID;
    NSString *_deviceHardwareVersion;
    CKDPIdentifier *_deviceIdentifier;
    NSString *_deviceLibraryName;
    NSString *_deviceLibraryVersion;
    NSString *_deviceSoftwareVersion;
    int _isolationLevel;
    CKDPLocale *_locale;
    NSString *_mmcsProtocolVersion;
    int _targetDatabase;
    NSString *_userIDContainerID;
    NSString *_userToken;
    struct { 
        unsigned int applicationConfigVersion : 1; 
        unsigned int deviceFlowControlBudget : 1; 
        unsigned int deviceFlowControlBudgetCap : 1; 
        unsigned int deviceProtocolVersion : 1; 
        unsigned int globalConfigVersion : 1; 
        unsigned int applicationContainerEnvironment : 1; 
        unsigned int deviceFlowControlRegeneration : 1; 
        unsigned int isolationLevel : 1; 
        unsigned int targetDatabase : 1; 
    } _has;
}

@property(readonly) BOOL hasUserToken;
@property(retain) NSString * userToken;
@property(readonly) BOOL hasApplicationContainer;
@property(retain) NSString * applicationContainer;
@property(readonly) BOOL hasApplicationBundle;
@property(retain) NSString * applicationBundle;
@property(readonly) BOOL hasApplicationVersion;
@property(retain) NSString * applicationVersion;
@property BOOL hasApplicationConfigVersion;
@property unsigned long long applicationConfigVersion;
@property BOOL hasGlobalConfigVersion;
@property unsigned long long globalConfigVersion;
@property(readonly) BOOL hasDeviceIdentifier;
@property(retain) CKDPIdentifier * deviceIdentifier;
@property(readonly) BOOL hasDeviceSoftwareVersion;
@property(retain) NSString * deviceSoftwareVersion;
@property(readonly) BOOL hasDeviceHardwareVersion;
@property(retain) NSString * deviceHardwareVersion;
@property(readonly) BOOL hasDeviceLibraryName;
@property(retain) NSString * deviceLibraryName;
@property(readonly) BOOL hasDeviceLibraryVersion;
@property(retain) NSString * deviceLibraryVersion;
@property(readonly) BOOL hasDeviceFlowControlKey;
@property(retain) NSString * deviceFlowControlKey;
@property BOOL hasDeviceFlowControlBudget;
@property unsigned long long deviceFlowControlBudget;
@property BOOL hasDeviceFlowControlBudgetCap;
@property unsigned long long deviceFlowControlBudgetCap;
@property BOOL hasDeviceFlowControlRegeneration;
@property float deviceFlowControlRegeneration;
@property BOOL hasDeviceProtocolVersion;
@property unsigned long long deviceProtocolVersion;
@property(readonly) BOOL hasLocale;
@property(retain) CKDPLocale * locale;
@property(readonly) BOOL hasMmcsProtocolVersion;
@property(retain) NSString * mmcsProtocolVersion;
@property BOOL hasApplicationContainerEnvironment;
@property int applicationContainerEnvironment;
@property(readonly) BOOL hasClientChangeToken;
@property(retain) NSData * clientChangeToken;
@property(readonly) BOOL hasDeviceAssignedName;
@property(retain) NSString * deviceAssignedName;
@property(readonly) BOOL hasDeviceHardwareID;
@property(retain) NSString * deviceHardwareID;
@property BOOL hasTargetDatabase;
@property int targetDatabase;
@property(readonly) BOOL hasUserIDContainerID;
@property(retain) NSString * userIDContainerID;
@property BOOL hasIsolationLevel;
@property int isolationLevel;


- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)_prettyDictionaryRepresentation;
- (id)userIDContainerID;
- (id)deviceHardwareID;
- (id)deviceAssignedName;
- (id)mmcsProtocolVersion;
- (unsigned long long)deviceProtocolVersion;
- (float)deviceFlowControlRegeneration;
- (unsigned long long)deviceFlowControlBudgetCap;
- (unsigned long long)deviceFlowControlBudget;
- (id)deviceFlowControlKey;
- (id)deviceLibraryVersion;
- (id)deviceLibraryName;
- (id)deviceHardwareVersion;
- (id)deviceSoftwareVersion;
- (id)deviceIdentifier;
- (unsigned long long)globalConfigVersion;
- (unsigned long long)applicationConfigVersion;
- (id)userToken;
- (BOOL)hasIsolationLevel;
- (void)setHasIsolationLevel:(BOOL)arg1;
- (void)setIsolationLevel:(int)arg1;
- (int)isolationLevel;
- (BOOL)hasUserIDContainerID;
- (BOOL)hasTargetDatabase;
- (void)setHasTargetDatabase:(BOOL)arg1;
- (int)targetDatabase;
- (BOOL)hasDeviceHardwareID;
- (BOOL)hasDeviceAssignedName;
- (BOOL)hasMmcsProtocolVersion;
- (BOOL)hasLocale;
- (BOOL)hasDeviceProtocolVersion;
- (void)setHasDeviceProtocolVersion:(BOOL)arg1;
- (void)setDeviceProtocolVersion:(unsigned long long)arg1;
- (BOOL)hasDeviceFlowControlRegeneration;
- (void)setHasDeviceFlowControlRegeneration:(BOOL)arg1;
- (BOOL)hasDeviceFlowControlBudgetCap;
- (void)setHasDeviceFlowControlBudgetCap:(BOOL)arg1;
- (BOOL)hasDeviceFlowControlBudget;
- (void)setHasDeviceFlowControlBudget:(BOOL)arg1;
- (BOOL)hasDeviceFlowControlKey;
- (BOOL)hasDeviceLibraryVersion;
- (BOOL)hasDeviceLibraryName;
- (BOOL)hasDeviceHardwareVersion;
- (BOOL)hasDeviceSoftwareVersion;
- (BOOL)hasDeviceIdentifier;
- (BOOL)hasGlobalConfigVersion;
- (void)setHasGlobalConfigVersion:(BOOL)arg1;
- (void)setGlobalConfigVersion:(unsigned long long)arg1;
- (BOOL)hasApplicationConfigVersion;
- (void)setHasApplicationConfigVersion:(BOOL)arg1;
- (void)setApplicationConfigVersion:(unsigned long long)arg1;
- (BOOL)hasApplicationVersion;
- (BOOL)hasApplicationBundle;
- (BOOL)hasUserToken;
- (void)setUserIDContainerID:(id)arg1;
- (void)setUserToken:(id)arg1;
- (id)clientChangeToken;
- (BOOL)hasClientChangeToken;
- (void)setClientChangeToken:(id)arg1;
- (void)setMmcsProtocolVersion:(id)arg1;
- (void)setDeviceFlowControlRegeneration:(float)arg1;
- (void)setDeviceFlowControlBudgetCap:(unsigned long long)arg1;
- (void)setDeviceFlowControlBudget:(unsigned long long)arg1;
- (void)setDeviceFlowControlKey:(id)arg1;
- (void)setDeviceIdentifier:(id)arg1;
- (void)setDeviceLibraryVersion:(id)arg1;
- (void)setDeviceLibraryName:(id)arg1;
- (void)setDeviceAssignedName:(id)arg1;
- (void)setDeviceHardwareID:(id)arg1;
- (void)setDeviceSoftwareVersion:(id)arg1;
- (void)setDeviceHardwareVersion:(id)arg1;
- (void)setTargetDatabase:(int)arg1;
- (void)setApplicationBundle:(id)arg1;
- (id)applicationContainer;
- (BOOL)hasApplicationContainerEnvironment;
- (void)setHasApplicationContainerEnvironment:(BOOL)arg1;
- (void)setApplicationContainerEnvironment:(int)arg1;
- (int)applicationContainerEnvironment;
- (BOOL)hasApplicationContainer;
- (void)setApplicationContainer:(id)arg1;
- (id)applicationVersion;
- (id)applicationBundle;
- (void)setApplicationVersion:(id)arg1;
- (void).cxx_destruct;
- (id)locale;
- (id)dictionaryRepresentation;
- (void)setLocale:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;

@end
