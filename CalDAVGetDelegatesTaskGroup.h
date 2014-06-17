/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class NSMutableArray;

@interface CalDAVGetDelegatesTaskGroup : CalDAVGetDelegatesBaseTaskGroup  {
    int _state;
    NSMutableArray *_nestedGroupPrincipalURLs;
}

@property int state;
@property(retain) NSMutableArray * nestedGroupPrincipalURLs;


- (void)_finishWithError:(id)arg1 state:(int)arg2;
- (void)taskGroup:(id)arg1 didFinishWithError:(id)arg2;
- (void)startTaskGroup;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)_getChildProperties;
- (void)_expandProperties;
- (void)_getGroupMembershipForURL:(id)arg1 state:(int)arg2;
- (id)nestedGroupPrincipalURLs;
- (void)setNestedGroupPrincipalURLs:(id)arg1;
- (id)initWithAccountInfoProvider:(id)arg1 principalURL:(id)arg2 taskManager:(id)arg3;
- (void)setState:(int)arg1;
- (int)state;
- (void)dealloc;

@end
