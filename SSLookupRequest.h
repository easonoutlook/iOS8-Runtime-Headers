/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class SSAuthenticationContext, SSLookupProperties, NSString;

@interface SSLookupRequest : SSRequest <SSXPCCoding> {
    SSAuthenticationContext *_authenticationContext;
    int _personalizationStyle;
    SSLookupProperties *_properties;
    int _resultFilters;
}

@property(copy) NSString * keyProfile;
@property int localizationStyle;
@property(copy) SSAuthenticationContext * authenticationContext;
@property BOOL authenticatesIfNeeded;
@property int personalizationStyle;
@property int resultFilters;
@property(copy,readonly) SSLookupProperties * _lookupProperties;


- (void)setAuthenticatesIfNeeded:(BOOL)arg1;
- (BOOL)authenticatesIfNeeded;
- (int)localizationStyle;
- (int)personalizationStyle;
- (id)valueForRequestParameter:(id)arg1;
- (id)authenticationContext;
- (void)setResultFilters:(int)arg1;
- (int)resultFilters;
- (void)_setTimeoutInterval:(id)arg1;
- (id)_lookupProperties;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (id)keyProfile;
- (BOOL)start;
- (void)dealloc;
- (id)init;
- (void)startWithLookupBlock:(id)arg1;
- (void)setValue:(id)arg1 forRequestParameter:(id)arg2;
- (void)setLocalizationStyle:(int)arg1;
- (void)setPersonalizationStyle:(int)arg1;
- (void)setKeyProfile:(id)arg1;
- (void)startWithCompletionBlock:(id)arg1;
- (void)setAuthenticationContext:(id)arg1;
- (id)initWithLocation:(id)arg1;

@end
