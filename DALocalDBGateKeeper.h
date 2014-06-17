/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSMutableSet, NSString, NSMutableArray, <DADataclassLockWatcher>;

@interface DALocalDBGateKeeper : NSObject  {
    BOOL _claimedOwnershipOfContacts;
    BOOL _claimedOwnershipOfEvents;
    BOOL _claimedOwnershipOfNotes;
    BOOL _claimedOwnershipOfBookmarks;
    <DADataclassLockWatcher> *_contactsLockHolder;
    NSMutableArray *_contactsWaiters;
    NSMutableSet *_waiterIDsExpectingContactsLock;
    <DADataclassLockWatcher> *_eventsLockHolder;
    NSMutableArray *_eventsWaiters;
    NSMutableSet *_waiterIDsExpectingEventsLock;
    <DADataclassLockWatcher> *_notesLockHolder;
    NSMutableArray *_notesWaiters;
    NSMutableSet *_waiterIDsExpectingNotesLock;
    <DADataclassLockWatcher> *_bookmarksLockHolder;
    NSMutableArray *_bookmarksWaiters;
    NSMutableSet *_waiterIDsExpectingBookmarksLock;
    NSString *_unitTestHackRunLoopMode;
}

@property BOOL claimedOwnershipOfContacts;
@property(retain) <DADataclassLockWatcher> * contactsLockHolder;
@property(retain) NSMutableArray * contactsWaiters;
@property(retain) NSMutableSet * waiterIDsExpectingContactsLock;
@property BOOL claimedOwnershipOfEvents;
@property(retain) <DADataclassLockWatcher> * eventsLockHolder;
@property(retain) NSMutableArray * eventsWaiters;
@property(retain) NSMutableSet * waiterIDsExpectingEventsLock;
@property BOOL claimedOwnershipOfNotes;
@property(retain) <DADataclassLockWatcher> * notesLockHolder;
@property(retain) NSMutableArray * notesWaiters;
@property(retain) NSMutableSet * waiterIDsExpectingNotesLock;
@property BOOL claimedOwnershipOfBookmarks;
@property(retain) <DADataclassLockWatcher> * bookmarksLockHolder;
@property(retain) NSMutableArray * bookmarksWaiters;
@property(retain) NSMutableSet * waiterIDsExpectingBookmarksLock;
@property(retain) NSString * unitTestHackRunLoopMode;

+ (id)sharedGateKeeper;

- (id)stateString;
- (void)setUnitTestHackRunLoopMode:(id)arg1;
- (id)unitTestHackRunLoopMode;
- (id)waiterIDsExpectingBookmarksLock;
- (id)bookmarksWaiters;
- (id)bookmarksLockHolder;
- (void)setClaimedOwnershipOfBookmarks:(BOOL)arg1;
- (BOOL)claimedOwnershipOfBookmarks;
- (id)waiterIDsExpectingNotesLock;
- (id)notesWaiters;
- (id)notesLockHolder;
- (void)setClaimedOwnershipOfNotes:(BOOL)arg1;
- (BOOL)claimedOwnershipOfNotes;
- (id)waiterIDsExpectingEventsLock;
- (id)eventsWaiters;
- (id)eventsLockHolder;
- (void)setClaimedOwnershipOfEvents:(BOOL)arg1;
- (BOOL)claimedOwnershipOfEvents;
- (id)waiterIDsExpectingContactsLock;
- (id)contactsWaiters;
- (id)contactsLockHolder;
- (void)setClaimedOwnershipOfContacts:(BOOL)arg1;
- (BOOL)claimedOwnershipOfContacts;
- (void)unregisterWaiterForDataclassLocks:(id)arg1;
- (void)registerWaiter:(id)arg1 forDataclassLocks:(int)arg2 completionHandler:(id)arg3;
- (void)registerPreemptiveWaiter:(id)arg1 forDataclassLocks:(int)arg2 completionHandler:(id)arg3;
- (void)_sendAllClearNotifications;
- (void)relinquishLocksForWaiter:(id)arg1 dataclasses:(int)arg2 moreComing:(BOOL)arg3;
- (void)_registerWaiter:(id)arg1 forDataclassLocks:(int)arg2 preempt:(BOOL)arg3 completionHandler:(id)arg4;
- (void)_notifyWaitersForDataclasses:(id)arg1;
- (void)_setUnitTestHackRunLoopMode:(id)arg1;
- (void)_abortWaiterForWrappers:(id)arg1;
- (BOOL)_canWakenWaiter:(id)arg1;
- (void)setBookmarksLockHolder:(id)arg1;
- (void)setNotesLockHolder:(id)arg1;
- (void)setEventsLockHolder:(id)arg1;
- (void)setContactsLockHolder:(id)arg1;
- (void)setWaiterIDsExpectingBookmarksLock:(id)arg1;
- (void)setWaiterIDsExpectingNotesLock:(id)arg1;
- (void)setWaiterIDsExpectingEventsLock:(id)arg1;
- (void)setWaiterIDsExpectingContactsLock:(id)arg1;
- (void)setBookmarksWaiters:(id)arg1;
- (void)setNotesWaiters:(id)arg1;
- (void)setEventsWaiters:(id)arg1;
- (void)setContactsWaiters:(id)arg1;
- (void)claimedOwnershipOfDataclasses:(int)arg1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
