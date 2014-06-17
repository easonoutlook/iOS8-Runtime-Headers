/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SAWebSiteSearch : SADomainCommand  {
}

@property(copy) NSString * provider;
@property(copy) NSString * query;

+ (id)siteSearchWithDictionary:(id)arg1 context:(id)arg2;
+ (id)siteSearch;

- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)provider;
- (void)setQuery:(id)arg1;
- (id)query;
- (void)setProvider:(id)arg1;
- (id)groupIdentifier;

@end
