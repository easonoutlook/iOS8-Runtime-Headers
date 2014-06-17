/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@class NSURL, NSMutableData, NSUUID;

@interface NEFilterSource : NSObject  {
    BOOL _registered;
    int _status;
    NSURL *_url;
    int _direction;
    NSMutableData *_pendingData;
    NSUUID *_flowUUID;
    unsigned long long _socketIdentifier;
    unsigned long long _pendingDataStartIndex;
    unsigned long long _peekIndex;
    unsigned long long _passLength;
}

@property(readonly) int status;
@property(readonly) NSURL * url;
@property(readonly) int direction;
@property(readonly) unsigned long long socketIdentifier;
@property BOOL registered;
@property(retain) NSMutableData * pendingData;
@property(retain) NSUUID * flowUUID;
@property unsigned long long pendingDataStartIndex;
@property unsigned long long peekIndex;
@property unsigned long long passLength;

+ (BOOL)filterRequired;
+ (void)connectToAgentWithCompletionHandler:(id)arg1;
+ (unsigned int)filterUnit;
+ (unsigned int)checkPolicyFilterUnit;
+ (void)initializeGlobals;

- (void)dataCompleteWithCompletionQueue:(id)arg1 completionHandler:(id)arg2;
- (void)addData:(id)arg1 withCompletionQueue:(id)arg2 completionHandler:(id)arg3;
- (id)initWithURL:(id)arg1 direction:(int)arg2 socketIdentifier:(unsigned long long)arg3;
- (int)status;
- (void).cxx_destruct;
- (int)direction;
- (id)url;
- (void)setFlowUUID:(id)arg1;
- (void)setPendingData:(id)arg1;
- (void)prepareAgentWithHandler:(id)arg1;
- (BOOL)sendDataToPluginWithConnection:(id)arg1 completionHandler:(id)arg2;
- (void)setPassLength:(unsigned long long)arg1;
- (void)setPeekIndex:(unsigned long long)arg1;
- (unsigned long long)peekIndex;
- (void)setPendingDataStartIndex:(unsigned long long)arg1;
- (unsigned long long)pendingDataStartIndex;
- (id)pendingData;
- (unsigned long long)passLength;
- (void)setRegistered:(BOOL)arg1;
- (unsigned long long)socketIdentifier;
- (id)flowUUID;
- (BOOL)registered;

@end
