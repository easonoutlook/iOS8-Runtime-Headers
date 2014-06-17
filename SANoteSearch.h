/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSDate, NSString;

@interface SANoteSearch : SADomainCommand  {
}

@property(copy) NSString * contentQuery;
@property(copy) NSDate * fromDate;
@property(copy) NSDate * toDate;

+ (id)search;
+ (id)searchWithDictionary:(id)arg1 context:(id)arg2;

- (void)setContentQuery:(id)arg1;
- (id)contentQuery;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setToDate:(id)arg1;
- (void)setFromDate:(id)arg1;
- (id)toDate;
- (id)fromDate;
- (id)groupIdentifier;

@end
