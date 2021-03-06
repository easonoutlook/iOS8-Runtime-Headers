/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class <CalDAVPrincipal>, NSMutableSet;

@interface CalDAVOperation : CoreDAVTaskGroup  {
    <CalDAVPrincipal> *_principal;
    BOOL _isCancellingTaskGroups;
    NSMutableSet *_outstandingTaskGroups;
}

@property(readonly) <CalDAVPrincipal> * principal;
@property(readonly) NSMutableSet * outstandingTaskGroups;


- (id)initWithPrincipal:(id)arg1;
- (id)outstandingTaskGroups;
- (void)cancelTaskGroup;
- (void)bailWithError:(id)arg1;
- (id)principal;
- (void)_tearDownAllTaskGroupsWithBlock:(id)arg1;
- (void)dealloc;
- (id)init;

@end
