/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@class NSString;

@interface SBSAssertion : NSObject  {
    NSString *_assertionName;
    NSString *_reason;
    unsigned int _port;
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    } _lock;
}

@property(readonly) NSString * assertionName;
@property(readonly) NSString * reason;


- (id)initWithAssertionName:(id)arg1 reason:(id)arg2 port:(unsigned int)arg3;
- (id)assertionName;
- (id)reason;
- (void)invalidate;
- (void)dealloc;

@end
