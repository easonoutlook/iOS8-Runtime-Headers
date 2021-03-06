/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSNumber, NSString, NSArray;

@interface SAConnectionPolicy : AceObject <SAAceSerializable> {
}

@property(copy) NSNumber * globalTimeout;
@property(copy) NSString * policyId;
@property(copy) NSArray * routes;
@property(copy) NSNumber * timeToLive;

+ (id)connectionPolicyWithDictionary:(id)arg1 context:(id)arg2;
+ (id)connectionPolicy;

- (void)setTimeToLive:(id)arg1;
- (id)timeToLive;
- (void)setPolicyId:(id)arg1;
- (id)policyId;
- (void)setGlobalTimeout:(id)arg1;
- (id)globalTimeout;
- (id)encodedClassName;
- (void)setRoutes:(id)arg1;
- (id)routes;
- (id)groupIdentifier;

@end
