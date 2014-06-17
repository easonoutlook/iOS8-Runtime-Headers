/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVRunLoopConditionRunLoopState : NSObject  {
    struct __CFRunLoop { } *_runLoop;
    struct __CFRunLoopSource { } *_signalSource;
    BOOL _signaled;
}

@property(readonly) struct __CFRunLoop { }* runLoop;
@property struct __CFRunLoopSource { }* signalSource;
@property BOOL signaled;

+ (id)runLoopStateWithRunLoop:(struct __CFRunLoop { }*)arg1;

- (void)dealloc;
- (void)setSignaled:(BOOL)arg1;
- (BOOL)signaled;
- (void)setSignalSource:(struct __CFRunLoopSource { }*)arg1;
- (struct __CFRunLoopSource { }*)signalSource;
- (struct __CFRunLoop { }*)runLoop;
- (id)initWithRunLoop:(struct __CFRunLoop { }*)arg1;

@end
