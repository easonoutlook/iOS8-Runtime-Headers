/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@class FBSContext;

@interface FBSWorkspaceSceneContextEvent : FBSWorkspaceSceneEvent  {
    FBSContext *_context;
    BOOL _orderOut;
}

@property(retain) FBSContext * context;
@property BOOL orderOut;


- (void)setOrderOut:(BOOL)arg1;
- (BOOL)orderOut;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)setContext:(id)arg1;
- (id)context;
- (id)description;
- (void)dealloc;

@end
