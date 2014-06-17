/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@class NSObject<OS_dispatch_queue>, NSString, NSObject<OS_xpc_object>;

@interface TURemoteAppender : NSObject <TUAppender> {
    NSObject<OS_xpc_object> *_connection;
    NSString *_name;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
}


- (void)setAppenderDelegate:(id)arg1;
- (void)logWithIdentifier:(id)arg1 pid:(int)arg2 date:(id)arg3 level:(int)arg4 topic:(id)arg5 text:(id)arg6 backtrace:(id)arg7;
- (id)initWithName:(id)arg1;
- (void)flush;
- (void)dealloc;

@end
