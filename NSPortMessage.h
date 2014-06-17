/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSArray, NSMutableArray, NSPort;

@interface NSPortMessage : NSObject  {
    NSPort *localPort;
    NSPort *remotePort;
    NSMutableArray *components;
    unsigned int msgid;
    void *reserved2;
    void *reserved;
}

@property(copy,readonly) NSArray * components;
@property(retain,readonly) NSPort * receivePort;
@property(retain,readonly) NSPort * sendPort;
@property unsigned int msgid;


- (id)components;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (BOOL)sendBeforeDate:(id)arg1;
- (unsigned int)msgid;
- (id)receivePort;
- (id)sendPort;
- (id)initWithReceivePort:(id)arg1 sendPort:(id)arg2 components:(id)arg3;
- (void)setMsgid:(unsigned int)arg1;
- (id)initWithSendPort:(id)arg1 receivePort:(id)arg2 components:(id)arg3;

@end
