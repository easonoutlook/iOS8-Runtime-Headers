/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableDictionary, NSArray;

@interface CKDGetRecordZonesURLRequest : CKDURLRequest  {
    NSArray *_recordZones;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _recordZoneFetchedBlock;

    NSArray *_zoneIDs;
    NSMutableDictionary *_zoneIDByRequestID;
}

@property(readonly) NSArray * recordZones;
@property(copy) id recordZoneFetchedBlock;
@property(retain) NSArray * zoneIDs;
@property(retain) NSMutableDictionary * zoneIDByRequestID;


- (int)operationType;
- (void)setZoneIDByRequestID:(id)arg1;
- (id)recordZoneFetchedBlock;
- (id)recordZones;
- (id)zoneIDByRequestID;
- (void)setRecordZoneFetchedBlock:(id)arg1;
- (id)initWithRecordZoneIDs:(id)arg1;
- (void)setZoneIDs:(id)arg1;
- (id)requestOperationClasses;
- (int)partitionType;
- (int)serverType;
- (void)requestDidParseNodeFailure:(id)arg1;
- (void)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperations;
- (id)zoneIDs;
- (void).cxx_destruct;

@end
