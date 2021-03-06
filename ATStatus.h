/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

@class NSString;

@interface ATStatus : NSObject <NSSecureCoding> {
    BOOL _wirelessSync;
    BOOL _automaticSync;
    NSString *_libraryID;
    NSString *_dataClass;
    unsigned int _syncStage;
    unsigned int _syncType;
    float _progress;
    NSString *_localizedDescription;
    unsigned int _completedAssetCount;
    unsigned int _totalAssetCount;
    unsigned int _totalItemCount;
}

@property(copy) NSString * libraryID;
@property(copy) NSString * dataClass;
@property unsigned int syncStage;
@property unsigned int syncType;
@property float progress;
@property(copy) NSString * localizedDescription;
@property unsigned int completedAssetCount;
@property unsigned int totalAssetCount;
@property unsigned int totalItemCount;
@property(getter=isWirelessSync) BOOL wirelessSync;
@property(getter=isAutomaticSync) BOOL automaticSync;

+ (BOOL)supportsSecureCoding;

- (void)setLibraryID:(id)arg1;
- (unsigned int)totalItemCount;
- (void)setTotalItemCount:(unsigned int)arg1;
- (void)setSyncType:(unsigned int)arg1;
- (id)initWithLibraryID:(id)arg1 dataClass:(id)arg2;
- (unsigned int)completedAssetCount;
- (void)setWirelessSync:(BOOL)arg1;
- (void)setAutomaticSync:(BOOL)arg1;
- (void)setCompletedAssetCount:(unsigned int)arg1;
- (void)setTotalAssetCount:(unsigned int)arg1;
- (void)setSyncStage:(unsigned int)arg1;
- (void)setDataClass:(id)arg1;
- (unsigned int)totalAssetCount;
- (unsigned int)syncStage;
- (BOOL)isAutomaticSync;
- (BOOL)isWirelessSync;
- (unsigned int)syncType;
- (id)dataClass;
- (void).cxx_destruct;
- (float)progress;
- (id)localizedDescription;
- (void)setProgress:(float)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)libraryID;
- (void)setLocalizedDescription:(id)arg1;

@end
