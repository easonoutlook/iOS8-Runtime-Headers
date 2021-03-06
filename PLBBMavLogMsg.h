/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@class NSMutableArray, NSArray, NSString, NSDate, NSNumber, NSMutableDictionary;

@interface PLBBMavLogMsg : PLBasebandMessage  {
    NSDate *_bbDate;
    NSNumber *_bbTimeCal;
    NSNumber *_bbSeqNum;
    NSNumber *_bbHwMsgType;
    NSNumber *_bbSwRev;
    NSNumber *_bbHwRev;
    NSNumber *_bbHwStatsType;
    NSNumber *_bbHwStatsLength;
    NSNumber *_bbHwStatsLevel;
    NSNumber *_bbHwCurrTimeStamp;
    NSNumber *_bbHwLastTimeStamp;
    NSNumber *_bbHwLogDurationInTicks;
    NSArray *_bbHwProcSystemState;
    NSArray *_bbHwProcArmPerfState;
    NSArray *_bbHwModemAppQ6FwSpeed;
    NSArray *_bbHwModemAppMdmSpeed;
    NSArray *_bbHwModemAppQ6SwSpeed;
    NSArray *_bbHwModemAppMdspState;
    NSArray *_bbHwModemAppMdspClockState;
    NSArray *_bbHwModemAppMdspSpeed;
    NSArray *_bbHwModemAppMdmState;
    NSArray *_bbHwModemAppAdspState;
    NSArray *_bbHwModemAppAdspClockState;
    NSArray *_bbHwModemAppAdspSpeed;
    NSArray *_bbHwModemAppAdmState;
    NSArray *_bbHwPeripheralUSBState;
    NSArray *_bbHwPeripheralSPIState;
    NSArray *_bbHwPeripheralGPSState;
    NSArray *_bbHwPeripheralUARTState;
    NSNumber *_rpmXOShutDuration;
    NSNumber *_rpmXOShutCnt;
    NSNumber *_rpmVDDMinEnterCnt;
    NSNumber *_rpmVDDMinDuration;
    NSArray *_appsPerfStateCountHist;
    NSNumber *_cxoShutDownDuration;
    NSNumber *_cxoShutDownCount;
    NSArray *_usbStateCountHist;
    NSArray *_uartOnOffState;
    NSArray *_spiOnOffState;
    NSArray *_admOnOffState;
    NSArray *_lpassOnOffState;
    NSArray *_appsSleepVeto;
    NSArray *_mpssSleepVeto;
    NSArray *_mdspConfigCount;
    NSArray *_qdspConfigCount;
    NSArray *_gpsOnOff;
    NSArray *_gpsDPOOnOff;
    NSArray *_gpsDPOBin;
    NSNumber *_mpssCxoShutDownDuration;
    NSNumber *_mpssCxoShutDownCount;
    NSArray *_mcpmVetoNumHistogram;
    NSNumber *_npaVetoMask;
    NSArray *_npaVetoClientNumHistogram;
    NSString *_appsClockStateDurationStr;
    NSString *_mpssClockStateDurationStr;
    NSArray *_hsicStateSleepVetoNum;
    NSNumber *_radioTech;
    NSArray *_rssiModeCount;
    NSArray *_rx0RssiPowerHist;
    NSArray *_rx1RssiPowerHist;
    NSArray *_rx0SQAPowerHist;
    NSArray *_rx1SQAPowerHist;
    NSArray *_txPowerHist;
    NSArray *_protocolStateHist;
    NSArray *_bbActive;
    NSArray *_txPowerHist1x;
    NSArray *_txPowerHistEVDO;
    NSMutableDictionary *_commonInfo;
    NSMutableDictionary *_kvPairs;
    NSString *_groupEntryKey;
    NSString *_groupID;
    NSMutableArray *_groupArrEntries;
    NSMutableDictionary *_groupDict;
}

