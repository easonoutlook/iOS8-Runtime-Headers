/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class EAGLContext;

@interface TSCH3DGLESContext : TSCH3DGLContext  {
    EAGLContext *mContext;
}

+ (void)clearCurrentContext;
+ (BOOL)isCurrentContextValid;

- (BOOL)isBound;
- (void)present;
- (void)dealloc;
- (id)init;
- (id)capabilitiesForExtensions:(id)arg1;
- (id)extensionsForCurrentVirtualScreen;
- (void)setVirtualScreen:(int)arg1;
- (int)virtualScreen;
- (id)bindReturningPreviousContext;
- (void)restoreEAGLContext:(id)arg1;

@end
