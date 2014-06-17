/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@class NSString, NSData, NSDate, NSDictionary, NSURL;

@interface IMFileTransfer : NSObject  {
    BOOL _isIncoming;
    BOOL _isDirectory;
    BOOL _shouldAttemptToResume;
    BOOL _wasRegisteredAsStandalone;
    BOOL _shouldForceArchive;
    BOOL _needsWrapper;
    unsigned short _hfsFlags;
    NSURL *_localURL;
    NSData *_localBookmark;
    NSString *_guid;
    NSString *_messageGUID;
    NSDate *_startDate;
    NSDate *_createdDate;
    int _transferState;
    NSString *_filename;
    NSURL *_transferDataURL;
    NSString *_utiType;
    NSString *_mimeType;
    unsigned long _hfsType;
    unsigned long _hfsCreator;
    NSString *_accountID;
    NSString *_otherPerson;
    int _error;
    NSString *_errorDescription;
    NSDictionary *_localUserInfo;
    NSString *_transferredFilename;
    NSDictionary *_transcoderUserInfo;
    double _lastUpdatedInterval;
    double _lastAveragedInterval;
    unsigned long long _lastAveragedBytes;
    unsigned long long _currentBytes;
    unsigned long long _totalBytes;
    unsigned long long _averageTransferRate;
}

@property(readonly) BOOL canBeAccepted;
@property(readonly) BOOL isFinished;
@property(retain,readonly) NSString * displayName;
@property(readonly) BOOL existsAtLocalPath;
@property(retain) NSString * guid;
@property(retain) NSString * messageGUID;
@property(retain) NSDate * createdDate;
@property(retain) NSDate * startDate;
@property int transferState;
@property BOOL isIncoming;
@property(retain) NSString * filename;
@property(retain) NSString * transferredFilename;
@property(retain) NSString * localPath;
@property(retain) NSString * type;
@property(retain,readonly) NSString * mimeType;
@property(retain) NSURL * localURL;
@property(retain) NSURL * transferDataURL;
@property(retain,readonly) NSURL * localURLWithoutBookmarkResolution;
@property(retain) NSData * localBookmark;
@property unsigned long hfsType;
@property unsigned long hfsCreator;
@property unsigned short hfsFlags;
@property(retain) NSString * accountID;
@property(retain) NSString * otherPerson;
@property unsigned long long currentBytes;
@property unsigned long long totalBytes;
@property unsigned long long averageTransferRate;
@property BOOL isDirectory;
@property BOOL shouldAttemptToResume;
@property BOOL shouldForceArchive;
@property int error;
@property(retain) NSString * errorDescription;
@property(retain) NSDictionary * transcoderUserInfo;
@property(retain) NSDictionary * userInfo;
@property(setter=setRegisteredAsStandalone:) BOOL wasRegisteredAsStandalone;
@property(setter=_setLastUpdatedInterval:) double _lastUpdatedInterval;
@property(setter=_setLastAveragedInterval:) double _lastAveragedInterval;
@property(readonly) unsigned long long _lastAveragedBytes;
@property(setter=_setNeedsWrapper:) BOOL _needsWrapper;

+ (id)_invalidCharactersForFileTransferName;
+ (BOOL)_doesLocalURLRequireArchiving:(id)arg1;

- (id)startDate;
- (int)error;
- (void)setTotalBytes:(unsigned long long)arg1;
- (unsigned long long)totalBytes;
- (void)setFilename:(id)arg1;
- (id)filename;
- (void)setTransferredFilename:(id)arg1;
- (void)_setNeedsWrapper:(BOOL)arg1;
- (BOOL)_needsWrapper;
- (BOOL)shouldForceArchive;
- (void)_setErrorDescription:(id)arg1;
- (void)setShouldAttemptToResume:(BOOL)arg1;
- (BOOL)shouldAttemptToResume;
- (void)setIsDirectory:(BOOL)arg1;
- (void)setAverageTransferRate:(unsigned long long)arg1;
- (unsigned long long)averageTransferRate;
- (void)setOtherPerson:(id)arg1;
- (void)setAccountID:(id)arg1;
- (void)setHfsCreator:(unsigned long)arg1;
- (unsigned long)hfsCreator;
- (void)setHfsFlags:(unsigned short)arg1;
- (void)setHfsType:(unsigned long)arg1;
- (id)transferDataURL;
- (void)setIsIncoming:(BOOL)arg1;
- (void)setCreatedDate:(id)arg1;
- (id)createdDate;
- (unsigned long long)_lastAveragedBytes;
- (void)_setLastAveragedInterval:(double)arg1;
- (double)_lastAveragedInterval;
- (void)_setLastUpdatedInterval:(double)arg1;
- (double)_lastUpdatedInterval;
- (void)setLocalBookmark:(id)arg1;
- (id)localBookmark;
- (id)localURLWithoutBookmarkResolution;
- (unsigned long)hfsType;
- (void)_setTransferDataURL:(id)arg1;
- (BOOL)existsAtLocalPath;
- (BOOL)canBeAccepted;
- (void)_setDirectory:(BOOL)arg1 hfsType:(unsigned long)arg2 hfsCreator:(unsigned long)arg3 hfsFlags:(unsigned short)arg4;
- (id)transferredFilename;
- (void)_calculateTypeInformation;
- (unsigned short)hfsFlags;
- (void)_setLocalPath:(id)arg1;
- (void)setCurrentBytes:(unsigned long long)arg1;
- (id)guid;
- (id)localPath;
- (int)transferState;
- (BOOL)isIncoming;
- (void)_setAveragedTransferRate:(unsigned long long)arg1 lastAveragedInterval:(double)arg2 lastAveragedBytes:(unsigned long long)arg3;
- (void)_setCurrentBytes:(unsigned long long)arg1 totalBytes:(unsigned long long)arg2;
- (BOOL)wasRegisteredAsStandalone;
- (BOOL)_updateWithDictionaryRepresentation:(id)arg1;
- (void)setRegisteredAsStandalone:(BOOL)arg1;
- (id)otherPerson;
- (void)_setLocalURL:(id)arg1;
- (void)_setTransferState:(int)arg1;
- (void)_setForceArchive:(BOOL)arg1;
- (id)_dictionaryRepresentation;
- (void)_setAccount:(id)arg1 otherPerson:(id)arg2;
- (id)_initWithGUID:(id)arg1 filename:(id)arg2 isDirectory:(BOOL)arg3 localURL:(id)arg4 account:(id)arg5 otherPerson:(id)arg6 totalBytes:(unsigned long long)arg7 hfsType:(unsigned long)arg8 hfsCreator:(unsigned long)arg9 hfsFlags:(unsigned short)arg10 isIncoming:(BOOL)arg11;
- (id)errorDescription;
- (BOOL)isDirectory;
- (id)accountID;
- (void)setTranscoderUserInfo:(id)arg1;
- (unsigned long long)currentBytes;
- (void)setGuid:(id)arg1;
- (id)transcoderUserInfo;
- (void)setMessageGUID:(id)arg1;
- (id)messageGUID;
- (BOOL)isFinished;
- (id)localURL;
- (id)displayName;
- (id)mimeType;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (id)type;
- (void)setType:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;
- (void)_setError:(int)arg1;
- (void)_setStartDate:(id)arg1;
- (void)_clear;

@end
