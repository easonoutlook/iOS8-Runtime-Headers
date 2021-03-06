/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@class <MFGuaranteedCollectingDataConsumer>, MFLock;

@interface MFMutableFilterDataConsumer : MFBaseFilterDataConsumer <MFGuaranteedCollectingDataConsumer> {
    <MFGuaranteedCollectingDataConsumer> *_mainConsumer;
    MFLock *_consumerLock;
    BOOL _isDone;
}


- (id)initWithMainConsumer:(id)arg1;
- (void)addDataConsumer:(id)arg1;
- (int)appendData:(id)arg1;
- (void)done;
- (id)data;
- (void)dealloc;

@end
