/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class NSSet, CalDAVPrincipalSearchPropertySet;

@interface CalDAVPrincipalPropertySearchTask : CoreDAVPrincipalPropertySearchTask  {
    NSSet *_searchTypes;
    NSSet *_searchStrings;
    CalDAVPrincipalSearchPropertySet *_serverSupportSet;
    id _searchContext;
}

@property(retain) id searchContext;
@property(retain) NSSet * searchTypes;
@property(retain) NSSet * searchStrings;
@property(retain) CalDAVPrincipalSearchPropertySet * serverSupportSet;


- (id)extraAttributes;
- (id)searchTypes;
- (id)searchContext;
- (void)setSearchContext:(id)arg1;
- (id)initWithSearchStrings:(id)arg1 searchTypes:(id)arg2 serverSupportSet:(id)arg3 atURL:(id)arg4;
- (id)searchStrings;
- (id)serverSupportSet;
- (void)setServerSupportSet:(id)arg1;
- (void)setSearchStrings:(id)arg1;
- (void)setSearchTypes:(id)arg1;
- (void)dealloc;
- (id)searchItems;

@end
