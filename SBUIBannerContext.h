/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@class <SBUIBannerSource>, <SBUIBannerTarget>, NSString, SBUIBannerItem;

@interface SBUIBannerContext : NSObject  {
    SBUIBannerItem *_item;
    <SBUIBannerSource> *_source;
    <SBUIBannerTarget> *_target;
    BOOL _isValid;
    BOOL _requestsModalPresentation;
    NSString *_presentingActionIdentifier;
}

@property(retain,readonly) SBUIBannerItem * item;
@property(retain,readonly) <SBUIBannerSource> * source;
@property(retain,readonly) <SBUIBannerTarget> * target;
@property BOOL requestsModalPresentation;
@property(copy) NSString * presentingActionIdentifier;
@property(getter=isValid,readonly) BOOL valid;


- (void)setPresentingActionIdentifier:(id)arg1;
- (id)presentingActionIdentifier;
- (void)setRequestsModalPresentation:(BOOL)arg1;
- (BOOL)requestsModalPresentation;
- (id)initWithItem:(id)arg1 source:(id)arg2 target:(id)arg3;
- (id)initWithItem:(id)arg1 source:(id)arg2 target:(id)arg3 presentingActionIdentifier:(id)arg4 requestModalPresentation:(BOOL)arg5;
- (id)source;
- (id)item;
- (id)target;
- (BOOL)isValid;
- (void)invalidate;
- (id)description;
- (void)dealloc;

@end
