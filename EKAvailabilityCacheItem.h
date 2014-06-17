/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSDate, EKAvailabilitySpan;

@interface EKAvailabilityCacheItem : NSObject  {
    BOOL _unknownSpanType;
    NSDate *_retrievalDate;
    EKAvailabilitySpan *_span;
}

@property(retain) NSDate * retrievalDate;
@property(retain) EKAvailabilitySpan * span;
@property BOOL unknownSpanType;


- (void)setSpan:(id)arg1;
- (id)span;
- (id)description;
- (void)setUnknownSpanType:(BOOL)arg1;
- (BOOL)unknownSpanType;
- (void)setRetrievalDate:(id)arg1;
- (id)retrievalDate;

@end
