/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@class NSArray, MPUReportingController, NSObject<OS_dispatch_queue>, NSMutableArray;

@interface MPUReportingController : NSObject  {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableArray *_childReportingControllers;
    MPUReportingController *_parentReportingController;
}

@property(copy,readonly) NSArray * childReportingControllers;
@property MPUReportingController * parentReportingController;


- (void)flushImmediately;
- (void)recordReportingEvents:(id)arg1;
- (void)_recordReportingEvents:(id)arg1;
- (void)removeChildReportingController:(id)arg1;
- (void)addChildReportingController:(id)arg1;
- (id)childReportingControllers;
- (id)parentReportingController;
- (void)setParentReportingController:(id)arg1;
- (void).cxx_destruct;
- (id)init;

@end
