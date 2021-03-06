/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSArray, NSString, NSMutableData, MFActivityMonitor;

@interface MFDAMailAccountSyncConsumer : MFDAMailAccountConsumer <DAMailboxRequestConsumer, DAMailboxStreamingContentConsumer> {
    NSArray *_requests;
    NSArray *_consumers;
    NSString *_tag;
    NSString *_accountID;
    MFActivityMonitor *_monitor;
    id _streamConsumer;
    NSMutableData *_bodyData;
    BOOL _moreAvailable;
    BOOL _receivedFirstItem;
    BOOL _firstSyncBatch;
    int _syncKeyResets;
    int _serverErrors;
}

@property(readonly) NSString * tag;
@property(retain) id streamConsumer;
@property(readonly) BOOL moreAvailable;


- (void)partialResultsForMailbox:(id)arg1 actions:(id)arg2 responses:(id)arg3 percentComplete:(double)arg4 moreAvailable:(BOOL)arg5;
- (void)resultsForMailbox:(id)arg1 newTag:(id)arg2 actions:(id)arg3 responses:(id)arg4 percentComplete:(double)arg5 moreAvailable:(BOOL)arg6 sentBytesCount:(unsigned int)arg7 receivedBytesCount:(unsigned int)arg8;
- (void)handleSyncResponses:(id)arg1;
- (id)originalThreadMonitor;
- (id)actionsConsumer;
- (void)_setTag:(id)arg1;
- (void)didEndStreamingForMailMessage:(id)arg1;
- (void)consumeData:(char *)arg1 length:(int)arg2 format:(int)arg3 mailMessage:(id)arg4;
- (BOOL)shouldBeginStreamingForMailMessage:(id)arg1 format:(int)arg2;
- (id)streamConsumer;
- (void)setStreamConsumer:(id)arg1;
- (void)taskFailed:(id)arg1 statusCode:(int)arg2 error:(id)arg3;
- (BOOL)moreAvailable;
- (id)initWithCurrentTag:(id)arg1 accountID:(id)arg2 requests:(id)arg3 consumers:(id)arg4;
- (void)reset;
- (id)tag;
- (void)dealloc;

@end
