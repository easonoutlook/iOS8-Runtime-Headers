/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@class NSArray, NSString, NSDictionary, NSNumber;

@interface AAProvisioningResponse : AAAuthenticationResponse  {
    NSDictionary *_icloud;
}

@property(readonly) NSArray * provisionedDataclasses;
@property(readonly) NSDictionary * dataclassProperties;
@property(readonly) NSString * appleID;
@property(readonly) NSArray * appleIDAliases;
@property(readonly) NSString * firstName;
@property(readonly) NSString * lastName;
@property(readonly) NSString * primaryEmail;
@property(readonly) NSNumber * primaryEmailVerified;
@property(readonly) NSString * iCloudAuthToken;
@property(readonly) NSString * fmipAuthToken;


- (id)lastName;
- (id)firstName;
- (id)appleID;
- (id)provisionedDataclasses;
- (id)primaryEmail;
- (id)iCloudAuthToken;
- (id)fmipAuthToken;
- (id)primaryEmailVerified;
- (id)appleIDAliases;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;
- (id)dataclassProperties;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end
