/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@class NSObject<OS_xpc_object>, NSArray;

@interface BKSTouchDeliveryPolicy : NSObject <NSSecureCoding> {
    int _type;
    unsigned int _childContextId;
    unsigned int _hostContextId;
    NSArray *_policies;
    NSObject<OS_xpc_object> *_assertionEndpoint;
}

@property(retain) NSObject<OS_xpc_object> * assertionEndpoint;

+ (id)policyByCombiningPolicies:(id)arg1;
+ (id)policyRequiringSharingOfTouchesDeliveredToChildContextId:(unsigned int)arg1 withHostContextId:(unsigned int)arg2;
+ (BOOL)supportsSecureCoding;

- (id)assertionEndpoint;
- (id)policyExcludingPolicy:(id)arg1;
- (id)policyIncludingPolicy:(id)arg1;
- (id)policyByMappingContainedPoliciesWithBlock:(id)arg1;
- (id)reducePolicyToObjectWithBlock:(id)arg1;
- (id)matchOverridePolicy:(id)arg1 orCombinedPolicy:(id)arg2;
- (void)setAssertionEndpoint:(id)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)dealloc;

@end