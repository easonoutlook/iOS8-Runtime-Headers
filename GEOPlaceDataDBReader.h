/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPlaceDataDBReader : GEODBReader  {
    struct sqlite3_stmt { } *_queryPhoneNumber;
}


- (id)_placeCardDataForKey:(unsigned long long)arg1;
- (id)placeDataForPhoneNumber:(unsigned long long)arg1;
- (unsigned long long)muidForPhoneNumber:(unsigned long long)arg1;
- (id)placeDataForMUID:(unsigned long long)arg1;
- (void)_openDB;

@end
