/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class NSDate, NSNumber, NSURL, CKRecord, CKContainer, NSString, NSData;

@interface CKAsset : NSObject <CKRecordValue, NSSecureCoding> {
    BOOL _shouldRemoveWhenDone;
    BOOL _wasCached;
    NSURL *_fileURL;
    NSData *_signature;
    NSNumber *_deviceID;
    NSNumber *_fileID;
    NSNumber *_generationCountToSave;
    NSString *_assetHandleUUID;
    NSURL *_downloadURL;
    NSDate *_downloadURLExpiration;
    NSData *_assetKey;
    NSData *_wrappedAssetKey;
    NSData *_referenceSignature;
    NSString *_referenceIdentifierString;
    CKRecord *_record;
    NSString *_recordKey;
    NSURL *_contentBaseURL;
    NSString *_owner;
    NSString *_requestor;
    NSString *_authToken;
    NSData *_authRequest;
    NSString *_uploadReceipt;
    NSData *_inlineData;
    NSString *_downloadBaseURL;
    CKContainer *_container;
    unsigned long long _size;
}

@property(copy) NSURL * fileURL;
@property(copy) NSData * signature;
@property unsigned long long size;
@property(readonly) NSNumber * deviceID;
@property(readonly) NSNumber * fileID;
@property(retain) NSNumber * generationCountToSave;
@property(retain) NSString * assetHandleUUID;
@property BOOL shouldRemoveWhenDone;
@property(retain) NSURL * downloadURL;
@property(retain) NSDate * downloadURLExpiration;
@property(retain) NSData * assetKey;
@property(retain) NSData * wrappedAssetKey;
@property(retain) NSData * referenceSignature;
@property(retain) NSString * referenceIdentifierString;
@property CKRecord * record;
@property(copy) NSString * recordKey;
@property(retain) NSURL * contentBaseURL;
@property(retain) NSString * owner;
@property(retain) NSString * requestor;
@property(copy) NSString * authToken;
@property(copy) NSData * authRequest;
@property(copy) NSString * uploadReceipt;
@property(copy) NSData * inlineData;
@property(retain) NSString * downloadBaseURL;
@property BOOL wasCached;
@property CKContainer * container;

+ (BOOL)supportsSecureCoding;
+ (id)assetWithData:(id)arg1;
+ (id)assetWithFileURL:(id)arg1;

- (void)setOwner:(id)arg1;
- (void)setInlineData:(id)arg1;
- (id)_initBare;
- (void)setDownloadURLExpiration:(id)arg1;
- (void)setDownloadBaseURL:(id)arg1;
- (void)setReferenceIdentifierString:(id)arg1;
- (void)setReferenceSignature:(id)arg1;
- (void)setWrappedAssetKey:(id)arg1;
- (void)setAssetKey:(id)arg1;
- (void)setAuthRequest:(id)arg1;
- (void)setRequestor:(id)arg1;
- (void)setContentBaseURL:(id)arg1;
- (void)setRecordKey:(id)arg1;
- (id)generationCountToSave;
- (id)recordKey;
- (id)requestor;
- (id)contentBaseURL;
- (id)assetKey;
- (id)referenceIdentifierString;
- (id)referenceSignature;
- (id)authRequest;
- (void)setDownloadURL:(id)arg1;
- (id)wrappedAssetKey;
- (id)downloadBaseURL;
- (void)setUploadReceipt:(id)arg1;
- (id)uploadReceipt;
- (id)authToken;
- (void)setAssetHandleUUID:(id)arg1;
- (void)setFileURL:(id)arg1;
- (id)CKPropertiesDescription;
- (void)setAuthToken:(id)arg1;
- (id)inlineData;
- (id)downloadURLExpiration;
- (id)downloadURL;
- (void)setRecord:(id)arg1;
- (id)record;
- (id)initWithFileURL:(id)arg1 removeWhenDone:(BOOL)arg2;
- (id)initWithDeviceID:(id)arg1 fileID:(id)arg2 generationID:(id)arg3;
- (id)initWithFileURL:(id)arg1 removeWhenDone:(BOOL)arg2 container:(id)arg3;
- (id)signature;
- (void)setSignature:(id)arg1;
- (id)fileID;
- (id)deviceID;
- (void)setWasCached:(BOOL)arg1;
- (BOOL)wasCached;
- (id)initWithFileURL:(id)arg1;
- (id)fileURL;
- (void).cxx_destruct;
- (id)container;
- (void)setContainer:(id)arg1;
- (void)setSize:(unsigned long long)arg1;
- (id)initWithData:(id)arg1;
- (unsigned long long)size;
- (id)owner;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;
- (void)setShouldRemoveWhenDone:(BOOL)arg1;
- (void)setGenerationCountToSave:(id)arg1;
- (id)initWithUnmanagedFileURL:(id)arg1;
- (id)initWithFileURL:(id)arg1 signature:(id)arg2 assetHandleUUID:(id)arg3;
- (BOOL)shouldRemoveWhenDone;
- (id)assetHandleUUID;
- (id)initWithData:(id)arg1 container:(id)arg2;
- (id)initWithFileURL:(id)arg1 container:(id)arg2;
- (id)initWithFileURL:(id)arg1 signature:(id)arg2 assetHandleUUID:(id)arg3 container:(id)arg4;

@end
