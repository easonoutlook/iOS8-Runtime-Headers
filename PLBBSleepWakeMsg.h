/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@class NSString, NSDictionary, NSNumber, NSMutableDictionary;

@interface PLBBSleepWakeMsg : PLBBMsgRoot  {
    NSString *_swReason;
    NSString *_swAtCmd;
    NSString *_swRawData;
    NSNumber *_swSvcId;
    NSString *_swClientId;
    NSString *_swMsgId;
    NSString *_swMsgType;
    NSString *_swCmdName;
    NSString *_swCmdFullName;
    NSDictionary *_swIpData;
    NSString *_swRadioClass;
    NSString *_swCTData;
    NSString *_swChan;
    NSString *_swCmd;
    NSMutableDictionary *_commonInfo;
    NSMutableDictionary *_kvPairs;
}

@property(retain) NSString * swReason;
@property(retain) NSString * swAtCmd;
@property(retain) NSString * swRawData;
@property(retain) NSNumber * swSvcId;
@property(retain) NSString * swClientId;
@property(retain) NSString * swMsgId;
@property(retain) NSString * swMsgType;
@property(retain) NSString * swCmdName;
@property(retain) NSString * swCmdFullName;
@property(retain) NSDictionary * swIpData;
@property(retain) NSString * swRadioClass;
@property(retain) NSString * swCTData;
@property(retain) NSString * swChan;
@property(retain) NSString * swCmd;
@property(retain) NSMutableDictionary * commonInfo;
@property(retain) NSMutableDictionary * kvPairs;

+ (id)entryEventPointDefinitionSleepWakeActivity;

- (void)setKvPairs:(id)arg1;
- (id)kvPairs;
- (void)setCommonInfo:(id)arg1;
- (id)commonInfo;
- (void)setSwCmd:(id)arg1;
- (void)setSwChan:(id)arg1;
- (void)setSwCTData:(id)arg1;
- (id)swCTData;
- (void)setSwRadioClass:(id)arg1;
- (void)setSwIpData:(id)arg1;
- (void)setSwCmdFullName:(id)arg1;
- (void)setSwCmdName:(id)arg1;
- (void)setSwMsgType:(id)arg1;
- (void)setSwMsgId:(id)arg1;
- (void)setSwClientId:(id)arg1;
- (void)setSwSvcId:(id)arg1;
- (void)setSwRawData:(id)arg1;
- (void)setSwAtCmd:(id)arg1;
- (void)setSwReason:(id)arg1;
- (void)appendToErrStr:(id)arg1;
- (void)logEventPointSleepWake;
- (void)refreshSleepWakeActivity;
- (id)swIpData;
- (void)processIPPacketWithEntry:(id)arg1;
- (id)swCmdFullName;
- (id)swCmdName;
- (id)swMsgType;
- (id)swMsgId;
- (id)swSvcId;
- (id)swClientId;
- (id)swChan;
- (id)swRawData;
- (id)swAtCmd;
- (id)swCmd;
- (id)swRadioClass;
- (id)swReason;
- (void)sendAndLogPLEntry:(id)arg1 withName:(id)arg2 withType:(id)arg3;
- (void).cxx_destruct;

@end
