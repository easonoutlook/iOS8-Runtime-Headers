/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSMutableDictionary, NSDictionary;

@interface SSMetricsMutableEvent : SSMetricsEvent <NSMutableCopying> {
    NSMutableDictionary *_mutableBody;
}

@property(copy,readonly) NSDictionary * bodyDictionary;


- (void)addPropertiesWithDictionary:(id)arg1;
- (void)appendPropertiesToBody:(id)arg1;
- (id)bodyDictionary;
- (id)initWithBodyDictionary:(id)arg1;
- (id)propertyForBodyKey:(id)arg1;
- (void)setProperty:(id)arg1 forBodyKey:(id)arg2;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)dealloc;
- (id)init;

@end
