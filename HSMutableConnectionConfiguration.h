/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@class NSString, SSAccount, NSDictionary, NSNumber, NSURL;

@interface HSMutableConnectionConfiguration : HSConnectionConfiguration  {
}

@property(retain) SSAccount * account;
@property(copy) NSDictionary * urlBag;
@property(copy) NSURL * baseURL;
@property(copy) NSString * buildIdentifier;
@property(copy) NSString * purchaseClientIdentifier;
@property(copy) NSDictionary * cookieHeaders;
@property(copy) NSString * userAgent;
@property long long requestReason;
@property(retain) NSNumber * familyMemberStoreID;


- (void)setFamilyMemberStoreID:(id)arg1;
- (void)setRequestReason:(long long)arg1;
- (void)setUrlBag:(id)arg1;
- (void)setCookieHeaders:(id)arg1;
- (void)setPurchaseClientIdentifier:(id)arg1;
- (void)setBuildIdentifier:(id)arg1;
- (id)familyMemberStoreID;
- (long long)requestReason;
- (id)cookieHeaders;
- (id)purchaseClientIdentifier;
- (id)buildIdentifier;
- (void)setBaseURL:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (void)setUserAgent:(id)arg1;
- (void)setAccount:(id)arg1;
- (id)account;
- (id)baseURL;
- (id)userAgent;
- (id)urlBag;

@end
