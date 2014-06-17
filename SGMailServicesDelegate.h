/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSError, NSObject<OS_dispatch_semaphore>;

@interface SGMailServicesDelegate : NSObject <MSSearchDelegate> {
    NSObject<OS_dispatch_semaphore> *_done;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _callback;

    BOOL _ignoreEmpty;
    NSError *_error;
}

@property(readonly) NSError * error;


- (id)error;
- (id)initWithCallback:(id)arg1 ignoreEmpty:(BOOL)arg2;
- (void)search:(id)arg1 didFinishWithError:(id)arg2;
- (BOOL)search:(id)arg1 didFindResults:(id)arg2;
- (void)wait;
- (void).cxx_destruct;

@end
