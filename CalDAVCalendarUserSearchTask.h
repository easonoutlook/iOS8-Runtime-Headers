/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class NSSet;

@interface CalDAVCalendarUserSearchTask : CoreDAVPropertyFindBaseTask  {
    NSSet *_searchStrings;
    BOOL _findAttendees;
    BOOL _findUsers;
    BOOL _findResources;
    BOOL _findGroups;
    BOOL _findLocations;
    unsigned int _resultLimit;
}

@property BOOL findAttendees;
@property BOOL findLocations;
@property BOOL findUsers;
@property BOOL findGroups;
@property BOOL findResources;
@property unsigned int resultLimit;
@property(retain) NSSet * searchStrings;

+ (BOOL)tokensAreLegal:(id)arg1;

- (id)extraAttributes;
- (id)requestBody;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)httpMethod;
- (id)initWithSearchStrings:(id)arg1 atURL:(id)arg2;
- (BOOL)findAttendees;
- (void)setFindAttendees:(BOOL)arg1;
- (id)searchStrings;
- (void)setSearchStrings:(id)arg1;
- (unsigned int)resultLimit;
- (void)setResultLimit:(unsigned int)arg1;
- (void)dealloc;
- (id)searchItems;
- (void)setFindUsers:(BOOL)arg1;
- (BOOL)findUsers;
- (void)setFindResources:(BOOL)arg1;
- (BOOL)findResources;
- (void)setFindLocations:(BOOL)arg1;
- (BOOL)findLocations;
- (void)setFindGroups:(BOOL)arg1;
- (BOOL)findGroups;

@end