@property(retain) NSDate * bbDate;
@property(retain) NSNumber * bbTimeCal;
@property(retain) NSNumber * bbSeqNum;
@property(retain) NSNumber * bbHwMsgType;
@property(retain) NSNumber * bbSwRev;
@property(retain) NSNumber * bbHwRev;
@property(retain) NSNumber * bbHwStatsType;
@property(retain) NSNumber * bbHwStatsLength;
@property(retain) NSNumber * bbHwStatsLevel;
@property(retain) NSNumber * bbHwCurrTimeStamp;
@property(retain) NSNumber * bbHwLastTimeStamp;
@property(retain) NSNumber * bbHwLogDurationInTicks;
@property(retain) NSArray * bbHwProcSystemState;
@property(retain) NSArray * bbHwProcArmPerfState;
@property(retain) NSArray * bbHwModemAppQ6FwSpeed;
@property(retain) NSArray * bbHwModemAppMdmSpeed;
@property(retain) NSArray * bbHwModemAppQ6SwSpeed;
@property(retain) NSArray * bbHwModemAppMdspState;
@property(retain) NSArray * bbHwModemAppMdspClockState;
@property(retain) NSArray * bbHwModemAppMdspSpeed;
@property(retain) NSArray * bbHwModemAppMdmState;
@property(retain) NSArray * bbHwModemAppAdspState;
@property(retain) NSArray * bbHwModemAppAdspClockState;
@property(retain) NSArray * bbHwModemAppAdspSpeed;
@property(retain) NSArray * bbHwModemAppAdmState;
@property(retain) NSArray * bbHwPeripheralUSBState;
@property(retain) NSArray * bbHwPeripheralSPIState;
@property(retain) NSArray * bbHwPeripheralGPSState;
@property(retain) NSArray * bbHwPeripheralUARTState;
@property(retain) NSNumber * rpmXOShutDuration;
@property(retain) NSNumber * rpmXOShutCnt;
@property(retain) NSNumber * rpmVDDMinEnterCnt;
@property(retain) NSNumber * rpmVDDMinDuration;
@property(retain) NSArray * appsPerfStateCountHist;
@property(retain) NSNumber * cxoShutDownDuration;
@property(retain) NSNumber * cxoShutDownCount;
@property(retain) NSArray * usbStateCountHist;
@property(retain) NSArray * uartOnOffState;
@property(retain) NSArray * spiOnOffState;
@property(retain) NSArray * admOnOffState;
@property(retain) NSArray * lpassOnOffState;
@property(retain) NSArray * appsSleepVeto;
@property(retain) NSArray * mpssSleepVeto;
@property(retain) NSArray * mdspConfigCount;
@property(retain) NSArray * qdspConfigCount;
@property(retain) NSArray * gpsOnOff;
@property(retain) NSArray * gpsDPOOnOff;
@property(retain) NSArray * gpsDPOBin;
@property(retain) NSNumber * mpssCxoShutDownDuration;
@property(retain) NSNumber * mpssCxoShutDownCount;
@property(retain) NSArray * mcpmVetoNumHistogram;
@property(retain) NSNumber * npaVetoMask;
@property(retain) NSArray * npaVetoClientNumHistogram;
@property(retain) NSString * appsClockStateDurationStr;
@property(retain) NSString * mpssClockStateDurationStr;
@property(retain) NSArray * hsicStateSleepVetoNum;
@property(retain) NSNumber * radioTech;
@property(retain) NSArray * rssiModeCount;
@property(retain) NSArray * rx0RssiPowerHist;
@property(retain) NSArray * rx1RssiPowerHist;
@property(retain) NSArray * rx0SQAPowerHist;
@property(retain) NSArray * rx1SQAPowerHist;
@property(retain) NSArray * txPowerHist;
@property(retain) NSArray * protocolStateHist;
@property(retain) NSArray * bbActive;
@property(retain) NSArray * txPowerHist1x;
@property(retain) NSArray * txPowerHistEVDO;
@property(retain) NSMutableDictionary * commonInfo;
@property(retain) NSMutableDictionary * kvPairs;
@property(retain) NSString * groupEntryKey;
@property(retain) NSString * groupID;
@property(retain) NSMutableArray * groupArrEntries;
@property(retain) NSMutableDictionary * groupDict;

+ (id)getNameBBMavHwOther;
+ (id)entryEventBackwardDefinitionBBMavAllRats;
+ (id)entryEventMavBBMav4HwOther;
+ (id)entryEventBackwardDefinitionMav1BBHwRf;
+ (id)entryEventBackwardMavBBHwOther;
+ (id)entryEventBackwardMavBBHwOtherPerRAT;
+ (id)entryEventMavBBMav2HwOther;

