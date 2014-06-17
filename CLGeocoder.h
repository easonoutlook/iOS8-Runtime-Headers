/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@class CLGeocoderInternal;

@interface CLGeocoder : NSObject  {
    CLGeocoderInternal *_internal;
}

@property(getter=isGeocoding,readonly) BOOL geocoding;


- (void)dealloc;
- (id)init;
- (void)_notifyResult:(id)arg1;
- (void)_notifyError:(id)arg1;
- (void)geocodeAddressDictionary:(id)arg1 completionHandler:(id)arg2;
- (void)reverseGeocodeLocation:(id)arg1 completionHandler:(id)arg2;
- (BOOL)isGeocoding;
- (void)cancelGeocode;
- (void)geocodeAddressString:(id)arg1 completionHandler:(id)arg2;
- (void)_notifyPartialResult:(id)arg1;
- (void)reverseGeocodeLocation:(id)arg1 localResultsOnly:(BOOL)arg2 completionHandler:(id)arg3;
- (void)_notifyResult:(id)arg1 error:(id)arg2;
- (void)_notifyCancel;
- (void)geocodeAddressString:(id)arg1 inRegion:(id)arg2 completionHandler:(id)arg3;
- (void)_ticket:(id)arg1 didReturnError:(id)arg2;
- (void)_ensureMainThreadExecutionContextForBlock:(id)arg1;
- (void)_ticket:(id)arg1 didReturnGeoMapItems:(id)arg2;
- (void)_ticket:(id)arg1 didReturnError:(id)arg2 partialResultForLocation:(id)arg3;
- (void)_notifyNoResult;
- (void)reverseGeocodeLocation:(id)arg1 heading:(double)arg2 completionHandler:(id)arg3;
- (void)reverseGeocodeLocation:(id)arg1 heading:(double)arg2 localResultsOnly:(BOOL)arg3 completionHandler:(id)arg4;

@end