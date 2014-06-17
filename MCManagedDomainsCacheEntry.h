/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSNumber, NSString;

@interface MCManagedDomainsCacheEntry : NSObject  {
    BOOL _subdomainsMatch;
    NSString *_domain;
    NSString *_path;
    NSNumber *_port;
}

@property BOOL subdomainsMatch;
@property(retain) NSString * domain;
@property(retain) NSString * path;
@property(retain) NSNumber * port;

+ (id)normalizedPatternString:(id)arg1;

- (BOOL)matchesURL:(id)arg1;
- (void)setSubdomainsMatch:(BOOL)arg1;
- (BOOL)subdomainsMatch;
- (id)initWithPattern:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setPort:(id)arg1;
- (id)port;
- (void).cxx_destruct;
- (void)setPath:(id)arg1;
- (id)domain;
- (id)path;
- (id)description;

@end