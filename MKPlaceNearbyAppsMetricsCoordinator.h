/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class SSURLBag, NSString, SSMetricsController, NSMutableArray;

@interface MKPlaceNearbyAppsMetricsCoordinator : NSObject  {
    SSMetricsController *_metricsController;
    BOOL _controllerReady;
    NSMutableArray *_callbacks;
    SSURLBag *_urlBag;
    NSString *_pageContext;
    NSString *_topic;
}

@property(copy) NSString * topic;
@property(copy) NSString * pageContext;
@property(readonly) NSMutableArray * callbacks;
@property(readonly) SSURLBag * urlBag;
@property BOOL controllerReady;


- (id)pageContext;
- (void)setTopic:(id)arg1;
- (void)setPageContext:(id)arg1;
- (void)setPageConfiguration:(id)arg1;
- (id)callbacks;
- (id)topic;
- (void).cxx_destruct;
- (void)sendEvent:(id)arg1;
- (void)setControllerReady:(BOOL)arg1;
- (void)getMetricsControllerWithCompletionHandler:(id)arg1;
- (BOOL)controllerReady;
- (void)performCallbacks;
- (id)urlBag;
- (id)initWithConfigurationIdentifier:(id)arg1;

@end
