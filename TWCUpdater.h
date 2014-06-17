/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableArray, <WeatherUpdaterDelegate>;

@interface TWCUpdater : WeatherJSONHTTPRequest  {
    NSMutableArray *_updatingCities;
    NSMutableArray *_pendingCities;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _weatherCompletionUpdaterHandler;

    <WeatherUpdaterDelegate> *_delegate;
}

@property(copy) id weatherCompletionUpdaterHandler;
@property <WeatherUpdaterDelegate> * delegate;


- (void)_processLinks:(id)arg1;
- (void)_processCurrentConditions:(id)arg1;
- (void)_processDailyForecasts:(id)arg1;
- (void)_processHourlyForecasts:(id)arg1;
- (id)_ISO8601DateFormatter;
- (id)_ISO8601Calendar;
- (void)setWeatherCompletionUpdaterHandler:(id)arg1;
- (void)addCityToPendingQueue:(id)arg1;
- (BOOL)isDataValid:(id)arg1;
- (void)runAndClearWeatherCompletionWithDetail:(unsigned int)arg1;
- (void)failCity:(id)arg1;
- (void)handleNilCity;
- (void)parsedResultCity:(id)arg1;
- (id)weatherCompletionUpdaterHandler;
- (void)_failed:(unsigned int)arg1;
- (void)handleCompletionForCity:(id)arg1 withUpdateDetail:(unsigned int)arg2;
- (void)_updateNextPendingCity;
- (void)loadRequestForURLPortion:(id)arg1;
- (BOOL)isUpdatingCity:(id)arg1;
- (id)aggregateDictionaryDomain;
- (void)didProcessJSONObject;
- (void)processJSONObject:(id)arg1;
- (id)delegate;
- (void)failWithError:(id)arg1;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)init;

@end