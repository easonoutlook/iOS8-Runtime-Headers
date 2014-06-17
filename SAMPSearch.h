/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray;

@interface SAMPSearch : SADomainCommand  {
}

@property(copy) NSArray * constraints;
@property int maxResults;
@property(copy) NSArray * searchTypes;
@property BOOL strict;

+ (id)search;
+ (id)searchWithDictionary:(id)arg1 context:(id)arg2;

- (void)setStrict:(BOOL)arg1;
- (BOOL)strict;
- (id)searchTypes;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)constraints;
- (void)setConstraints:(id)arg1;
- (void)setSearchTypes:(id)arg1;
- (id)groupIdentifier;
- (int)maxResults;
- (void)setMaxResults:(int)arg1;

@end