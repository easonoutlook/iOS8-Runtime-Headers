/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class PFUbiquityKnowledgeVector, NSString, PFUbiquityLocation;

@interface PFUbiquityBaselineHeuristics : NSObject  {
    NSString *_localPeerID;
    NSString *_storeName;
    PFUbiquityLocation *_ubiquityRootLocation;
    NSString *_modelVersionHash;
    int _numRequiredTransactions;
    long long _storeSize;
    long long _logSize;

  /* Error parsing encoded ivar type info: D */
    /* Warning: Unrecognized filer type: 'D' using 'void*' */ void*_logToStoreSizeRatio;

    int _minLogBytes;
    PFUbiquityKnowledgeVector *_currentBaselineKV;
    PFUbiquityKnowledgeVector *_currentKV;
}

@property(readonly) NSString * localPeerID;
@property(readonly) NSString * storeName;
@property(readonly) PFUbiquityLocation * ubiquityRootLocation;
@property(readonly) NSString * modelVersionHash;
@property int numRequiredTransactions;
@property(readonly) long long storeSize;
@property(readonly) long long logSize;
@property /* Warning: Unrecognized filer type: 'D' using 'void*' */ void* logToStoreSizeRatio;
@property int minLogBytes;
@property(retain) PFUbiquityKnowledgeVector * currentBaselineKV;
@property(retain) PFUbiquityKnowledgeVector * currentKV;


- (id)copy;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)currentKV;
- (id)currentBaselineKV;
- (int)minLogBytes;
- (/* Warning: Unrecognized filer type: 'D' using 'void*' */ void*)logToStoreSizeRatio;
     /* Encoded args for previous method: D8@0:4 */

- (long long)logSize;
- (long long)storeSize;
- (int)numRequiredTransactions;
- (id)ubiquityRootLocation;
- (id)storeName;
- (id)localPeerID;
- (BOOL)canRollBaseline:(id*)arg1;
- (void)updateHeuristics;
- (BOOL)logsConsumeEnoughDiskSpace;
- (BOOL)haveEnoughTransactionsToRoll;
- (id)modelVersionHash;
- (long long)bytesForFileAtPath:(id)arg1;
- (void)setMinLogBytes:(int)arg1;
- (void)setLogToStoreSizeRatio:(/* Warning: Unrecognized filer type: 'D' using 'void*' */ void*)arg1;
     /* Encoded args for previous method: v16@0:4D8 */

- (void)setLogSize:(long long)arg1;
- (void)setStoreSize:(long long)arg1;
- (void)setNumRequiredTransactions:(int)arg1;
- (id)initWithLocalPeerID:(id)arg1 storeName:(id)arg2 modelVersionHash:(id)arg3 andUbiquityRootLocation:(id)arg4;
- (void)setCurrentKV:(id)arg1;
- (void)setCurrentBaselineKV:(id)arg1;

@end
