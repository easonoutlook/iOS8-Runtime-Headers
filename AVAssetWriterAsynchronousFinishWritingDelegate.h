/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class AVAssetWriterFigAssetWriterNotificationHandler, AVWeakReference;

@interface AVAssetWriterAsynchronousFinishWritingDelegate : NSObject <AVAssetWriterFigAssetWriterNotificationHandlerDelegate, AVAssetWriterFinishWritingHelperDelegate> {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _handler;

    int _handlerCalled;
    AVAssetWriterFigAssetWriterNotificationHandler *_notificationHandler;
    AVWeakReference *_weakReferenceToHelper;
    AVWeakReference *_weakReferenceToSelf;
}


- (id)initWithHandler:(id)arg1;
- (void)dealloc;
- (void)_callHandlerIfNotCalled;
- (void)finishWritingHelperDidCancelFinishWriting:(id)arg1;
- (void)finishWritingHelperDidFail:(id)arg1;
- (void)finishWritingHelper:(id)arg1 didInitiateFinishWritingForFigAssetWriter:(struct OpaqueFigAssetWriter { }*)arg2;
- (BOOL)shouldHelperPrepareInputs;
- (void)didReceiveFigAssetWriterNotificationWithSuccess:(BOOL)arg1 error:(id)arg2;

@end
