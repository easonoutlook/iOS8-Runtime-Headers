/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class NSMutableSet;

@interface CalDAVCalendarServerInviteItem : CoreDAVItem  {
    NSMutableSet *_users;
}

@property(retain) NSMutableSet * users;


- (id)copyParseRules;
- (id)initWithNameSpace:(id)arg1 andName:(id)arg2;
- (void)addUser:(id)arg1;
- (void)setUsers:(id)arg1;
- (id)users;
- (id)description;
- (void)dealloc;
- (id)init;

@end
