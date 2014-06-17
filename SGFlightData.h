/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@class <SGSeekable>, NSDictionary, SGOffsetDictionary;

@interface SGFlightData : NSObject  {
    <SGSeekable> *_flightsFh;
    SGOffsetDictionary *_flightDataOffsets;
    <SGSeekable> *_airportsFh;
    SGOffsetDictionary *_airportDataOffsets;
    NSDictionary *_carrierNames;
    NSDictionary *_carrierCodesByName;
}

+ (id)sharedInstance;

- (id)airportCodeForAirportName:(id)arg1 flightCarrier:(id)arg2 flightNumber:(unsigned short)arg3;
- (id)nameForCarrier:(id)arg1;
- (id)carrierIataCodeForCarrierName:(id)arg1;
- (id)carrierIataCodes;
- (id)latitudeAndLongitudeForAirport:(id)arg1;
- (id)timezoneOlsonCodeForAirport:(id)arg1;
- (id)airportIataCodes;
- (id)namesForAirport:(id)arg1;
- (id)airportsServicedByCarrier:(id)arg1 flightNumber:(unsigned short)arg2;
- (void).cxx_destruct;
- (id)init;

@end
