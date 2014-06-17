/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class NSString, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_group>, NSMutableArray;

@interface BWPipelineStage : NSObject  {
    NSObject<OS_dispatch_queue> *_executionQueue;
    NSObject<OS_dispatch_group> *_executionGroup;
    NSMutableArray *_queuedMessages;
    NSMutableArray *_inputsForQueuedMessages;
    NSString *_name;
}

@property(readonly) NSString * name;

+ (void)_setCurrentPipelineStage:(id)arg1;
+ (id)_currentPipelineStage;
+ (id)pipelineStageWithName:(id)arg1 priority:(unsigned int)arg2 discardsLateSampleData:(BOOL)arg3;
+ (id)pipelineStageWithName:(id)arg1 priority:(unsigned int)arg2;
+ (void)initialize;

- (void)_serviceQueuedMessages;
- (BOOL)_isCurrentPipelineStage;
- (id)_initWithName:(id)arg1 priority:(unsigned int)arg2 discardsLateSampleData:(BOOL)arg3;
- (void)sendMessage:(id)arg1 toInput:(id)arg2;
- (id)name;
- (id)description;
- (void)dealloc;

@end
