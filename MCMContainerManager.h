/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MobileContainerManager.framework/MobileContainerManager
 */

@class NSXPCConnection;

@interface MCMContainerManager : NSObject  {
    NSXPCConnection *_xpcConnection;
}

@property(retain) NSXPCConnection * xpcConnection;
@property(retain) NSXPCConnection * xpcConnection;

+ (id)defaultManager;

- (void)setXpcConnection:(id)arg1;
- (id)xpcConnection;
- (BOOL)restoreContainer:(id)arg1 contentClass:(int)arg2 identifier:(id)arg3 info:(id)arg4 error:(id*)arg5;
- (BOOL)restoreContainer:(id)arg1 error:(id*)arg2;
- (BOOL)replaceContainer:(id)arg1 withContainer:(id)arg2 error:(id*)arg3;
- (void)deleteContainers:(id)arg1 withCompletion:(id)arg2;
- (id)temporaryContainersWithClass:(int)arg1 error:(id*)arg2;
- (id)containersWithClass:(int)arg1 error:(id*)arg2;
- (id)temporaryContainerWithContentClass:(int)arg1 identifier:(id)arg2 existed:(BOOL*)arg3 error:(id*)arg4;
- (id)containerWithContentClass:(int)arg1 identifier:(id)arg2 createIfNecessary:(BOOL)arg3 existed:(BOOL*)arg4 error:(id*)arg5;
- (id)containerWithContentClass:(int)arg1 identifier:(id)arg2 error:(id*)arg3;
- (id)_containersWithClass:(int)arg1 temporary:(BOOL)arg2 error:(id*)arg3;
- (void).cxx_destruct;
- (id)init;

@end