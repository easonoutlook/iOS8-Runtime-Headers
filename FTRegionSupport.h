/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class FTMessageDelivery, NSArray;

@interface FTRegionSupport : NSObject  {
    NSArray *_regions;
    FTMessageDelivery *_delivery;
}

@property(readonly) BOOL isLoaded;
@property(readonly) BOOL isLoading;
@property(readonly) NSArray * regions;
@property(retain) FTMessageDelivery * _delivery;
@property(retain) NSArray * _regions;

+ (id)sharedInstance;

- (id)regions;
- (void)set_delivery:(id)arg1;
- (id)_delivery;
- (void)set_regions:(id)arg1;
- (id)_regions;
- (void)flushRegions;
- (void)_buildMessageDeliveryIfNeeded;
- (id)regionForID:(id)arg1;
- (BOOL)isLoaded;
- (BOOL)isLoading;
- (void)dealloc;
- (void)startLoading;

@end
