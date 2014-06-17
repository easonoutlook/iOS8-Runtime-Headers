/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@class PLXPCListenerOperatorComposition, PLXPCResponderOperatorComposition, PLNSNotificationOperatorComposition;

@interface PLXPCAgent : PLAgent  {
    PLXPCListenerOperatorComposition *_testMarkerXPCListener;
    PLXPCListenerOperatorComposition *_UIKitKeyboardXPCListener;
    PLXPCListenerOperatorComposition *_UIKitActivityXPCListener;
    PLXPCListenerOperatorComposition *_UIKitAlertXPCListener;
    PLXPCListenerOperatorComposition *_DASyncStartXPCListener;
    PLXPCListenerOperatorComposition *_DACalendarItemsDownloadedXPCListener;
    PLXPCListenerOperatorComposition *_DACalendarItemsUploadedXPCListener;
    PLXPCListenerOperatorComposition *_MailFetchXPCListener;
    PLXPCListenerOperatorComposition *_MediaServerdRTCXPCListener;
    PLXPCListenerOperatorComposition *_SafariFetcherXPCListener;
    PLXPCListenerOperatorComposition *_SiriXPCListener;
    PLXPCListenerOperatorComposition *_ApsdXPCListener;
    PLNSNotificationOperatorComposition *_MemoryWarningListener;
    PLXPCListenerOperatorComposition *_AccessoriesXPCListener;
    PLXPCListenerOperatorComposition *_AirDropXPCListener;
    PLXPCListenerOperatorComposition *_SymptomsNetworkAdvisory;
    PLXPCResponderOperatorComposition *_entryRequestResponder;
}

@property(retain) PLXPCListenerOperatorComposition * testMarkerXPCListener;
@property(retain) PLXPCListenerOperatorComposition * UIKitKeyboardXPCListener;
@property(retain) PLXPCListenerOperatorComposition * UIKitActivityXPCListener;
@property(retain) PLXPCListenerOperatorComposition * UIKitAlertXPCListener;
@property(retain) PLXPCListenerOperatorComposition * DASyncStartXPCListener;
@property(retain) PLXPCListenerOperatorComposition * DACalendarItemsDownloadedXPCListener;
@property(retain) PLXPCListenerOperatorComposition * DACalendarItemsUploadedXPCListener;
@property(retain) PLXPCListenerOperatorComposition * MailFetchXPCListener;
@property(retain) PLXPCListenerOperatorComposition * MediaServerdRTCXPCListener;
@property(retain) PLXPCListenerOperatorComposition * SafariFetcherXPCListener;
@property(retain) PLXPCListenerOperatorComposition * SiriXPCListener;
@property(retain) PLXPCListenerOperatorComposition * ApsdXPCListener;
@property(retain) PLNSNotificationOperatorComposition * MemoryWarningListener;
@property(retain) PLXPCListenerOperatorComposition * AccessoriesXPCListener;
@property(retain) PLXPCListenerOperatorComposition * AirDropXPCListener;
@property(retain) PLXPCListenerOperatorComposition * SymptomsNetworkAdvisory;
@property(retain) PLXPCResponderOperatorComposition * entryRequestResponder;

+ (id)bundleIdFromTopic:(id)arg1;
+ (id)entryEventForwardDefinitionSiri;
+ (id)entryEventForwardDefinitionAirDrop;
+ (id)entryEventForwardDefinitionAccessories;
+ (id)entryEventForwardDefinitionSafariFetcher;
+ (id)entryEventForwardDefinitionUIKitAlert;
+ (id)entryEventForwardDefinitionUIKitActivity;
+ (id)entryEventForwardDefinitionUIKitKeyboard;
+ (id)entryEventPointDefinitionsSymptomsNetworkAdvisory;
+ (id)entryEventPointDefinitionApsd;
+ (id)entryEventPointDefinitionJetsam;
+ (id)entryEventPointDefinitionMailFetch;
+ (id)entryEventPointDefinitionDACalendarItemsUploaded;
+ (id)entryEventPointDefinitionDACalendarItemsDownloaded;
+ (id)entryEventPointDefinitionDASyncStart;
+ (id)entryEventPointDefinitionTestMarkers;
+ (id)entryAggregateDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)accountingGroupDefinitions;
+ (id)railDefinitions;
+ (id)defaults;
+ (void)load;

- (id)entryRequestResponder;
- (id)SymptomsNetworkAdvisory;
- (id)AirDropXPCListener;
- (id)AccessoriesXPCListener;
- (void)setMemoryWarningListener:(id)arg1;
- (id)MemoryWarningListener;
- (id)ApsdXPCListener;
- (id)SiriXPCListener;
- (id)SafariFetcherXPCListener;
- (id)MediaServerdRTCXPCListener;
- (id)MailFetchXPCListener;
- (id)DACalendarItemsUploadedXPCListener;
- (id)DACalendarItemsDownloadedXPCListener;
- (id)DASyncStartXPCListener;
- (id)UIKitAlertXPCListener;
- (id)UIKitActivityXPCListener;
- (id)UIKitKeyboardXPCListener;
- (id)testMarkerXPCListener;
- (void)createAirDropAccountingEvent:(id)arg1;
- (void)createAccessoriesAccountingEvent:(id)arg1;
- (void)createApsdAccountingEvent:(id)arg1;
- (void)setEntryRequestResponder:(id)arg1;
- (id)entryRequestResponseForPayload:(id)arg1;
- (void)setSymptomsNetworkAdvisory:(id)arg1;
- (void)logEventPointNetworkSymptomsAdviosry:(id)arg1;
- (void)setApsdXPCListener:(id)arg1;
- (void)logEventPointApsd:(id)arg1;
- (void)setSiriXPCListener:(id)arg1;
- (void)logEventForwardSiri:(id)arg1;
- (void)setAirDropXPCListener:(id)arg1;
- (void)logEventForwardAirDrop:(id)arg1;
- (void)setAccessoriesXPCListener:(id)arg1;
- (void)logEventForwardAccessories:(id)arg1;
- (void)setSafariFetcherXPCListener:(id)arg1;
- (void)logEventForwardSafariFetcherStatus:(id)arg1;
- (void)setMediaServerdRTCXPCListener:(id)arg1;
- (void)logEventBackwardNameMediaServerdRTC:(id)arg1;
- (void)setMailFetchXPCListener:(id)arg1;
- (void)logEventPointMailFetch:(id)arg1;
- (void)setDACalendarItemsUploadedXPCListener:(id)arg1;
- (void)logEventPointDACalendarItemsUploaded:(id)arg1;
- (void)setDACalendarItemsDownloadedXPCListener:(id)arg1;
- (void)logEventPointDACalendarItemsDownloaded:(id)arg1;
- (void)setDASyncStartXPCListener:(id)arg1;
- (void)logEventPointDASyncStart:(id)arg1;
- (void)setUIKitAlertXPCListener:(id)arg1;
- (void)logEventForwardUIKitAlert:(id)arg1;
- (void)setUIKitActivityXPCListener:(id)arg1;
- (void)logEventForwardUIKitActivity:(id)arg1;
- (void)setUIKitKeyboardXPCListener:(id)arg1;
- (void)logEventForwardUIKitKeyboard:(id)arg1;
- (void)setTestMarkerXPCListener:(id)arg1;
- (void)logEventPointTestMarker:(id)arg1;
- (void)logEventPointJetsam:(unsigned long)arg1;
- (void)initOperatorDependancies;
- (void).cxx_destruct;
- (void)log;
- (id)init;

@end
