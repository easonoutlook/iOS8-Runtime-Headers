/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, SAWebWebSearchResult;

@interface SAWebObject : SADomainObject  {
}

@property(copy) NSString * query;
@property(retain) SAWebWebSearchResult * results;

+ (id)objectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)object;

- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
- (id)encodedClassName;
- (void)setResults:(id)arg1;
- (id)results;
- (void)setQuery:(id)arg1;
- (id)query;
- (id)groupIdentifier;

@end
