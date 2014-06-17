/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class NSString, NSSet, CalDAVPrincipalEmailDetailsResult, NSURL;

@interface CalDAVGetPrincipalEmailDetailsTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate> {
    CalDAVPrincipalEmailDetailsResult *_principalResult;
    NSURL *_principalURL;
}

@property(retain) NSURL * principalURL;
@property(retain,readonly) NSString * displayName;
@property(retain,readonly) NSSet * addresses;
@property(retain) CalDAVPrincipalEmailDetailsResult * principalResult;


- (id)principalURL;
- (void)setPrincipalURL:(id)arg1;
- (void)startTaskGroup;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (id)principalResult;
- (void)_processPropFind:(id)arg1;
- (void)setPrincipalResult:(id)arg1;
- (id)initWithAccountInfoProvider:(id)arg1 principalURL:(id)arg2 taskManager:(id)arg3;
- (id)displayName;
- (id)addresses;
- (void)dealloc;
- (void)_finishWithError:(id)arg1;

@end
