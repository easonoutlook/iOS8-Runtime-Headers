/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKRecord, NSMutableSet;

@interface CKRecordGraphNode : NSObject  {
    NSMutableSet *_edges;
    int _indegree;
    CKRecord *_record;
}

@property(copy) NSMutableSet * edges;
@property int indegree;
@property(retain) CKRecord * record;


- (void)setIndegree:(int)arg1;
- (int)indegree;
- (id)CKPropertiesDescription;
- (void)setRecord:(id)arg1;
- (id)record;
- (id)edges;
- (void).cxx_destruct;
- (void)setEdges:(id)arg1;
- (id)description;
- (id)init;

@end