/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/UserFS.framework/UserFS
 */

@class UserFSItem, NSObject<OS_xpc_object>;

@interface UserFSStream : NSObject  {
    UserFSItem *_item;
    NSObject<OS_xpc_object> *_connection;
    unsigned long long _length;
}

@property(retain) UserFSItem * item;
@property(readonly) BOOL writable;
@property unsigned long long length;
@property(retain) NSObject<OS_xpc_object> * connection;


- (long)_readBytesUpToLength:(unsigned long)arg1 atOffset:(unsigned long long)arg2 toBuffer:(void*)arg3 error:(id*)arg4;
- (id)initWithUserFSItem:(id)arg1 length:(unsigned long long)arg2 connection:(id)arg3;
- (void)_cancelConnection;
- (void)setConnection:(id)arg1;
- (id)connection;
- (void).cxx_destruct;
- (void)setLength:(unsigned long long)arg1;
- (void)setItem:(id)arg1;
- (id)item;
- (unsigned long long)length;
- (void)dealloc;
- (BOOL)writable;
- (BOOL)closeAndReturnError:(id*)arg1;
- (long)readBytesOfLength:(unsigned long)arg1 atOffset:(unsigned long long)arg2 toBuffer:(void*)arg3 error:(id*)arg4;

@end