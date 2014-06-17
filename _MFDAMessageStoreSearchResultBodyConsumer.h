/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class <MFDAStreamingContentConsumer>, MFError, MFConditionLock;

@interface _MFDAMessageStoreSearchResultBodyConsumer : NSObject <DAMailboxFetchSearchResultConsumer, DAMailboxStreamingContentConsumer> {
    MFConditionLock *_doneCondition;
    <MFDAStreamingContentConsumer> *_streamConsumer;
    MFError *_error;
}

@property(retain) MFError * error;
@property(retain) <MFDAStreamingContentConsumer> * streamConsumer;


- (id)error;
- (void)setError:(id)arg1;
- (void)searchResultFetchedWithResponses:(id)arg1;
- (void)didEndStreamingForMailMessage:(id)arg1;
- (void)consumeData:(char *)arg1 length:(int)arg2 format:(int)arg3 mailMessage:(id)arg4;
- (BOOL)shouldBeginStreamingForMailMessage:(id)arg1 format:(int)arg2;
- (id)streamConsumer;
- (void)setStreamConsumer:(id)arg1;
- (BOOL)waitUntilDoneBeforeDate:(id)arg1;
- (void)actionFailed:(int)arg1 forTask:(id)arg2 error:(id)arg3;
- (void)waitUntilDone;
- (void)dealloc;
- (id)init;

@end
