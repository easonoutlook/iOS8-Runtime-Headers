/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSNumber, NSString;

@interface SSMetricsBaseEvent : SSMetricsMutableEvent  {
}

@property(retain) NSString * eventType;
@property(retain) NSNumber * baseVersion;
@property(retain) NSNumber * eventVersion;
@property double originalTime;
@property(retain) NSNumber * pixelRatio;
@property(retain) NSNumber * screenHeight;
@property(retain) NSNumber * screenWidth;
@property(retain) NSNumber * windowHeight;
@property(retain) NSString * windowOrientation;
@property(retain) NSNumber * windowWidth;
@property(retain) NSString * applicationIdentifier;
@property(retain) NSNumber * clientVersion;
@property(retain) NSString * hostApplicationIdentifier;
@property(retain) NSNumber * previousClientVersion;
@property(retain) NSString * topic;
@property(retain) NSString * userAgent;
@property(retain) NSString * pageContext;
@property(retain) NSString * pageDescription;
@property unsigned long long pageID;
@property(retain) NSString * pageType;
@property(retain) NSString * pageURL;
@property(retain) NSNumber * accountIdentifier;
@property(retain) NSString * connection;


- (id)screenWidth;
- (id)screenHeight;
- (id)windowWidth;
- (id)windowHeight;
- (void)setWindowWidth:(id)arg1;
- (void)setWindowHeight:(id)arg1;
- (void)setScreenWidth:(id)arg1;
- (void)setScreenHeight:(id)arg1;
- (void)setPreviousClientVersion:(id)arg1;
- (void)setPixelRatio:(id)arg1;
- (void)setPageID:(unsigned long long)arg1;
- (void)setPageDescription:(id)arg1;
- (void)setEventType:(id)arg1;
- (void)setClientVersion:(id)arg1;
- (id)previousClientVersion;
- (id)pixelRatio;
- (unsigned long long)pageID;
- (id)pageDescription;
- (id)clientVersion;
- (id)eventVersion;
- (BOOL)isBlacklistedByConfiguration:(id)arg1;
- (id)windowOrientation;
- (id)pageContext;
- (id)hostApplicationIdentifier;
- (void)setHostApplicationIdentifier:(id)arg1;
- (void)setTopic:(id)arg1;
- (void)setOriginalTime:(double)arg1;
- (double)originalTime;
- (void)setEventVersion:(id)arg1;
- (void)setPageContext:(id)arg1;
- (void)setWindowOrientation:(id)arg1;
- (id)pageType;
- (void)setPageType:(id)arg1;
- (void)setOriginalTimeUsingDate:(id)arg1;
- (void)setApplicationIdentifier:(id)arg1;
- (void)setUserAgent:(id)arg1;
- (id)accountIdentifier;
- (id)topic;
- (void)setConnection:(id)arg1;
- (id)connection;
- (id)pageURL;
- (void)setPageURL:(id)arg1;
- (id)applicationIdentifier;
- (void)setBaseVersion:(id)arg1;
- (id)baseVersion;
- (void)setAccountIdentifier:(id)arg1;
- (id)description;
- (id)init;
- (id)userAgent;
- (id)eventType;

@end
