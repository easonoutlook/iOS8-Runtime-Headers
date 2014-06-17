/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@class NSXPCInterface, Protocol;

@interface SFCompanionInterface : NSObject  {
    NSXPCInterface *_interface;
}

@property Protocol * protocol;
@property(retain) NSXPCInterface * interface;

+ (id)interfaceWithProtocol:(id)arg1;

- (id)initWithNSXPCInterface:(id)arg1;
- (void)setProtocol:(id)arg1;
- (id)protocol;
- (void)setInterface:(id)arg1;
- (id)interface;
- (void)setInterface:(id)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned int)arg3 ofReply:(BOOL)arg4;
- (void)setClasses:(id)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned int)arg3 ofReply:(BOOL)arg4;
- (void)dealloc;
- (id)interfaceForSelector:(SEL)arg1 argumentIndex:(unsigned int)arg2 ofReply:(BOOL)arg3;
- (id)classesForSelector:(SEL)arg1 argumentIndex:(unsigned int)arg2 ofReply:(BOOL)arg3;

@end