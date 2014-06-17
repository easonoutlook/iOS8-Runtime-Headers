/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableArray, NSArray;

@interface TWCCityUpdater : TWCUpdater  {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _weatherUpdateCompletion;

    NSArray *_requestedCities;
    NSMutableArray *_parsedCities;
}

@property(retain) NSArray * requestedCities;
@property(retain) NSMutableArray * parsedCities;

+ (void)clearSharedCityUpdater;
+ (id)sharedCityUpdater;

- (void)setParsedCities:(id)arg1;
- (id)parsedCities;
- (void)setRequestedCities:(id)arg1;
- (id)requestedCities;
- (void)_failed:(unsigned int)arg1;
- (void)updateWeatherForCities:(id)arg1 withCompletionHandler:(id)arg2;
- (void)handleCompletionForCity:(id)arg1 withUpdateDetail:(unsigned int)arg2;
- (void)updateWeatherForCity:(id)arg1;
- (id)aggregateDictionaryDomain;
- (void)dealloc;

@end
