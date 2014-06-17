/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapService : NSObject  {
}

+ (id)sharedService;

- (void)submitUsageForTraits:(id)arg1;
- (id)ticketForSectionedAddressSearchFragment:(id)arg1 traits:(id)arg2;
- (id)ticketForSectionedAutoCompleteSearchFragment:(id)arg1 traits:(id)arg2;
- (id)ticketForSectionedInstantSearchFragment:(id)arg1 traits:(id)arg2;
- (id)ticketForInterleavedAddressSearchFragment:(id)arg1 traits:(id)arg2;
- (id)ticketForInterleavedAutoCompleteSearchFragment:(id)arg1 traits:(id)arg2;
- (id)ticketForInterleavedInstantSearchFragment:(id)arg1 traits:(id)arg2;
- (id)ticketForMapItemToRefine:(id)arg1 traits:(id)arg2;
- (id)ticketForSearchQuery:(id)arg1 suggestionPrefix:(id)arg2 maxResults:(unsigned int)arg3 traits:(id)arg4;
- (id)ticketForSearchQuery:(id)arg1 completionItem:(id)arg2 localSearchProviderID:(int)arg3 maxResults:(unsigned int)arg4 traits:(id)arg5;
- (id)ticketForOptInToProblemSubmissionID:(id)arg1 allowNotificationsAtPushToken:(id)arg2 allowContactBackAtEmailAddress:(id)arg3 traits:(id)arg4;
- (id)ticketForProblem:(id)arg1 placeForProblemContext:(id)arg2 traits:(id)arg3;
- (id)_cl_ticketForReverseGeocodeLocation:(id)arg1 traits:(id)arg2;
- (id)_cl_ticketForForwardGeocodeAddressDictionary:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)_cl_ticketForForwardGeocodeString:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)ticketForPhoneNumbers:(id)arg1 traits:(id)arg2;
- (id)ticketForMUIDs:(id)arg1 localSearchProviderID:(int)arg2 traits:(id)arg3;
- (int)defaultLocalSearchProviderID;
- (void)submitUsageForTraits:(id)arg1 mapItem:(id)arg2 timestamp:(double)arg3 resultIndex:(int)arg4;
- (id)_ticketForFragment:(id)arg1 entriesType:(int)arg2 listType:(int)arg3 traits:(id)arg4;
- (id)ticketForSearchQuery:(id)arg1 completionItem:(id)arg2 localSearchProviderID:(int)arg3 maxResults:(unsigned int)arg4 suppressResultsRequiringAttribution:(BOOL)arg5 traits:(id)arg6;
- (id)ticketForReverseGeocodeCoordinate:(struct { double x1; double x2; })arg1 traits:(id)arg2;
- (id)ticketForReverseGeocodeCoordinate:(struct { double x1; double x2; })arg1 includeEntryPoints:(BOOL)arg2 traits:(id)arg3;
- (id)ticketForForwardGeocodeAddress:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)ticketForForwardGeocodeString:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)defaultTraits;
- (id)_ticketForAutoCompleteFragment:(id)arg1 entriesType:(int)arg2 listType:(int)arg3 traits:(id)arg4;
- (id)_ticketForSearchQuery:(id)arg1 suggestionsPrefix:(id)arg2 localSearchProviderID:(int)arg3 maxResults:(unsigned int)arg4 suppressResultsRequiringAttribution:(BOOL)arg5 traits:(id)arg6;
- (id)_ticketForSearchQuery:(id)arg1 completionItem:(id)arg2 localSearchProviderID:(int)arg3 maxResults:(unsigned int)arg4 suppressResultsRequiringAttribution:(BOOL)arg5 traits:(id)arg6;
- (id)_ticketForReverseGeocodeCoordinate:(struct { double x1; double x2; })arg1 includeEntryPoints:(BOOL)arg2 traits:(id)arg3;
- (id)_ticketForForwardGeocodeAddress:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)_ticketForMUIDs:(id)arg1 localSearchProviderID:(int)arg2 traits:(id)arg3;
- (id)_ticketForSearchQuery:(id)arg1 hint:(id)arg2 localSearchProviderID:(int)arg3 maxResults:(unsigned int)arg4 suppressResultsRequiringAttribution:(BOOL)arg5 traits:(id)arg6;
- (id)searchURL;
- (id)directionsURL;
- (int)localSearchProviderID;

@end
