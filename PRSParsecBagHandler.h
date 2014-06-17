/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Parsec.framework/Parsec
 */

@class NSError, NSMutableData, CLLocation, CLLocationManager, CLInUseAssertion, NSURLSessionDataTask, NSMutableArray, NSDictionary, NSString, NSURL, NSArray;

@interface PRSParsecBagHandler : NSObject <PRSParsecDataHandler, PRSResourceProvider, CLLocationManagerDelegate> {
    BOOL _active;
    BOOL _useLedBelly;
    BOOL _limitedFeedback;
    BOOL _useGUID;
    NSString *_userId;
    NSURL *_searchURL;
    NSURL *_webSearchURL;
    NSURL *_feedbackURL;
    NSURL *_guidURL;
    NSError *_error;
    NSString *_serverVersion;
    int _status;
    int _minimumStringLength;
    int _maximumCachedQueryCount;
    int _maximumCachedResultCount;
    CLLocationManager *_locationManager;
    CLLocation *_location;
    NSArray *_supportedGeoSources;
    CLInUseAssertion *_assertion;
    NSDictionary *_bag;
    NSDictionary *_namedResources;
    NSString *_locale;
    NSString *_storeFrontId;
    NSURLSessionDataTask *_dataTask;
    NSMutableData *_collectedData;
    NSURLSessionDataTask *_guidDataTask;
    NSMutableData *_guidCollectedData;
    NSDictionary *_resources;
    NSMutableArray *_blocks;
    double _feedbackStatsInterval;
    double _retryAfter;
    double _searchRenderTimeout;
}

@property BOOL active;
@property(readonly) NSString * userId;
@property(readonly) NSURL * searchURL;
@property(readonly) NSURL * webSearchURL;
@property(readonly) BOOL useLedBelly;
@property(readonly) BOOL limitedFeedback;
@property(readonly) double feedbackStatsInterval;
@property(readonly) double retryAfter;
@property(readonly) double searchRenderTimeout;
@property(readonly) NSURL * feedbackURL;
@property BOOL useGUID;
@property(readonly) NSURL * guidURL;
@property(readonly) NSError * error;
@property(readonly) NSString * serverVersion;
@property int status;
@property(readonly) int minimumStringLength;
@property(readonly) int maximumCachedQueryCount;
@property(readonly) int maximumCachedResultCount;
@property(readonly) CLLocationManager * locationManager;
@property(readonly) CLLocation * location;
@property(readonly) NSArray * supportedGeoSources;
@property(readonly) CLInUseAssertion * assertion;
@property(readonly) NSDictionary * bag;
@property(readonly) NSDictionary * namedResources;
@property(readonly) NSString * locale;
@property(readonly) NSString * storeFrontId;
@property(retain) NSURLSessionDataTask * dataTask;
@property(retain) NSMutableData * collectedData;
@property(retain) NSURLSessionDataTask * guidDataTask;
@property(retain) NSMutableData * guidCollectedData;
@property(retain) NSDictionary * resources;
@property(retain) NSMutableArray * blocks;

+ (id)sharedHandler;

- (id)feedbackURL;
- (double)searchRenderTimeout;
- (id)_locationSourceForLocation:(id)arg1;
- (id)bag;
- (id)error;
- (void)setResources:(id)arg1;
- (id)resources;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3;
- (id)storeFrontId;
- (id)namedResources;
- (id)supportedGeoSources;
- (int)maximumCachedResultCount;
- (int)maximumCachedQueryCount;
- (int)minimumStringLength;
- (id)guidURL;
- (void)setUseGUID:(BOOL)arg1;
- (double)feedbackStatsInterval;
- (BOOL)limitedFeedback;
- (id)webSearchURL;
- (void)performBlockWhenReady:(id)arg1;
- (id)resourceWithID:(id)arg1;
- (id)guidDataTask;
- (void)loadUserID;
- (void)setGuidCollectedData:(id)arg1;
- (id)guidCollectedData;
- (void)setCollectedData:(id)arg1;
- (id)collectedData;
- (void)reloadBagFromClient:(id)arg1;
- (void)setBlocks:(id)arg1;
- (BOOL)useGUID;
- (void)setGuidDataTask:(id)arg1;
- (id)_locationManagerBundle;
- (void)_deactivateLocationManager;
- (void)_activateLocationManager;
- (void)_setupLocationManager;
- (BOOL)useLedBelly;
- (id)blocks;
- (void)setDataTask:(id)arg1;
- (id)dataTask;
- (id)locationManager;
- (id)searchURL;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (id)serverVersion;
- (id)userId;
- (double)retryAfter;
- (id)assertion;
- (void)setStatus:(int)arg1;
- (int)status;
- (void).cxx_destruct;
- (id)locale;
- (id)location;
- (void)setActive:(BOOL)arg1;
- (BOOL)active;
- (id)init;

@end
