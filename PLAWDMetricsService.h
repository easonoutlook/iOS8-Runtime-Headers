/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@class NSMutableSet, NSMutableDictionary, AWDServerConnection;

@interface PLAWDMetricsService : PLService  {
    AWDServerConnection *_awdServerConn;
    NSMutableSet *_currRunningMetrics;
    NSMutableSet *_updateRunningMetrics;
    NSMutableDictionary *_classDictionary;
}

@property(retain) AWDServerConnection * awdServerConn;
@property(retain) NSMutableSet * currRunningMetrics;
@property(retain) NSMutableSet * updateRunningMetrics;
@property(retain) NSMutableDictionary * classDictionary;

+ (id)entryAggregateDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitions;
+ (void)load;

- (void)threadFunc;
- (id)updateRunningMetrics;
- (void)setUpdateRunningMetrics:(id)arg1;
- (void)setClassDictionary:(id)arg1;
- (void)setCurrRunningMetrics:(id)arg1;
- (void)auxClassWrapper:(id)arg1 withAction:(int)arg2;
- (id)currRunningMetrics;
- (BOOL)connectToAWDServer;
- (id)classDictionary;
- (BOOL)initAWDInterface;
- (void)setAwdServerConn:(id)arg1;
- (id)awdServerConn;
- (void)initOperatorDependancies;
- (void).cxx_destruct;
- (id)init;

@end