- (void)setGroupDict:(id)arg1;
- (id)bbActive;
- (id)bbHwModemAppQ6SwSpeed;
- (id)bbHwModemAppMdmSpeed;
- (id)bbHwModemAppQ6FwSpeed;
- (void)setBbHwMsgType:(id)arg1;
- (void)setBbSeqNum:(id)arg1;
- (id)bbSeqNum;
- (void)refreshBBMav2HwOther;
- (void)setMavBBHwValue:(id)arg1 forKey:(id)arg2;
- (void)logGrpEntriesMavBBHwOtherPerRat;
- (void)addPLBBEntryToGrp;
- (void)refreshMavBBHwOtherPerRAT;
- (void)addToGroupPLBBMav10HwOther;
- (void)refreshBBMav4HwOther;
- (void)refreshMavBBHwOther;
- (void)refreshMavLogHwRfMsg;
- (void)setRxR1Sqa:(id)arg1;
- (void)refreshMavRfAllRats;
- (void)populateEntryBBMav2HwOther:(id)arg1;
- (id)bbHwPeripheralUARTState;
- (id)bbHwPeripheralGPSState;
- (id)bbHwPeripheralSPIState;
- (id)bbHwModemAppAdmState;
- (id)bbHwModemAppAdspSpeed;
- (id)bbHwModemAppAdspClockState;
- (id)bbHwModemAppAdspState;
- (id)bbHwModemAppMdmState;
- (id)bbHwModemAppMdspSpeed;
- (id)bbHwModemAppMdspClockState;
- (id)bbHwModemAppMdspState;
- (id)bbHwProcArmPerfState;
- (id)bbHwProcSystemState;
- (id)txPowerHist;
- (id)rx1SQAPowerHist;
- (id)rx0SQAPowerHist;
- (id)rx1RssiPowerHist;
- (id)rx0RssiPowerHist;
- (id)rssiModeCount;
- (id)radioTech;
- (id)internaLogEventBackwardBBMavHwOtherPerRAT;
- (void)populateEntryBBMavHwOtherPerRAT:(id)arg1;
- (id)hsicStateSleepVetoNum;
- (id)mpssClockStateDurationStr;
- (id)appsClockStateDurationStr;
- (id)npaVetoClientNumHistogram;
- (id)npaVetoMask;
- (id)mcpmVetoNumHistogram;
- (id)mpssCxoShutDownCount;
- (id)mpssCxoShutDownDuration;
- (id)gpsDPOBin;
- (id)gpsDPOOnOff;
- (id)gpsOnOff;
- (id)qdspConfigCount;
- (id)mdspConfigCount;
- (id)mpssSleepVeto;
- (id)appsSleepVeto;
- (id)lpassOnOffState;
- (id)admOnOffState;
- (id)usbStateCountHist;
- (id)cxoShutDownCount;
- (id)cxoShutDownDuration;
- (id)appsPerfStateCountHist;
- (id)rpmVDDMinEnterCnt;
- (id)rpmVDDMinDuration;
- (id)rpmXOShutCnt;
- (id)rpmXOShutDuration;
- (id)groupDict;
- (void)populateEntryBBMav4HwOther:(id)arg1;
- (id)spiOnOffState;
- (id)uartOnOffState;
- (id)bbHwPeripheralUSBState;
- (id)bbHwMsgType;
- (id)bbHwLastTimeStamp;
- (id)bbHwCurrTimeStamp;
- (id)bbHwStatsLevel;
- (id)bbHwStatsLength;
- (id)bbHwStatsType;
- (id)bbHwRev;
- (id)bbSwRev;
- (void)populateEntryBBMavHwOther:(id)arg1;
- (id)txPowerHistEVDO;
- (id)txPowerHist1x;
- (id)bbHwLogDurationInTicks;
- (void)logEventBackwardBBMavAllRats;
- (void)logEventBackwardMav1BBHwRf;
- (void)setTxPowerHistEVDO:(id)arg1;
- (void)setTxPowerHist1x:(id)arg1;
- (void)setTxEvdoPwr:(id)arg1;
- (void)setTx1xPwr:(id)arg1;
- (void)setRxRssi:(id)arg1;
- (void)setBbHwPeripheralUARTState:(id)arg1;
- (void)setBbHwPeripheralSPIState:(id)arg1;
- (void)setBbHwPeripheralGPSState:(id)arg1;
- (void)setBbHwModemAppAdmState:(id)arg1;
- (void)setBbHwModemAppAdspSpeed:(id)arg1;
- (void)setBbHwModemAppAdspClockState:(id)arg1;
- (void)setBbHwModemAppAdspState:(id)arg1;
- (void)setBbHwModemAppMdmState:(id)arg1;
- (void)setBbHwModemAppMdspSpeed:(id)arg1;
- (void)setBbHwModemAppMdspClockState:(id)arg1;
- (void)setBbHwModemAppMdspState:(id)arg1;
- (void)logEventBackwardBBMav4AllRats;
- (void)setBbHwPeripheralUSBState:(id)arg1;
- (void)setBbHwModemAppQ6SwSpeed:(id)arg1;
- (void)setBbHwModemAppMdmSpeed:(id)arg1;
- (void)setBbHwModemAppQ6FwSpeed:(id)arg1;
- (void)setBbHwProcArmPerfState:(id)arg1;
- (void)setBbHwProcSystemState:(id)arg1;
- (void)setBbHwStatsLevel:(id)arg1;
- (void)setBbHwStatsLength:(id)arg1;
- (void)setBbHwStatsType:(id)arg1;
- (void)setBbHwRev:(id)arg1;
- (void)setBbSwRev:(id)arg1;
- (void)logEventBackwardBBMav4HwOther;
- (void)setGroupArrEntries:(id)arg1;
- (void)setGroupID:(id)arg1;
- (id)groupID;
- (void)setGroupEntryKey:(id)arg1;
- (id)groupArrEntries;
- (id)groupEntryKey;
- (void)setHsicStateSleepVetoNum:(id)arg1;
- (void)setMpssClockStateDurationStr:(id)arg1;
- (void)setAppsClockStateDurationStr:(id)arg1;
- (void)setNpaVetoClientNumHistogram:(id)arg1;
- (void)setNpaVetoMask:(id)arg1;
- (void)setMcpmVetoNumHistogram:(id)arg1;
- (void)setBbActive:(id)arg1;
- (id)logEventBackwardGrpEntriesBBMavHwOtherPerRAT;
- (id)protocolStateHist;
- (void)logEventBackwardBBMav7AllRats;
- (void)setGpsDPOBin:(id)arg1;
- (void)logEventBackwardGrpEntriesBBMavHw;
- (void)setProtocolStateHist:(id)arg1;
- (void)logEventBackwardBBMav5AllRats;
- (void)setRxR0Sqa:(id)arg1;
- (void)setRx1SQAPowerHist:(id)arg1;
- (void)setRx0SQAPowerHist:(id)arg1;
- (void)setGpsDPOOnOff:(id)arg1;
- (void)setGpsOnOff:(id)arg1;
- (void)setUartOnOffState:(id)arg1;
- (void)setSpiOnOffState:(id)arg1;
- (void)setUsbStateCountHist:(id)arg1;
- (void)setLpassOnOffState:(id)arg1;
- (void)addToGroupPLBBMavHwEntry:(id)arg1 withEntryKey:(id)arg2;
- (void)setMdspConfigCount:(id)arg1;
- (void)setAdmOnOffState:(id)arg1;
- (void)setQdspConfigCount:(id)arg1;
- (void)setMpssSleepVeto:(id)arg1;
- (void)setMpssCxoShutDownCount:(id)arg1;
- (void)setMpssCxoShutDownDuration:(id)arg1;
- (void)setAppsSleepVeto:(id)arg1;
- (void)setCxoShutDownCount:(id)arg1;
- (void)setCxoShutDownDuration:(id)arg1;
- (void)setAppsPerfStateCountHist:(id)arg1;
- (void)setRpmVDDMinEnterCnt:(id)arg1;
- (void)setRpmVDDMinDuration:(id)arg1;
- (void)setRpmXOShutCnt:(id)arg1;
- (void)setRpmXOShutDuration:(id)arg1;
- (void)logEventBackwardGrpEntriesBBMav10Hw;
- (void)addToGroupPLBBMavHwOther;
- (void)logEventBackwardMavBBHwOther;
- (void)setBbTimeCal:(id)arg1;
- (id)bbTimeCal;
- (void)addPairWithKey:(id)arg1 andWithVal:(id)arg2;
- (void)setKvPairs:(id)arg1;
- (id)kvPairs;
- (void)setCommonInfo:(id)arg1;
- (id)commonInfo;
- (void)setBbDate:(id)arg1;
- (id)bbDate;
- (void)sendAndLogPLEntry:(id)arg1 withName:(id)arg2 withType:(id)arg3;
- (void)logEventBackwardMavBBHwOtherPerRAT;
- (void)logEventBackwardBBMav2AllRats;
- (void)appendToError:(id)arg1;
- (void)setTxPowerHist:(id)arg1;
- (void)setTxPwrArray:(id)arg1;
- (void)setTxPwr:(id)arg1;
- (void)setTxTicks:(id)arg1;
- (void)setRx1RssiPowerHist:(id)arg1;
- (void)setRxR1Rssi:(id)arg1;
- (void)setRx0RssiPowerHist:(id)arg1;
- (void)setRxR0Rssi:(id)arg1;
- (void)setRssiModeCount:(id)arg1;
- (void)setRxMode:(id)arg1;
- (void)setRxTicks:(id)arg1;
- (void)setRadioTech:(id)arg1;
- (void)setRat:(id)arg1;
- (void)setBbHwLogDurationInTicks:(id)arg1;
- (void)setBbHwLastTimeStamp:(id)arg1;
- (void)setBbHwCurrTimeStamp:(id)arg1;
- (void)logEventBackwardBBMav2HwOther;
- (void)setHeaderWithSeqNum:(id)arg1 andDate:(id)arg2 andTimeCal:(double)arg3;
- (void)setLogDuration:(id)arg1;
- (void)setError:(id)arg1;
- (void).cxx_destruct;
- (void)setDate:(id)arg1;
- (void)setType:(id)arg1;
- (id)init;

@end
