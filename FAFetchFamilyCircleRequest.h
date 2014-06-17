/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
 */

@class NSArray;

@interface FAFetchFamilyCircleRequest : FAFamilyCircleRequest  {
    BOOL _forceServerFetch;
    NSArray *_expectedDSIDs;
}

@property(copy) NSArray * expectedDSIDs;
@property BOOL forceServerFetch;


- (void)setForceServerFetch:(BOOL)arg1;
- (void)setExpectedDSIDs:(id)arg1;
- (BOOL)forceServerFetch;
- (id)expectedDSIDs;
- (void)startRequestWithCompletionHandler:(id)arg1;
- (void).cxx_destruct;

@end
