/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@class DADConnection, NSString, NSConditionLock, DAContactsSearchQuery, NSMutableArray, <ABPredicateDelegate>;

@interface ABServerSearchPredicate : ABPredicate <DASearchQueryConsumer> {
    void *_source;
    NSString *_accountIdentifier;
    NSString *_searchString;
    BOOL _includeSourceInResults;
    DADConnection *_connection;
    DAContactsSearchQuery *_searchQuery;
    NSMutableArray *_searchResults;
    NSConditionLock *_doneLock;
    int _error;
    <ABPredicateDelegate> *_delegate;
    BOOL _includePhotosInResults;
}

@property void* source;
@property(copy) NSString * accountIdentifier;
@property(copy) NSString * searchString;
@property BOOL includeSourceInResults;
@property BOOL includePhotosInResults;
@property <ABPredicateDelegate> * delegate;
@property(readonly) int error;
@property(retain) DADConnection * connection;


- (int)error;
- (void)searchQuery:(id)arg1 finishedWithError:(id)arg2;
- (void)searchQuery:(id)arg1 returnedResults:(id)arg2;
- (id)accountIdentifier;
- (void)setSearchString:(id)arg1;
- (void)setConnection:(id)arg1;
- (id)connection;
- (void)setSource:(void*)arg1;
- (void*)source;
- (id)searchString;
- (id)delegate;
- (void)setAccountIdentifier:(id)arg1;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (BOOL)includeSourceInResults;
- (id)initWithSearchString:(id)arg1 source:(void*)arg2 account:(id)arg3;
- (int)_errorForDAStatusCode:(int)arg1;
- (void)_searchQueryIsDone;
- (void)runPredicateWithDelegate:(id)arg1;
- (void)runPredicate;
- (BOOL)includePhotosInResults;
- (id)initWithSearchString:(id)arg1 source:(void*)arg2 account:(id)arg3 includeSourceInResults:(BOOL)arg4;
- (void)setIncludePhotosInResults:(BOOL)arg1;
- (void)setIncludeSourceInResults:(BOOL)arg1;
- (void)ab_runPredicateWithSortOrder:(unsigned int)arg1 inAddressBook:(void*)arg2 withDelegate:(id)arg3;
- (id)initWithSearchString:(id)arg1 source:(void*)arg2 account:(id)arg3 includeSourceInResults:(BOOL)arg4 includePhotosInResults:(BOOL)arg5;

@end
